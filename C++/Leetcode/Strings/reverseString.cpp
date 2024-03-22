#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

class Solution {
    public:
        std::string reverseWords(std::string& s){
            std::istringstream streamer(s);
            std::string stream;
            std::vector<std::string> string;
            std::string res;

            while(streamer >> stream){
                if (stream.empty()){
                    std::cout << "Empty" << std::endl;
                }
                else {
                    string.push_back(stream);
                }
            }

            std::reverse(string.begin(), string.end());
            printVector(string);

            for (const auto& c : string){
                res += c + " ";
            }

            return res.substr(0, res.size()-1);
        }    
    
    private:
        void printVector(std::vector<std::string>& string){
            for (const auto& c: string){
                std::cout << c << std::endl;
            }
        }
};

int main(){
    Solution solution_instance;
    std::string s = "a good   example";
    solution_instance.reverseWords(s);
}