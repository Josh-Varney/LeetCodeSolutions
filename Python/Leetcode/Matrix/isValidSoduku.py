class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:
        grid_div = {}  # Initialize grid_div
        for i in range(len(board)):
            # Check Rows and Columns using Hashsets
            row_set = {}
            col_set = {}
            for j in range(len(board[0])):
                # Check Rows
                if board[i][j] != '.':
                    # Initialize grid_div[(i//3, j//3)] if not already initialized
                    if (i//3, j//3) not in grid_div:
                        grid_div[(i//3, j//3)] = set()
                    if board[i][j] in row_set or board[i][j] in grid_div[(i//3, j//3)]:
                        return False
                    else:
                        row_set[board[i][j]] = row_set.get(board[i][j], 0) + 1
                        grid_div[(i//3, j//3)].add(board[i][j])

                # Check Columns
                if board[j][i] != '.':
                    if board[j][i] in col_set:
                        return False
                    else:
                        col_set[board[j][i]] = col_set.get(board[j][i], 0) + 1

        return True

if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.isValidSudoku([["5","3",".",".","7",".",".",".","."]
                                    ,["6",".",".","1","9","5",".",".","."]
                                    ,[".","9","8",".",".",".",".","6","."]
                                    ,["8",".",".",".","6",".",".",".","3"]
                                    ,["4",".",".","8",".","3",".",".","1"]
                                    ,["7",".",".",".","2",".",".",".","6"]
                                    ,[".","6",".",".",".",".","2","8","."]
                                    ,[".",".",".","4","1","9",".",".","5"]
                                    ,[".",".",".",".","8",".",".","7","9"]]))

    print(solution_instance.isValidSudoku([["8","3",".",".","7",".",".",".","."]
                                    ,["6",".",".","1","9","5",".",".","."]
                                    ,[".","9","8",".",".",".",".","6","."]
                                    ,["8",".",".",".","6",".",".",".","3"]
                                    ,["4",".",".","8",".","3",".",".","1"]
                                    ,["7",".",".",".","2",".",".",".","6"]
                                    ,[".","6",".",".",".",".","2","8","."]
                                    ,[".",".",".","4","1","9",".",".","5"]
                                    ,[".",".",".",".","8",".",".","7","9"]]))