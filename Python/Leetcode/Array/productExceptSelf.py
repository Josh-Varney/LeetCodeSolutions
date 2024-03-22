class Solution(object):
    def productExceptSelf(self, nums):
        arr = [1] * len(nums)
        prefix = 1
        
        for i in range(len(arr)):
            arr[i] = prefix
            prefix *= nums[i]
        
        postfix = 1    
        for i in range(len(nums)-1, -1, -1):
            arr[i] *= postfix
            postfix *= nums[i]

        return arr
        
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.productExceptSelf([1,2,3,4])