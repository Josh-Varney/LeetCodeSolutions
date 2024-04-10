#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

class Solution {
    public:
        int longestSequence(std::vector<int>& nums){
            if (nums.size() == 0){
                return 0;
            }

            std::sort(nums.begin(), nums.end());

            std::set<int> seen;
            int count = 1;
            int maxCount = 1;

            for (int r=0; r<nums.size(); ++r){
                if (seen.find(nums[r]) != seen.end()){
                    continue;
                }
                else if (seen.find(nums[r] - 1) != seen.end()){
                    seen.insert(nums[r]);
                    count++;
                }
                else {
                    seen.insert(nums[r]);
                    maxCount = std::max(maxCount, count);
                    count = 1;
                }
            }
            maxCount = std::max(maxCount, count);
            return maxCount;
        }
    private:
        void printList(std::vector<int> nums){
            for (const auto& num : nums){
                std::cout << num << std::endl;
            }
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> nums = {100,4,200,1,3,2};
    solution_instance.longestSequence(nums);
}