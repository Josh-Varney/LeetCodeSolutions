class Solution:
    def summaryRanges(self, nums: list[int]) -> list[str]:
        if not nums:
            return []
        
        if len(nums) == 1:
            return [str(nums[0])]
        
        res = []
        l = 0
        for r in range(1, len(nums)):
            if nums[r - 1] != nums[r] - 1 and nums[l] != nums[r - 1]:
                res_str = "{} -> {}".format(nums[l], nums[r - 1])
                res.append(res_str)
                l = r
            elif nums[r - 1] != nums[r] - 1 and nums[l] == nums[r - 1]:
                res_str = "{}".format(nums[l])
                res.append(res_str)
                l += 1
            
        if l == r:
            res_str = "{}".format(nums[l])
        else:
            res_str = "{} -> {}".format(nums[l], nums[len(nums)-1])
        res.append(res_str)
            
        return res
            
    
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.summaryRanges([-1]))