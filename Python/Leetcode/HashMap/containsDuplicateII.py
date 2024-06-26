class Solution:
    def containsDuplicateII(self, nums: list[int], k) -> bool:
        window = set()
        
        l = 0
        for r in range(len(nums)):
            if r - l > k:
                window.remove(nums[l])
                l += 1
            
            if nums[r] in window:
                return True
            window.add(nums[r])
        return False

if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.containsDuplicateII([1,2,3,1], 3))