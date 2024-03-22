#include <map>
#include <iostream>
#include <vector>
#include <limits>

class Solution{
    public:
        int MostFrequent(std::vector<int>& nums){
            int maximum = std::numeric_limits<int>::min();
            int cNum;

            std::map<int, int> cMap;
            for(int i=0; i < nums.size(); ++i){
                if(cMap.find(nums[i]) != cMap.end()){
                    cMap[nums[i]]++;
                } else {
                    cMap[nums[i]]=1;
                }
            }

            printMap(cMap);

            for(std::map<int,int>::iterator itr = cMap.begin(); itr != cMap.end(); ++itr){
                if(maximum < itr->second){
                    maximum = itr->second;
                    cNum = itr->first;
                }
            }

            return cNum;
        }

    protected:
        void printMap(std::map<int, int> cMap){
            for(std::map<int, int>::iterator itr = cMap.begin(); itr != cMap.end(); ++itr){
                std::cout << itr->first << " " << itr->second << std::endl;
            }
        }
};


int main(){
    Solution solution_instance;
    std::vector<int> nums = {7,1,5,3,6,1};

    std::cout << solution_instance.MostFrequent(nums) << std::endl;
    return 0;
}