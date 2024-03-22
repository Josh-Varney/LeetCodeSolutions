class Solution:
    def hIndex(seld, citations: list[int]) -> int:
        publications = len(citations)
        count = hIndex = 0
        
        while (publications):
            for i in range(len(citations)):
                
                if citations[i] >= publications:
                    count += 1
            
            if count >= publications:
                hIndex = max(hIndex, publications)
            
            count = 0
            publications -= 1
            
        return hIndex
    
    def hIndexII(self, citations: list[int]) -> int:
        citations.sort()
        h_index = len(citations)
        for i in citations:
            if i < h_index:
                h_index -= 1

        return h_index
    
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.hIndex([3,0,6,1,5]))