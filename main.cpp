#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>
#include "functions_to_implement.cpp"


int main(){
    std::string s = "Hello I'm Jisoo.";
    std::vector<std::string> vv = Split(s, " ");
    for(int i = 0; i < vv.size(); i++){
        std::cout << vv[i] << std::endl;
    }

    std::string removedS = RemoveAllSubstrings(s, "o");
    std::cout << removedS << std::endl;

    std::vector<int> vec{1,2,3,4};
    std::vector<int> outcome = VectorPlusN(vec, 10);
    for(int j: outcome){
		std::cout << j << std::endl;
	}


	return 0;
}