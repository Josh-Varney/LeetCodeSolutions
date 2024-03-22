class Solution:
    def twoSum(self, numbers, target):
        map = {}
        for i in range(len(numbers)):
            complement = target - numbers[i]
            if complement in map:
                return [map[complement]+1, i+1]
            else:
                map[numbers[i]] = i
        return [-1, -1]
            
    
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.twoSum([2,3,4], 6))