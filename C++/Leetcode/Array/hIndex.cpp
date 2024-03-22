#include <iostream>
#include <vector>
#include <algorithm>

class Solution{
    public:
        int hIndex(std::vector<int>& citations){
            int hIndex = citations.size();
            std::sort(citations.begin(), citations.end());

            for (const auto& n : citations){
                if (n < hIndex){
                    hIndex--;
                }
            }
            return hIndex;
        }
    
    private:
        void printVector(std::vector<int>& nums){
            for (const auto& n : nums){
                std::cout << n << std::endl;
            }
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> citations = {3,0,6,1,5}; 
    std::cout << solution_instance.hIndex(citations) << std::endl;
    return 0;
}