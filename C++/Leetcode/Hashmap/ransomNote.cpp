#include <iostream>
#include <map>
#include <string>

class Solution{
    public:
        bool canConstruct(std::string ransomNote, std::string magazine){
            std::map<char, int> rMap;
            for (const auto& c : ransomNote){
                rMap[c]++;
            }

            for (const auto& c : magazine){
                rMap[c]--;
            }

            for (std::map<char, int>::iterator itr = rMap.begin(); itr != rMap.end(); ++itr){
                if (itr->second > 0){
                    return false;
                }
            }
            return true;
        }
};
                                         
int main(){
    Solution solution_instance;
    std::cout << solution_instance.canConstruct("aa", "aab") << std::endl;
}