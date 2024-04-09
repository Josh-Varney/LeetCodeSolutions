class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        res = []
        hashMap = {}
        for i in range(len(strs)):
            cSet = tuple(sorted(strs[i]))
            if cSet not in hashMap:
                hashMap[cSet] = hashMap.get(cSet, [strs[i]])
            else:
                hashMap[cSet].append(strs[i])
        
        return list(hashMap.values())
                
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.groupAnagrams(["eat","tea","tan","ate","nat","bat"]))