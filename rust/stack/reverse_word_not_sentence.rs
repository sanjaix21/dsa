struct Stack<T> {
    stack: Vec<T>,
}

impl<T> Stack<T> {
    fn new() -> Self {
        Stack { stack: Vec::new() }
    }

    fn len(&self) -> usize {
        self.stack.len()
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

    fn peek(&self) -> Option<&T> {
        self.stack.last()
    }
}

fn main() {
    let my_str = String::from("I love chocoloate ice cream");
    let mut builder = String::new();
    let mut my_stack: Stack<String> = Stack::new();
    for c in my_str.chars().rev() {
        if c != ' ' {
            builder += &c.to_string();
        } else {
            let temp_string = builder;
            my_stack.push(temp_string);
            builder = String::from("");
        }
    }
    let temp_string = builder;
    my_stack.push(temp_string);
    while !my_stack.is_empty() {
        if let Some(word) = my_stack.peek() {
            print!("{} ", word);
        }
        my_stack.pop();
    }
}
