#include <iostream>
#include <algorithm>
#include <set>
#include <random>

class RandomisedSet {
    public:
        RandomisedSet(){
        
        }

        bool remove(int val){
            if (s.find(val) != s.end()){
                s.erase(val);
                return true;
            } else {
                return false;
            }
        }

        bool insert(int val){
            if (s.find(val) != s.end()){
                return false;
            }else {
                s.insert(val);
                return true;
            }
        }

        int getRandom(){   // Have a look at alternative methods
            auto index = s.begin(); 
            std::advance(index, std::rand() % s.size());
            return *index;
        }

    private:
        std::set<int> s;
};

int main(){
    RandomisedSet solution_instance;
    solution_instance.insert(1);
    solution_instance.insert(5);
    solution_instance.insert(7);
    std::cout << solution_instance.getRandom() << std::endl;
    return 0;
}