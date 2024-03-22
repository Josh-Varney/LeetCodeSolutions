class Solution(object):
    def wordPattern(self, pattern, s):
        pMap = {}
        s = s.split()
        
        if len(pattern) != len(s):
            return False
            
        for i in range(len(pattern)):
            if pattern[i] not in pMap and s[i] not in pMap.values():
                pMap[pattern[i]] = s[i]
            elif pattern[i] not in pMap and s[i] in pMap.values():
                return False
            else:
                if pMap[pattern[i]] != s[i]:
                    return False
        return True
                
            
        
        
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.wordPattern("abba", "dog dog dog dog"))