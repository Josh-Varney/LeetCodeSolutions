#include <iostream>
#include <string>

class Solution {
    public:
        bool isSubsequence(std::string s, std::string t){
            if (s == ""){
                return true;
            }
            else if (t == ""){
                return false;
            }
            else {
                if (s[0] == t[0]){
                    return isSubsequence(s.substr(1, s.size()), t.substr(1, t.size()));
                }
                else {
                    return isSubsequence(s, t.substr(1, t.size()));
                }
            }
        }
};

int main(){
    Solution solution_instance;
    std::cout << solution_instance.isSubsequence("abc", "ahbgdc") << std::endl;
}