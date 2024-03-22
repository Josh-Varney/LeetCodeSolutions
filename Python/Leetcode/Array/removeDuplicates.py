class Solution(object):
    def removeDuplicates(self, nums):
        l = 1
        for r in range(1, len(nums)):
            if nums[r-1] == nums[r]:
                nums[l] = nums[r]
            else:
                nums[l] = nums[r]
                l+=1
        
        return l                
        
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.removeDuplicates([1,1,2,2,3])