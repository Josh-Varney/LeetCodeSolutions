class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set()
        while n != 1:
            if n in seen:
                return False
            else:
                seen.add(n)
                n = sum(int(digit) ** 2 for digit in str(n))
        return True
    
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.isHappy(19))