class Solution(object):
    def prefixCount(self, words, pref):
        pl = len(pref)
        n = 0
        for word in words:
            if word[:pl] == pref:
                n += 1
        return n

if __name__ == "__main__":
    sol = Solution()
    ans = sol.prefixCount(["leetcode","win","loops","success"], "code")
    print(ans)
