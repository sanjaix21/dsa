use std::io;
struct Solution;

impl Solution {
    pub fn is_palindrome(s: String) -> bool {
        let (mut l, mut r) = (0, s.len() - 1);

        while l < r {
            if !s[l..l + 1].chars().next().unwrap().is_alphanumeric() && l < r {
                l += 1;
                continue;
            }

            if !s[r..r + 1].chars().next().unwrap().is_alphanumeric() && r > l {
                r -= 1;
                continue;
            }

            if s[l..l + 1].to_lowercase() != s[r..r + 1].to_lowercase() {
                return false;
            }

            l += 1;
            r -= 1;
        }

        true
    }
}

fn main() {
    let mut scanner = String::new();
    loop {
        scanner.clear();
        io::stdin()
            .read_line(&mut scanner)
            .expect("Failed to read input");
        let input = scanner.trim().to_string();
        if input == "x" {
            break;
        }
        println!("{:?}", Solution::is_palindrome(input));
    }
}
