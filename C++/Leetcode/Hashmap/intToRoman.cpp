#include <iostream>
#include <map>

class Solution {
    public:
        std::string intToRoman(int num){
            std::map<int, std::string, std::greater<int>> romanNumerals = {  // Adds the comparator
                {1000, "M"},
                {900, "CM"},
                {500, "D"},
                {400, "CD"},
                {100, "C"},
                {90, "XC"},
                {50, "L"},
                {40, "XL"},
                {10, "X"},
                {9, "IX"},
                {5, "V"},
                {4, "IV"},
                {1, "I"},
            };

            std::string res;

            for(std::map<int, std::string>::iterator itr = romanNumerals.begin(); itr != romanNumerals.end(); ++itr){
                while (num >= itr->first){
                    res += itr->second;
                    num -= itr->first;
                }
            }
            return res;
        }
};

int main(){
    Solution solution_instance;
    std::cout << solution_instance.intToRoman(1994) << std::endl;
    return 0;
}