class Solution(object):
    def isPalindrome(self, s):
        p = ''
        for i in range(len(s)):
            if s[i].isalnum():
                p += s[i].lower()
        return p == p[::-1]
        
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.isPalindrome("0P"))