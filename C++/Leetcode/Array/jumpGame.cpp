#include <iostream>
#include <vector> 

class Solution{
    public:
        bool jumpGame(std::vector<int>& nums){
            int goalpost = nums.size()-1;

            for(int i=nums.size()-2; i >= 0; --i){
                if ((nums[i] + i) >= goalpost){
                    goalpost = i;
                }
            }
            return goalpost==0;
        }
};


int main(){
    Solution solution_instance;
    std::vector<int> nums = {2,3,1,1,4};
    std::cout << solution_instance.jumpGame(nums) << std::endl;
}