class Solution:
    def jumpGameII(self, nums: list[int]):
        l = r = 0
        res = 0
        
        while r < len(nums)-1:
            furthest = 0
            for i in range(l, r + 1):
                furthest = max(furthest, i + nums[i])
            
            l = r + 1
            r = furthest
            res += 1
        
        return res
                
if __name__=='__main__':
    solution_instance = Solution()
    solution_instance.jumpGameII([2,3,0,1,4])