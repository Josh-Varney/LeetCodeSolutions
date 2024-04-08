class Solution:
    def containsNearbyDuplicates(self, nums: list[int], k: int):
        i = 0
        j = len(nums) - 1
        
        while i < j:
            if abs(i - j) <= k and nums[i] == nums[j]:
                return True
            else:
                if abs(i - j) <= k:
                    j -= 1
                else:
                    i += 1
        return False
    
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.containsNearbyDuplicates([1,2,3,1,2,3], 2))