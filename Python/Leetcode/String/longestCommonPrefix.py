class Solution:
    def longestCommonPrefix(self, strs):
        res = ''
        for i in range(len(strs[0])):
            for s in strs:
                if i == len(s) or s[i] != strs[0][i]:
                    return res
            res += strs[0][i]
                    
                
                
                
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.longestCommonPrefix(["flower","flow","flight"])