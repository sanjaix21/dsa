#![allow(dead_code)]
use std::io;

#[derive(Debug)]
struct Stack<T> {
    stack: Vec<T>,
}

impl<T> Stack<T> {
    fn new() -> Self {
        Stack { stack: Vec::new() }
    }

    fn is_empty(&self) -> bool {
        self.stack.is_empty()
    }

    fn push(&mut self, item: T) {
        self.stack.push(item)
    }

    fn pop(&mut self) -> Option<T> {
        self.stack.pop()
    }

    fn top(&self) -> Option<&T> {
        self.stack.last()
    }
}

fn main() {
    let mut opening: Stack<char> = Stack::new();
    let mut is_valid = true;
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("oops");
    for ch in input.trim().chars() {
        if ch == '(' || ch == '{' || ch == '[' {
            opening.push(ch);
        } else if ch == ')' || ch == '}' || ch == ']' {
            if opening.is_empty() {
                is_valid = false;
                break;
            }
            let top = opening.pop().unwrap();
            if (ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[') {
                is_valid = false;
            }
        } else {
            is_valid = false;
        }
    }

    let answer = is_valid && opening.is_empty();
    println!("The string is valid: {}", answer);
}
