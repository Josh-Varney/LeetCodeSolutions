class Solution(object):
    def intToRoman(self, num):
        s = ''
        map = {1000: 'M', 900 : 'CM', 500: 'D', 400: 'CD', 100: 'C', 90: 'XC', 50: 'L', 40: 'XL', 10: 'X', 9: 'IX', 5: 'V', 4:'IV', 1: 'I'}
        for val, numeral in sorted(map.items(), key=lambda x: x[0], reverse=True):
            while num >= val:
                num -= val
        return s
    
if __name__ == '__main__':
    solution_instance = Solution()
    solution_instance.intToRoman(3)