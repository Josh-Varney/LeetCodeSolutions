class Solution(object):
    def threeSum(self, nums):
        res = set()
        nums.sort()
        for i in range(len(nums)):
            
            l = i + 1
            r = len(nums) - 1
            
            while (l < r):
                
                if nums[i] + nums[l] + nums[r] == 0 and [nums[i], nums[l], nums[r]]:
                    res.add((nums[i], nums[l], nums[r]))
                    l += 1
                    r -= 1
                    
                elif 0 < nums[i] + nums[l] + nums[r]:
                    r -= 1
                else:
                    l += 1
            
        return list(res)
                    
            
        
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.threeSum([0,1,1])