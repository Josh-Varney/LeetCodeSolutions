#include <iostream>
#include <vector>
#include <limits>

class Solution {
    public:
        int maxProfit(std::vector<int>& prices){
            int minimum = std::numeric_limits<int>::max();
            int profit = 0;

            for (int i = 0; i < prices.size(); ++i){
                int cProf = prices[i] - minimum;
                if (prices[i] < minimum){
                    minimum = prices[i];
                }
                if (cProf > profit){
                    profit = cProf;
                }
            }
            return profit;
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> nums = {7,1,5,3,6,4};
    std::cout << solution_instance.maxProfit(nums) << std::endl;
    return 0;
}