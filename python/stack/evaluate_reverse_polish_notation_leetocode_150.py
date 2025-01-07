class Solution(object):
    stack = []
    def evalRPN(self, tokens):
        for ch in tokens:
            if ch.isnumeric():
                stack.append(int(ch))
            else:
                n2 = stack.pop()
                n1 = stack.pop()
                res = int
                if ch == "+":
                    res = n1+n2
                elif ch == "-":
                    res = n1-n2
                elif ch == "*":
                    res = n1*n2
                elif ch == "/"
                    res = n1/n2
        return stack.pop()
