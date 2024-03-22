class Solution(object):
    def removeElement(self, nums, val):
        l = 0
        for r in range(len(nums)):
            if nums[r] != val:
                nums[l] = nums[r]
                l += 1
            else:
                nums[l] = nums[r]
                
        return l 

if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.removeElement([3,2,2,2,3], 3)