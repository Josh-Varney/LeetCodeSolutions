class Solution:
    def isValidSoduku(self, board: list[list[str]]) -> bool:
        for row in board:
            print(row)
    
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.isValidSoduku([["8","3",".",".","7",".",".",".","."]
                                    ,["6",".",".","1","9","5",".",".","."]
                                    ,[".","9","8",".",".",".",".","6","."]
                                    ,["8",".",".",".","6",".",".",".","3"]
                                    ,["4",".",".","8",".","3",".",".","1"]
                                    ,["7",".",".",".","2",".",".",".","6"]
                                    ,[".","6",".",".",".",".","2","8","."]
                                    ,[".",".",".","4","1","9",".",".","5"]
                                    ,[".",".",".",".","8",".",".","7","9"]])