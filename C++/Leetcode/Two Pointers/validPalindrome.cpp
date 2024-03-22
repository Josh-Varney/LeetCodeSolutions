#include <iostream>
#include <string>
#include <algorithm>

class Solution {
    public: 
        bool isPalindrome(std::string s){
            std::string filteredString;    // std::transform(filteredString.begin(), filteredString.end(), std::toLower());
            for(const auto& c : s){
                if (std::isalnum(c)){
                    filteredString += std::tolower(c);
                }
            }
            std::string nonReversed = filteredString;
            std::reverse(filteredString.begin(), filteredString.end());
            return nonReversed == filteredString;
        }
};

int main(){
    Solution solution_instance; 
    std::cout << solution_instance.isPalindrome("A man, a plan, a canal: Panama") << std::endl;
    return 0;
}