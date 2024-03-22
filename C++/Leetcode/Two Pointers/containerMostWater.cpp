#include <iostream>
#include <vector>

class Solution {
    public:
        int maxArea(std::vector<int> height){
            int l = 0, r = height.size() - 1, maximum = 0;
            
            while (l < r){
                maximum = std::max(maximum, (r - l) * std::min(height[l], height[r]));

                if (height[l] > height[r]){
                    r--;
                }
                else {
                    l++;
                }
            }
            return maximum;
        }
};

int main(){
    Solution solution_instance;
    std::cout << solution_instance.maxArea({1,8,6,2,5,4,8,3,7}) << std::endl;
}