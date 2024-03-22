class Solution(object):
    def isSubsequence(self, s, t):
        if not s: 
            return True
        l = 0
        for i in range(len(t)):
            if l == len(s):
                return True
            elif s[l] == t[i]:
                l += 1
        
        return l == len(s)
            
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.isSubsequence("axc", "ahbgdc"))