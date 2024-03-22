class Solution:
    def removeDuplicates(self, nums):
        l = 1
        count = 1
        
        if len(nums) < 2:
            return l
        
        for r in range(1, len(nums)):
            if nums[r - 1] == nums[r] and count < 2:
                count += 1
                nums[l] = nums[r]
                l += 1
            elif nums[r - 1] == nums[r]:
                count += 1
            elif nums[r - 1] != nums[r]:
                count = 1
                nums[l] = nums[r]
                l += 1   
        nums[l-1] = nums[r]  
        
        print(nums, l)           
        return l
            
                
    
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.removeDuplicates([1, 2, 2, 2, 3])