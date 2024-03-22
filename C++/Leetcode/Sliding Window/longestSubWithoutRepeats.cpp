#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <limits>

class Solution {
    public:
        int lengthOfLongestSubstring(std::string s){
            int maximum = std::numeric_limits<int>::min();
            int l = 0;

            for(int r=0; r < s.size(); ++r){

                std::set<char> s_set(s.begin() + l, s.begin() + r + 1);

                if (s_set.size() == r - l + 1){
                    int size = s_set.size();
                    maximum = std::max(maximum, size);
                }
                else {
                    l++;
                }
            }
            if (maximum == std::numeric_limits<int>::min()){
                return 0;
            }
            else {
                return maximum;
            }
        }
    
    private:
        void printSet(std::set<char> s){
            for(std::set<char>::iterator itr = s.begin(); itr != s.end(); ++itr){
                std::cout << *itr << std::endl;
            }
        }
};

int main(){
    Solution solution_instance;
    std::cout << solution_instance.lengthOfLongestSubstring("abcabcbb") << std::endl;
}