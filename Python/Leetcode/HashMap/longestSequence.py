class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        if not nums:
            return 0
        
        maxCount = count = 1
        seen = set()
        nums.sort()
        for r in range(len(nums)):
            
            if nums[r] in seen:
                continue
            elif (nums[r] - 1) in seen:
                count += 1
                seen.add(nums[r])
            else:
                maxCount = max(maxCount, count)
                count = 1
                seen.add(nums[r])

        maxCount = max(maxCount, count)  # Update maxCount after the loop
        return maxCount
        
        
        
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.longestConsecutive([0,3,7,2,5,8,4,6,0,1]))