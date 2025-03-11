class Solution(object):
    def dailyTemperatures(self, temperatures):
        n = 0
        ans = [0] * len(temperatures)
        k = 0
        i = 0
        while k < len(temperatures):
            top = temperatures[k]
            if i == len(temperatures):
                k += 1
                i = k
                n = 0
                continue
            if(n != 0 and top < temperatures[i]):
                ans[k] = n
                n = 0
                k += 1
                i = k
            else:
                n += 1
                i += 1

        return ans

a = [73,74,75,71,69,72,76,73]
# a = [30,40,50,60]
# a = [30, 60, 90]
# a = [55,38,53,81,61,93,97,32,43,78]
sol = Solution()
ans = sol.dailyTemperatures(a)
print(ans)
