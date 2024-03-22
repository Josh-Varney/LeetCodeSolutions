#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

class Solution {
    public:
        int minSubArrayLen(int target, std::vector<int>& nums){
            int minimum=std::numeric_limits<int>::max();
            int total=0, l=0;

            for(int r=0; r < nums.size(); ++r){
                total += nums[r];
                while (total >= target){
                    minimum = std::min(minimum, r - l + 1);
                    total -= nums[l];
                    l++;
                }
            }
            if (minimum == std::numeric_limits<int>::max()){
                return 0;
            }
            else {
                return minimum;
            }
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> nums = {2,3,1,2,4,3};
    std::cout << solution_instance.minSubArrayLen(7, nums) << std::endl;
    return 0;
}