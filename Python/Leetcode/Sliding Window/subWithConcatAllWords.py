import copy


class Solution:
    
    def findSubstring(self, s: str, words: list[str]) -> list[int]:  # Works for 178 / 179 cases (Time limit Succeeded)
        res = []
        l = 0
        size_of_concat = len(words) * len(words[0])
        
        for r in range(size_of_concat, len(s)+1, 1):  # Inclusive of 18
            cString = s[l:r]
            
            if len(cString) < size_of_concat:
                break
            
            split_string = [cString[i:i+len(words[0])] for i in range(0, len(cString), len(words[0]))]
            copy_words = copy.deepcopy(words)   # Otherwise acts as a reference to the original array
            
            for i in range(len(split_string)):
                
                if split_string[i] in copy_words:
                    found_index = copy_words.index(split_string[i])
                    copy_words.remove(copy_words[found_index])
                else: 
                    break
                
            if copy_words == []:
                res.append(l)
            
            l += 1
        
        return res
    
    def findSubstringTwo(self, s: str, word: list[str]) -> list[int]:
        if not word:
            return []
        
        wMap = {}
        for c in word:
            wMap[c] = wMap.get(c, 0) + 1
        
        
        l = 0 
        res = []
        for r in range(len(word[0])*len(word), len(s)+1):
            sMap = {}
            for i in range(l, r, len(word[0])):
                if s[i:i+len(word[0])] not in wMap:
                    break
                sMap[s[i:i+len(word[0])]] = sMap.get(s[i:i+len(word[0])], 0) + 1
            
            if sMap == wMap:
                res.append(l)
            
            l += 1
        
        return res
    
    
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.findSubstringTwo("barfoofoobarthefoobarman", ["bar","foo","the"]))