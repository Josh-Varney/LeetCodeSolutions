#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums){
        int l = 1, count = 1;

        for (int r = 1; r < nums.size(); ++r){
            if (nums[r - 1] == nums[r] && count < 2){
                nums[l++] = nums[r];
                count++;
            }
            else if (nums[r - 1] != nums[r]){
                nums[l++] = nums[r];
                count = 1;
            }
        }
        printVector(nums);
        return l;
    }

private:
    void printVector(const std::vector<int>& nums){
        for (const auto& num : nums){
            std::cout << num << std::endl;
        }
    }
};

int main(){
    Solution solution_instance;
    std::vector<int> nums = {0,0,1,1,1,1,2,3,3}; 
    std::cout << solution_instance.removeDuplicates(nums) << std::endl; // Prints 7
}