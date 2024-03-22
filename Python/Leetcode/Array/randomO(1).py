import random

class RandomizedSet: # Use hashmap for efficiency next time 
    def __init__(self) -> None:
        self.randSet = set()
        
    def insert(self, val: int) -> None:
        if val not in self.randSet:
            self.randSet.add(val)
            return True
        return False
        
    def remove(self, val: int) -> None:
        if val in self.randSet:
            self.randSet.remove(val)
            return True
        return False
    
    def random(self):
        index = random.randint(0, len(self.randSet))
        return list(self.randSet)[index]
    
    
if __name__ == '__main__':
    randomSet_instance = RandomizedSet()
    randomSet_instance.insert(1)
    print(randomSet_instance.random())