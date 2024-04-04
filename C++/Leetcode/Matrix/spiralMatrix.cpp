#include <iostream>
#include <vector>

class Solution{
    public:
        std::vector<int> spiralMatrix(std::vector<std::vector<int>> matrix){
            std::vector<int> res;
            int top = 0, bottom = matrix[0].size();
            int left = 0, right = matrix.size();
            
            while (left < right && top < bottom){
                for (int i=left; i < right; ++i){
                    res.push_back(matrix[top][i]);
                }
                // Need to add 1 to top
                top += 1;

                for (int i=top; i < bottom; ++i){
                    res.push_back(matrix[i][right - 1]);
                }
                // Need to remove 1 from right 
                right -= 1;

                if (not (left < right && top < bottom)){
                    break;
                }

                for (int i=right; i > left; --i){
                    res.push_back(matrix[bottom - 1][i - 1]);
                }
                // Need to remove 1 from bottom
                bottom -= 1;

                for (int i=bottom; i > top; --i){
                    res.push_back(matrix[i - 1][left]);
                }
                // Need to increment left
                left += 1;
            }
            printVector(res);
        }

    private:
        void printMatrix(std::vector<std::vector<int>> matrix){
            for(int i=0; i < matrix[0].size(); ++i){
                for (int y=0; y < matrix.size(); ++y){
                    std::cout << matrix[i][y] << std::endl;
                }
            }
        }

        void printVector(std::vector<int> res){
            for (auto& n : res){
                std::cout << n << std::endl;
            }
        }
};

int main(){
    Solution solution_instance;
    std::vector<std::vector<int>> matrix;
    matrix.push_back(std::vector<int>{1, 2, 3});
    matrix.push_back(std::vector<int>{4, 5, 6});
    matrix.push_back(std::vector<int>{7, 8, 9});
    solution_instance.spiralMatrix(matrix);

    return 0;
}

