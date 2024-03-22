#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>

class Solution {
    public: 
        int lengthOfLastWord(std::string s){
            std::vector<std::string> tokens;
            std::stringstream str_stream(s);
            std::string token;

            while (str_stream >> token){
                tokens.push_back(token);
            }

            return tokens[tokens.size()-1].size();
        }

    private:
        void printTokens(std::vector<std::string>& nums){
            std::cout << "[ ";
            for(const auto& n : nums){
                std::cout << n << " ";
            }
            std::cout << "]" << std::endl;
        }
};

int main(){
    Solution solution_instance;
    std::cout << solution_instance.lengthOfLastWord("   fly me   to   the moon  ") << std::endl;
    return 0;
}