struct Stack<T> {
    stack: Vec<T>,
}

impl<T> Stack<T> {
    fn new() -> Self {
        Stack { stack: Vec::new() }
    }

    fn push(&mut self, item: T) {
        self.stack.push(item)
    }

    fn pop(&mut self) -> Option<T> {
        self.stack.pop()
    }
}

struct Solution;
impl Solution {
    fn new() -> Self {
        Solution {}
    }
    pub fn eval_rpn(self, tokens: Vec<String>) -> i32 {
        let mut stack: Stack<i32> = Stack::new();
        for c in tokens {
            if c.parse::<i32>().is_ok() {
                let c: i32 = c.parse::<i32>().unwrap();
                stack.push(c);
            } else {
                let n2 = stack.pop().unwrap();
                let n1 = stack.pop().unwrap();
                let res = match c.as_str() {
                    "+" => n1 + n2,
                    "-" => n1 - n2,
                    "*" => n1 * n2,
                    "/" => n1 / n2,
                    _ => 0,
                };
                stack.push(res);
            }
        }
        stack.pop().unwrap()
    }
}

fn main() {
    let Sol: Solution = Solution::new();
    let s_vec = vec![
        "10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+",
    ];
    let vec: Vec<String> = s_vec.iter().map(|&s| s.to_string()).collect();
    let ans = Sol.eval_rpn(vec);
    println!("Answer: {}", ans);
}
