class Solution:
    def canCompleteCircuit(self, gas: list[int], cost: list[int]) -> int:    # My O(n^2)
        
        if sum(gas) >= sum(cost):
            
            for i in range(len(gas)):
                
                startIndex, cIndex = i, (i + 1) % len(gas)
                cGas = gas[startIndex] - cost[startIndex]
                
                while cIndex != startIndex and cGas >= 0:
                    cGas += gas[cIndex] - cost[cIndex]
                    cIndex = (cIndex + 1) % len(gas)
                
                    
                if cIndex == startIndex and cGas >= 0:
                    return startIndex
            
        return -1
    
    def canCompleteCircuit(self, gas: list[int], cost: list[int]) -> int:
        if sum(gas) < sum(cost):
            return -1
        
        cTotal = 0
        start = 0
        
        for i in range(len(gas)):
            cTotal += gas[i]-cost[i]
            
            if cTotal < 0:
                cTotal = 0
                start = i+1
                
        return start
                
                
                

                    
            
            
            

if __name__=='__main__':
    solution_instance = Solution()
    print(solution_instance.canCompleteCircuit([2,3,4],[3,4,3]))