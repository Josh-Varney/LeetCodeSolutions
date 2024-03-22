#include <iostream>
#include <vector>
#include <algorithm>

class Solution{
    public:
        void rotateArray(std::vector<int>& nums, int k){
            // Removes anything above the length of nums
            k = k % nums.size();
            
            std::reverse(nums.begin(), nums.end());

            std::reverse(nums.begin(), nums.begin()+k);

            std::reverse(nums.begin()+k, nums.end());

            printArray(nums);

        }

    protected:
        void printArray(std::vector<int>& nums){
            std::cout << "[ ";
            for(int i=0; i<nums.size(); ++i){
                std::cout << nums[i] << " ";
            }
            std::cout << "]";
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> nums = {1,2,3,4,5};
    
    solution_instance.rotateArray(nums, 7);

    return 0;
}