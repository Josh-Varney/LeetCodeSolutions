#include <iostream>
#include <vector>

class Solution{
    public:
        int removeElement(std::vector<int>& nums, int val){
            int l = 0;

            for (int i = 0; i < nums.size(); ++i){
                if (nums[i] != val){
                    nums[l] = nums[i];
                    l += 1;
                }
                else {
                    nums[l] = nums[i];
                }
            }

            return l;
        }
    
    protected:
        void printArray(std::vector<int>& nums){
            for (int i = 0; i < nums.size(); ++i){
                std::cout << nums[i] << std::endl;
            }
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> nums = {3,2,2,3};
    solution_instance.removeElement(nums, 3);
    return 0;
};