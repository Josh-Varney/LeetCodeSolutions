class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if t == "": return ""
        
        minimum = float("inf")
        res = ""
        
        tMap, sMap = {},{}
        for c in t:
            tMap[c] = tMap.get(c, 0) + 1
        need = len(tMap)
        
        l = 0
        have = 0
        for r in range(len(s)):
            sMap[s[r]] = sMap.get(s[r], 0) + 1
            
            if s[r] in tMap and sMap[s[r]] == tMap[s[r]]:
                have += 1
            
            while have == need:
                # Update our result 
                if minimum > (r - l + 1):
                    res = s[l:r+1]
                    minimum = min(minimum, r - l + 1)
                
                sMap[s[l]] -= 1
                if s[l] in tMap and sMap[s[l]] < tMap[s[l]]:  # Need to check that its in map if not error
                    have -= 1
                l += 1
                
        return res
        
        
    
if __name__=='__main__':
    solution_instance = Solution()
    print(solution_instance.minWindow("ADOBECODEBANC", "ABC"))