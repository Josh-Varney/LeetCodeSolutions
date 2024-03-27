#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

class Solution {
    public:
        std::vector<int> findSubstring(std::string s, std::vector<std::string>& words) {  // 127 out of 128
            std::unordered_map<std::string, int> wMap;
            for (auto& str : words) {
                wMap[str]++;
            }
    
            int l = 0;
            std::vector<int> res;
            int wordLength = words[0].size();
            
            for (int r = words.size() * wordLength - 1; r < s.size(); ++r) {
                std::unordered_map<std::string, int> sMap;
                std::string cString = s.substr(l, r - l + 1);
                
                for (int i = 0; i <= cString.size() - wordLength; i += wordLength) {
                    std::string substr = cString.substr(i, wordLength);
                    
                    if (wMap.find(substr) == wMap.end()) {
                        break;
                    }
                    
                    sMap[substr]++;

                    
                    if (sMap[substr] > wMap[substr]) {
                        break;
                    }
                    
                    if (sMap == wMap) {
                        res.push_back(l);
                    }
                }
                l++;
            }
            printList(res);
            return res;
        }   

    private:
        void printList(std::vector<std::string> strs){
            std::cout << "[ ";
            for (std::vector<std::string>::iterator itr = strs.begin(); itr != strs.end(); ++itr){
                std::cout << *itr << " ";
            }
            std::cout << "]" << std::endl;
        }
        
        void printList(std::vector<int> nums){
            std::cout << "[ ";
            for (std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); ++itr){
                std::cout << *itr << " ";
            }
            std::cout << "]" << std::endl;
        }

        void printMap(std::unordered_map<std::string, int> map){
            std::cout << "{ ";
            for (std::unordered_map<std::string, int>::iterator itr = map.begin(); itr != map.end(); ++itr){
                std::cout << itr->first << " " << itr->second << ", ";
            }
            std::cout << "}" << std::endl;
        }
};

int main(){
    Solution solution_instance;
    std::string s = "barfoothefoobarman";
    std::vector<std::string> strs;
    strs.push_back("foo");
    strs.push_back("bar");
    solution_instance.findSubstring(s, strs);
    return 0;
}
