class Solution(object):
    def strStr(self, haystack, needle):
        if len(needle) > len(haystack): return -1
        
        for i in range(len(haystack)-len(needle)+1):
            print(haystack[i:i+len(needle)])
            if haystack[i:i+len(needle)] == needle:
                return i
        return -1
    
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.strStr("sadbutsad", "adb"))