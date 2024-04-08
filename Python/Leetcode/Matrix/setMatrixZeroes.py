class Solution():
    def setZeroes(self, matrix: list[list[int]]) -> None:
        indexFound = []

        # Finding the indices of zeros in the matrix
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if matrix[i][j] == 0:
                    indexFound.append([i, j])

        # Setting the corresponding rows and columns containing zeros to zero
        for item in indexFound:
            row_index, col_index = item[0], item[1]

            # Set entire row to zero
            matrix[row_index] = [0] * len(matrix[row_index])

            # Set entire column to zero
            for row in matrix:
                row[col_index] = 0

        return matrix
        
          
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.setZeroes([[1,1,1],
                                 [1,0,1],
                                 [1,1,1]]))
    
    print(solution_instance.setZeroes([[0,1,2,0],
                                 [3,4,5,2],
                                 [1,3,1,5]]))