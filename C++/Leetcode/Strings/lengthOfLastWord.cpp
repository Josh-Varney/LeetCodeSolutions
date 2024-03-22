#include <iostream>
#include <vector>

class Solution {
    public:
        int lengthOfLastWord(std::string s){
            int c = 0;
            bool bVal = false;
            for (int i = s.size() - 1; i >= 0; i--){
                std::cout << s[i] << std::endl;
                if (s[i] == ' ' and bVal == false){
                    continue;
                }
                else if (isalpha(s[i])){
                    bVal = true;
                    c++;
                }
                else {
                    return c;
                }
            }
            return c;
        }
};

int main(){
    Solution solution_instance;
    std::string s = "   fly me to the   moon";
    std::cout << solution_instance.lengthOfLastWord(s) << std::endl;
}