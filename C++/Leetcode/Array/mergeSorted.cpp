#include <iostream>
#include <vector>

class Solution {
    public:
        void merge(std::vector<int>& nums1, int m, std::vector<int> nums2, int n){
            int last = m + n - 1;
            while (m > 0 && n > 0){
                if (nums1[m - 1] > nums2[n - 1]){
                    nums1[last] = nums1[m - 1];
                    m--;
                }
                else {
                    nums1[last] = nums2[n - 1];
                    n--;
                }
                last--;
            }
            
            while (n > 0){
                nums1[last] = nums2[n - 1];
                n--;
                last--;
            }
            
        }

    protected:
        void printArray(std::vector<int> nums1){
            for (int i = 0; i < nums1.size(); ++i){
                std::cout << nums1[i] << std::endl;
            }
        }
};

int main(){
    Solution solution_instance;
    std::vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    std::vector<int> nums2 = {2,5,6};
    int n = nums2.size();
    solution_instance.merge(nums1, m, nums2, n);
    return 0;
}