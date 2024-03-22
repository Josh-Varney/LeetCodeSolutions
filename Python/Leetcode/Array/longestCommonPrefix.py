class Solution:
    def longestCommonPrefix(self, strs: str):
        prefix = strs[0]
        for str in strs[1:]:
            for i in range(len(prefix)):
                if i >= len(str) or str[i] != prefix[i]:
                    prefix = prefix[:i]
                    break
        return prefix
                
                

if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.longestCommonPrefix(["ab", "a"])