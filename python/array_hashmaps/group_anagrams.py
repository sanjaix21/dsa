from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs):
        # dick = defaultdict(list)
        dick = {}

        for word in strs:
            word_sorted = ''.join(sorted(word))
            if word_sorted not in dick:
                dick[word_sorted]= []
            dick[word_sorted].append(word)

        return list(dick.values()) 

if __name__ == "__main__":
    sol = Solution()
    ans = sol.groupAnagrams(["eat","tea","tan","ate","nat","bat"])
    print(ans)
