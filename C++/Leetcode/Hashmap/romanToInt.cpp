#include <iostream>
#include <map>
#include <string>

class Solution {
    public:
        int romanToInt(std::string s){
            int int_total = 0;
            std::map<char, int> romanNumerals = {
                    {'M', 1000},
                    {'D', 500},
                    {'C', 100},
                    {'L', 50},
                    {'X', 10},
                    {'V', 5},
                    {'I', 1}
            };

            for(int i=0; i < s.size(); ++i){
                if (romanNumerals[s[i+1]] > romanNumerals[s[i]]){
                    int_total -= romanNumerals[s[i]];
                } else {
                    int_total += romanNumerals[s[i]];
                }
            }

            return int_total;
        }
};



int main(){
    Solution solution_instance;
    std::cout << solution_instance.romanToInt("MCMXCIV") << std::endl;
    return 0;
}