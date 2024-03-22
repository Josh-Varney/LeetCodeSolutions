#include <iostream>
#include <vector>
#include <map>

class Solution {
    public:
        std::string intToRoman(int num){
            std::string result = "";
            std::map<int, std::string, std::greater<int>> romanMap = {    // std::greater<int> sorts the elements based on this
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
            {1, "I"}
        };

        for (const auto& entry : romanMap) {            // More modern way
            while (num >= entry.first) {
                result += entry.second;
                num -= entry.first;
            }
        }

        return result;
            

    }
};

int main(){
    Solution solution_instance;
    std::cout << solution_instance.intToRoman(1994) << std::endl;
}