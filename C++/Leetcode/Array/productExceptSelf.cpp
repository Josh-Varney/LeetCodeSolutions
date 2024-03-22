#include <iostream>
#include <vector>

class Solution {
    public:
        std::vector<int> productExceptSelf(std::vector<int>& nums){
            std::vector<int>arr(nums.size(), 1);
            int prefix = 1;
            for(int i=0; i < nums.size(); ++i){
                prefix *= nums[i];
                arr[i] *= prefix;
            }

            printArray(arr);

            int postfix = 1;
            for(int i=nums.size()-1; i >= 0; --i){  // Fix This
                arr[i] *= postfix;
                postfix *= nums[i];
                
            }

            printArray(arr);

            return arr;
        }

    private:
        void printArray(std::vector<int>& nums){
            std::cout << "[ ";
            for(const auto& n : nums){
                std::cout << n << " ";
            }
            std::cout << "]" << std::endl;
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> nums = {1,2,3,4};
    solution_instance.productExceptSelf(nums);
}