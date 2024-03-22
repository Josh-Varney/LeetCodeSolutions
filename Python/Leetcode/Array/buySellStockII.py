class Solution(object):
    def maxProfit(self, prices):
        total = 0
        for i in range(len(prices)-1):
            if prices[i+1] > prices[i]:
                total += prices[i+1]-prices[i]   
        return total
    

if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.maxProfit([7,1,5,3,6,4]))