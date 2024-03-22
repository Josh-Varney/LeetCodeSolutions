#include <iostream>
#include <vector>

class Solution {
    public:
        int maxProfit(std::vector<int>& prices){
            int profit = 0;
            for (int i = 0; i < prices.size()-1; ++i){
                if (prices[i+1]>prices[i]){
                    profit += prices[i+1]-prices[i];
                }
            }
            return profit;
        };
};


int main(){
    Solution solution_instance;
    std::vector<int> nums = {7,1,5,3,6,4};
    std::cout << solution_instance.maxProfit(nums) << std::endl;
    return 0;
}