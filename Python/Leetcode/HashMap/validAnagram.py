class Solution(object):
    def isAnagram(self, s, t):
        sMap = {}
        
        if len(s) != len(t):
            return False
        
        for char in s:
            sMap[char] = sMap.get(char, 0) + 1
            
        for char in t:
            sMap[char] = sMap.get(char, 0) - 1
            
        for key, val in sMap.items():
            if abs(val) > 0:
                return False
        return True
    
    def isAnagram2(self, s, t):
        if len(s) != len(t):
            return False
        
        for i in set(s):
            if s.count(i) != t.count(i):
                return False
        return True
    
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.isAnagram("anagram", "nagaram")