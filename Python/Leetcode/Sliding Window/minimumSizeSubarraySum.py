class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        l, total = 0, 0
        minimum = float("inf")
        for r in range(len(nums)):
            total += nums[r]
            while total >= target:
                minimum = min(r - l + 1, minimum)
                total -= nums[l]
                l += 1
        
        return 0 if minimum == float("inf") else minimum
            
            
            
    
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.minSubArrayLen(7, [2,3,1,2,4,3]))