#include <iostream>
#include <vector>
#include <map> 

class Solution {
    public:
        int romanToInt(std::string s){
            int int_total = 0;
            std::map<char, int> romanMap = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};

            for (int i = 0; i < s.size(); ++i){
                if (i + 1 < s.size() && romanMap[s[i]] < romanMap[s[i + 1]]){
                    int_total -= romanMap[s[i]];
                }
                else {
                    int_total += romanMap[s[i]];
                }
            }
            std::cout << int_total << std::endl; 
            return int_total;  
        }
};

int main(){
    Solution solution_instance;
    std::string roman = "MCMXCIV";
    solution_instance.romanToInt(roman);
    return 0;
}