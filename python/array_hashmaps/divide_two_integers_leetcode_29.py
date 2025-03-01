class Solution(object):
    def divide(self, dividend, divisor):
        positive = not (dividend < 0) ^ (divisor < 0)
        dividend, divisor = abs(dividend), abs(divisor)
        res = 0
        while dividend >= divisor:
            temp, i = divisor, 1
            while dividend >= temp:
                dividend -= temp
                res += i
                temp <<= 1
                i <<= 1
        if not positive:
            res = -res

        return min(max(-2147483648, res), 2147483647)
sol = Solution()
ans = sol.divide(100, 22)
print(ans)
 
