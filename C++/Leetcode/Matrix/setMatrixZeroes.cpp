#include <iostream>
#include <vector>

class Solution {
    public:
        std::vector<std::vector<int>> setZeroes(std::vector<std::vector<int>> matrix){
            if (matrix.empty()); return;

            std::vector<std::vector<int>> res;    

            for (int i=0; i < matrix[0].size(); ++i){
                for (int y=0; y < matrix.size(); ++y){
                    if (matrix[i][y] == 0){
                        res.push_back({i,y});
                    }
                }
            }

            for (const auto& sector : res){
                matrix[sector[0]] = std::vector<int>(matrix[sector[0]].size(), 0);

                for (int k = 0; k < matrix[0].size(); ++k) {
                    matrix[sector[0]][k] = 0;
                }
                // Set entire column to zeros
                for (int k = 0; k < matrix.size(); ++k) {
                    matrix[k][sector[1]] = 0;
                }
            }

            return matrix;
        }
    private:
        void printList(std::vector<std::vector<int>> matrix){
            for (const auto& row : matrix){
                for (const auto& element : row){
                    std::cout << element << std::endl;
                }
            }
        }
};

int main(){
    Solution solution_instance;
    std::vector<std::vector<int>> matrix = {
        {1, 1, 1},
        {4, 0, 6},
        {7, 8, 9}
    };
    solution_instance.setZeroes(matrix);
    return 0;
}