#include <iostream>

class Solution {
    public:
        int strStr(std::string haystack, std::string needle){
            if (haystack == needle) {
                return 0;
            }
            else if (needle.size() > haystack.size()){
                return -1;
            }
               
            for (int i = 0; i < haystack.size() - needle.size() + 1; ++i){
                if (haystack.substr(i, needle.size()) == needle && i < haystack.size()){
                    return i;
                }
            }
            return -1;
        }
};

int main() { 
    Solution solution_instance;
    std::cout << solution_instance.strStr("abc", "bc") << std::endl;
}