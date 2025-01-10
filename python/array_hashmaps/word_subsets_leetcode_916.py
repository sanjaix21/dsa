class Solution(object):
    def wordSubsets(self, words1, words2):
        res = []
        counts = {}
        for ch in range(ord('a'), ord('z')+1):
            counts[chr(ch)] = 0

        for c in counts:
            for w2 in words2:
                maxC = counts[c]
                counts[c] = max(maxC, w2.count(c))

        for w1 in words1:
            is_subset = True
            for c in counts:
                if w1.count(c) < counts[c]:
                    is_subset = False
                    break
            if is_subset:
                res.append(w1)

        return res
if __name__ == "__main__":
    w1 = ["amazon","apple","facebook","google","leetcode"]
    w2 = ["lo","eo"]
    sol = Solution()
    ans = sol.wordSubsets(w1, w2)
    print(ans)

