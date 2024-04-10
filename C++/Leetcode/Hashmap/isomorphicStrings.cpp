#include <iostream>
#include <string>
#include <map>

class Solution {
    public:
        bool isIsomorphic(std::string s, std::string t){ // Not complete need to learn how to zip
            if (s.size() != t.size()){
                return false;
            }
            
            std::map<char, int> sMap;
            std::map<char, int> tMap;
            for (int i=0; i<s.size(); ++i){
                sMap[s[i]]++;
                tMap[t[i]]++;
            }

            for ()
        }

    private:
        void printMap(std::map<char, int> map){
            for (const auto& pair : map){
                std::cout << pair.first << " " << pair.second << std::endl;
            }
        }
};

int main(){
    Solution solution_instance;
    solution_instance.isIsomorphic("egg", "add");
}