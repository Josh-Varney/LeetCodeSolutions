#include <iostream>
#include <vector>

class Solution {
    public:
        int removeDuplicates(std::vector<int>& nums) {
            int l = 1;
            for (int i = 1; i < nums.size(); ++i){
                if (nums[i - 1] == nums[i]){
                    nums[l] = nums[i];
                    continue;
                }
                nums[l] = nums[i];
                l++;
            }
            return l;
        }
    
    private:
        void printVector(std::vector<int>& nums){
            for (std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); ++itr){
                std::cout << *itr << std::endl;
            }
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    std::cout << solution_instance.removeDuplicates(nums) << std::endl;
    return 0;
}