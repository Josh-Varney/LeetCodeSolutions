class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l = 0
        maximum = 0
        
        for r in range(len(s)):
            cLength = len(s[l:r+1])
            
            if (cLength == len(set(s[l:r+1]))):
                maximum = max(maximum, cLength)
            else:
                l += 1
            
        return maximum
    
    
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.lengthOfLongestSubstring("abcabcbb"))