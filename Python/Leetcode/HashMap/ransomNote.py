class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        ranMap = {}
        for char in ransomNote:
            ranMap[char] = ranMap.get(char, 0) + 1

        for char in magazine:
            ranMap[char] = ranMap.get(char, 0) - 1
        
        for i, val in ranMap.items():
            if val > 0:
                return False
        return True
    
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.canConstruct("aa", "aab")