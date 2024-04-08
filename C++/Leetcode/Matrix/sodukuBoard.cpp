#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

class Solution {
public:
    bool isValid(const std::vector<std::vector<char>>& board) {   // Incorrect At Present
        std::unordered_set<std::string> seen;

        // Check rows and columns
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char val = board[i][j];
                if (val != '.') {
                    std::string row_key = "r" + std::to_string(i) + val;
                    std::string col_key = "c" + std::to_string(j) + val;
                    std::string box_key = "b" + std::to_string(i / 3) + std::to_string(j / 3) + val;

                    if (seen.count(row_key) || seen.count(col_key) || seen.count(box_key)) {
                        return false;
                    } else {
                        seen.insert(row_key);
                        seen.insert(col_key);
                        seen.insert(box_key);
                    }
                }
            }
        }
        return true;
    };
};

int main(){
    Solution solution_instance;
    std::vector<std::vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    std::vector<std::vector<char>> boardTwo = {
        {'8','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    std::cout << solution_instance.isValid(board) << std::endl;
    return 0;
}