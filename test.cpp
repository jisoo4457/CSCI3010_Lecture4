#define CATCH_CONFIG_MAIN 
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("CHECKING VectorPlus function:", "[VectorPlus]"){
    std::vector<int> v{1,2,3,4,5,6};
    SECTION("checking with add N"){
        int n = 3;
        std::vector<int> vec = VectorPlusN(v,n);
        srand(time(NULL));
        REQUIRE(v.size()== vec.size());
        REQUIRE(vec[0] == 4);
        REQUIRE(vec[v.size()-1] == 9);
    }
    SECTION("checking with add -N"){
        int n = -3;
        std::vector<int> vec = VectorPlusN(v,n);
        srand(time(NULL));
        REQUIRE(v.size()== vec.size());
        REQUIRE(vec[0] == -2);
        REQUIRE(vec[v.size()-1] == 3);
    }

}
