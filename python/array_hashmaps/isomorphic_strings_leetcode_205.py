class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
        for c in range(1, len(s)):
            temp = c
            c1 = 1
            c2 = 1
            while c < len(s) and s[c] == s[c-1]:
                c1 += 1
                c += 1 
            c = temp
            while c < len(s) and t[c] == t[c-1]:
                c2 += 1
                c += 1
            if c1 != c2:
                return False
            
        l1 = list(s.count(x) for x in list(s))
        l1.sort()
        l2 = list(t.count(x) for x in list(t))
        l2.sort()
        return True and l1==l2
if __name__ == "__main__":
    s = "badc"
    t = "bacd"
    sol = Solution()
    ans = sol.isIsomorphic(s, t)
    print(ans)
