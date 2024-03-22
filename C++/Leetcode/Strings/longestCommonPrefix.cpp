#include <iostream>
#include <vector>
#include <string>

class Solution {
    public:
        std::string longestCommonPrefix(std::vector<std::string>& strs){
            if (strs.empty()) return "";
            std::string prefix = strs[0];
            for(std::vector<std::string>::iterator itr = strs.begin() + 1; itr != strs.end(); ++itr){
                for(int i=0; i < prefix.size(); ++i){
                    if (i >= (*itr).size() or (*itr)[i] != prefix[i]){  // if size is greater then reduce the size of prefix to the size of str else reduce size because no match
                        prefix = prefix.substr(0, i);
                        break;
                    }
                }
            }
            return prefix;
        }
};

int main(){
    Solution solution_instance;
    std::vector<std::string> strs = {};
    std::cout << solution_instance.longestCommonPrefix(strs) << std::endl;
    return 0;
}