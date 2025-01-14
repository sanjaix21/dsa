class Solution(object):
    def canConstruct(self, s, k):
        if len(s) < k:
            return False
        
        count = Counter(s)
        odd = 0
        for cnt in count.values():
            odd += cnt%2
        return odd <= k
