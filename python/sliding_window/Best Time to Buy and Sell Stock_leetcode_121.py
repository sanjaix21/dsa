''' My method Not very efficient, but works
class Solution(object):
    def maxProfit(self, prices):
        maxProfit = 0
        for price in prices:
            try:
                maxx = max(prices[prices.index(price)+1:])
                maxProfit = max(maxProfit, maxx - price)
            except:
                pass
        return maxProfit
'''

class Solution(object):
    def maxProfit(self, prices):
        l, r = 0, 1
        maxp = 0
        while l < r:
            if prices[l] < prices[r]:
                maxp = max(maxp, prices[r]-prices[l])
            else:
                l = r
            r += 1

if __name__ == "__main__":
    arr = [7,1,5,3,6,4]
    sol = Solution()
    ans = sol.maxProfit(arr)
    print(ans)
