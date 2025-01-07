struct MinStack {
    stack: Vec<i32>,
    minstack: Vec<i32>,
}

impl MinStack {
    fn new() -> Self {
        MinStack {
            stack: Vec::new(),
            minstack: Vec::new(),
        }
    }

    fn push(&mut self, val: i32) {
        self.stack.push(val);
        if self.minstack.is_empty() || val < *self.minstack.last().unwrap() {
            self.minstack.push(val);
        } else {
            self.minstack.push(*self.minstack.last().unwrap());
        }
    }

    fn pop(&mut self) {
        if self.stack.is_empty() {
            eprintln!("stack is empty");
        } else {
            self.stack.pop().unwrap();
            self.minstack.pop().unwrap();
        }
    }

    fn top(&self) -> i32 {
        *self.stack.last().unwrap()
    }

    fn get_min(&self) -> i32 {
        *self.minstack.last().unwrap()
    }
}

fn main() {
    let mut stack: MinStack = MinStack::new();
    stack.push(2);
    stack.push(4);
    stack.push(-2);
    println!("{}", stack.get_min());
    stack.pop();
    println!("{}", stack.top());
    println!("{}", stack.get_min());
}

