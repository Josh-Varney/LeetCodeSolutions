#include <iostream>
#include <vector>
#include <map>

class Solution {
    public: 
        std::vector<int> twoSum(std::vector<int>& numbers, int target){
            std::map<int, int> tMap;
            for(int i=0; i < numbers.size(); ++i){
                int complement = target - numbers[i];
                if (tMap.find(complement) != tMap.end()){
                    std::vector<int> res = {tMap[complement] + 1, i + 1};
                    printList(res);
                    return res;
                }
                else {
                    tMap[numbers[i]] = i;
                }
            }
            return {-1, -1};
        }

    private:
        void printList(std::vector<int> result){
            std::cout << "[ ";
            for(const auto& n : result){
                std::cout << n << " ";
            }
            std::cout << "]" << std::endl;
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> numbers = {2, 7, 11, 15};
    solution_instance.twoSum(numbers, 9);
}