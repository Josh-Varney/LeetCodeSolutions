class Solution(object):
    def isIsmorphic(self, s, t):
        mapST, mapTS = {}, {}
        
        for c1, c2 in zip(s, t):
            
            if ((c1 in mapST and mapST[c1] != c2) or 
                (c2 in mapTS and mapTS[c2] != c1)):
                return False
            
            mapST[c1] = c2
            mapTS[c2] = c1
            
        return True
    
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.isIsmorphic("foo", "bar")