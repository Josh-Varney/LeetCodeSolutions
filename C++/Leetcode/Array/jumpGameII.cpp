#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
    public:
        int jumpGameII(std::vector<int>& nums){
            int l = 0, r = 0;
            int res = 0;

            while (r < nums.size()-1){
                int furthest = 0;
                
                for (int i = l; i <= r; ++i) {
                    furthest = std::max(furthest, nums[i] + i);
                }
                l = r + 1;
                r = furthest;
                res++;
            }
            return res;
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> nums = {2,3,1,1,4};
    std::cout << solution_instance.jumpGameII(nums) << std::endl;
    return 0;
}