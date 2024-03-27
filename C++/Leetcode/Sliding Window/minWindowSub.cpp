#include <iostream>
#include <string>
#include <unordered_map>
#include <limits>
#include <algorithm>

class Solution {
    public:
        std::string minWindow(std::string s, std::string t) { // 266 out of 267 (Memory Limit Exceeded)
            if (t.empty()) return "";

            int l = 0;
            int minimum = std::numeric_limits<int>::max();
            std::string res;

            std::unordered_map<char, int> tMap;
            for (const auto& c : t) {
                tMap[c]++;
            }
            int need = tMap.size();

            std::unordered_map<char, int> sMap;
            int have = 0;
            for (int r = 0; r < s.size(); ++r) {
                if (tMap.find(s[r]) != tMap.end()) {
                    sMap[s[r]]++;
                    if (sMap[s[r]] == tMap[s[r]]) {
                        have++;
                    }
                }

                while (have == need) {
                    if (r - l + 1 < minimum) {
                        minimum = r - l + 1;
                        res = s.substr(l, r - l + 1);
                    }

                    if (tMap.find(s[l]) != tMap.end()) {
                        sMap[s[l]]--;
                        if (sMap[s[l]] < tMap[s[l]]) {
                            have--;
                        }
                    }
                    l++;
                }
            }
            return res;
        }

    private:
        void printMap(std::unordered_map<char, int> map){
            std::cout << "{ ";
            for (std::unordered_map<char, int>::iterator itr = map.begin(); itr != map.end(); ++itr){
                std::cout << itr->first << ", " << itr->second << " ";
            }
            std::cout << "}" << std::endl;
        }
};

int main(){
    Solution solution_instance;
    solution_instance.minWindow("ADOBECODEBANC", "ABC");
    return 0;
}