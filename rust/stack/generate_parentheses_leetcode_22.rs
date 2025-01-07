struct Solution {}

impl Solution {
    fn new() -> Self {
        Solution {}
    }

    pub fn generate_parenthesis(n: i32) -> Vec<String> {
        let mut res: Vec<String> = Vec::new();
        fn backtrack(openN: i32, closeN: i32, n: i32, current: &mut String, res: &mut Vec<String>) {
            if (openN == closeN) && (closeN == n) {
                res.push(current.clone());
            }

            if openN < n {
                current.push('(');
                backtrack(openN + 1, closeN, n, current, res);
                current.pop();
            }

            if closeN < openN {
                current.push(')');
                backtrack(openN, closeN + 1, n, current, res);
                current.pop();
            }
        }
        let mut current: String = String::new();
        backtrack(0, 0, n, &mut current, &mut res);
        res
    }
}

fn main() {
    let ans = Solution::generate_parenthesis(3);
    println!("{:?}", ans);
}
