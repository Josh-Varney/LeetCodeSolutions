class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        return len(s.split()[-1])
    
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.lengthOfLastWord("   fly me   to   the moon  ")