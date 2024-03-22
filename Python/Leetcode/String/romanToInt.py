class Solution(object):
    def romanToInt(self, s):
        int_total = 0
        map = {'M': 1000, 'D': 500, 'C': 100, 'L': 50, 'X': 10, 'V': 5, 'I': 1}
        for i in range(len(s)-1):
            if map[s[i]] < map[s[i+1]]:
                int_total -= map[s[i]]
            else:
                int_total += map[s[i]]
        int_total += map[s[-1]]
        return int_total
        
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.romanToInt("MCMXCIV")