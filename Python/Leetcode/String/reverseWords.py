class Solution:
    def reverseWords(self, s):
        s = ' '.join(s.split()[::-1])
        return s
    
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.reverseWords("a good   example")