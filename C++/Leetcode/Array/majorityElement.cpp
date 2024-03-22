#include <iostream>
#include <vector>
#include <map>
#include <limits>

class Solution {
    public:
        int majorityElement(std::vector<int>& nums){
            int maximum = std::numeric_limits<int>::min();

            int cMax;
            std::map<int, int> nMap;
            for (int i = 0; i < nums.size(); ++i){
                if (nMap.find(nums[i]) != nMap.end()){
                    nMap[nums[i]] += 1;
                } 
                else {
                    nMap[nums[i]] = 1;
                }
            }
            
            for (std::map<int, int>::iterator itr = nMap.begin(); itr != nMap.end(); ++itr){
                if (itr->second > maximum){
                    maximum = itr->second;
                    cMax = itr->first;
                }
            }

            return cMax;
        }

    protected:
        void printMap(std::map<int, int>& nMap){
            for (std::map<int, int>::iterator itr = nMap.begin(); itr != nMap.end(); ++itr){
                std::cout << itr->first << " " << itr->second << std::endl;
            }
        }
};

int main(){
    Solution solution_instance;
    std::vector nums = {2,2,1,1,1,2,2};
    std::cout << solution_instance.majorityElement(nums) << std::endl;
    return 0;
}