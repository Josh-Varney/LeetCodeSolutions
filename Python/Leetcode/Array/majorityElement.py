class Solution(object):
    def majorityElement(self, nums):
        maximum = float('-inf')
        maxDigit = -1
        map = {}
        for digit in nums:
            map[digit] = map.get(digit, 0) + 1
        
        for digit, freq in map.items():
            if freq >= maximum:
                maximum = max(maximum, freq)
                maxDigit = digit
        
        return maxDigit
            
        
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.majorityElement([2,2,1,1,1,2,2])