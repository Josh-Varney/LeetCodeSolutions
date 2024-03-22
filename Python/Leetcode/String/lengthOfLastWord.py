class Solution:
    def lengthOfLastWord(self, s):
        s = s.strip()
        c = 0
        for i in range(len(s)-1, -1, -1):
            if s[i] == ' ':
                return c
            c += 1
        return c
    
    def lengthOfLastWord2(self, s):
        return len(s.split()[-1])
        
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.lengthOfLastWord("   fly me   to   the moon  "))