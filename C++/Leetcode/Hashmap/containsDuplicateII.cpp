#include <iostream>
#include <set>
#include <vector>

class Solution {
    public:
        bool containsNearbyDuplicate(std::vector<int>& nums, int k){
            std::set<int> window;

            int l = 0;
            for (int r=0; r<nums.size(); ++r){
                if (r - l > k){
                    window.erase(nums[l]);
                    l++;
                }

                if (window.find(nums[r]) != window.end()){
                    return true;
                }
                window.insert(nums[r]);
            }
            return false;
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> nums = {1,2,3,1};
    std::cout << solution_instance.containsNearbyDuplicate(nums, 3) << std::endl;
    return 0;
}