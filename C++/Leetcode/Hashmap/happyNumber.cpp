#include <iostream>
#include <set>

class Solution {
public:
    bool isHappy(int n) {
        std::set<int> seen;
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int val_sum = 0;
            while (n != 0) {
                int digit = n % 10; // Extract the last digit
                val_sum += digit * digit;
                n /= 10; // Remove the last digit
            }
            n = val_sum;
        }
        return n == 1; // If n == 1, it's a happy number
    }
};

int main() {
    Solution solution_instance;
    std::cout << solution_instance.isHappy(19) << std::endl;
    return 0;
}