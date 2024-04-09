#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <tuple>
#include <algorithm>

class Solution {
    public:

        std::vector<std::vector<std::string>> groupAnagram(std::vector<std::string>& strs){  // 106 / 122
            std::vector<std::vector<std::string>> res;
            std::map<std::set<char>, std::vector<std::string>> hashMap;

            for (int i=0; i<strs.size(); ++i){
                std::set<char> cSet;
                for (const auto& c : strs[i]){
                    cSet.insert(c);
                }

                printSet(cSet);
                
                if (hashMap.find(cSet) == hashMap.end()){
                    hashMap[cSet] = {strs[i]};
                }
                else {
                    hashMap[cSet].push_back(strs[i]);
                }
            }

            for (auto& pair : hashMap){
                res.push_back(pair.second);
            }

            return res;
        }

    private:
        void printHashMap(std::map<std::set<char>, std::vector<std::string>> hashMap){
            for (std::map<std::set<char>, std::vector<std::string>>::iterator itr = hashMap.begin(); itr != hashMap.end(); ++itr){
                
                for (const auto& c : itr->first){
                    std::cout << c << std::endl;    
                }

                for (const auto& c : itr->second){
                    std::cout << c << std::endl;
                }
            }
        }

        void printList(std::vector<char>& chars){
            for (const auto& c : chars){
                std::cout << c << std::endl;
            }
        }

        void printSet(std::set<char> set){
            for (const auto& c : set){
                std::cout << c << " ";
            }
            std::cout << std::endl;
        }
};

int main(){
    Solution solution_instance;
    std::vector<std::string> strs = {"ddddddddddg","dgggggggggg"};
    solution_instance.groupAnagram(strs);
    return 0;
}
