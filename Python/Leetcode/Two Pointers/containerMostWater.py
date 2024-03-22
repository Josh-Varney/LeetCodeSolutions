class Solution(object):
    def maxArea(self, height):
        
        maximum = 0
        l, r = 0, len(height)-1
        
        while l < r:
            maximum = max(maximum, (r - l) * min(height[l], height[r]))
            if height[l] > height[r]:
                r -= 1
            else:
                l += 1
        return maximum

if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.maxArea([1,8,6,2,5,4,8,3,7])