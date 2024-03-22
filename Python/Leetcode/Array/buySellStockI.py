class Solution(object):
    def maxProfit(self, prices):
        maxPrice = 0
        minimum = prices[0]
        for i in range(1, len(prices)):
            if prices[i]-minimum > maxPrice:
                maxPrice = max(maxPrice, prices[i]-minimum)
            minimum = min(minimum, prices[i])
        return maxPrice
        
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.maxProfit([7,6,4,3,1])