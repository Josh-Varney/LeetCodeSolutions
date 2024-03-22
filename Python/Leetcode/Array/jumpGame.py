class Solution:
    def canJump(self, nums: list[int]) -> bool:
        goalpost = len(nums)-1
        
        for i in range(len(nums)-2, -1, -1):
            if nums[i] + i >= goalpost:
                goalpost = i
                
        return goalpost==0       
        
if __name__=='__main__':
    solution_instance = Solution()
    arr = [3,2,1,0,4]
    
    print(solution_instance.canJump(arr))
    