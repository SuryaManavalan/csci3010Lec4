#define CATCH_CONFIG_MAIN
#include <iostream>
#include <vector>
#include "functions_to_implement.cpp"
#include "catch.hpp"

//unit test for RemoveTwos
TEST_CASE( "RemoveTwos is computed", "[RemoveTwos]" ) {
    REQUIRE( RemoveTwos(4) == 1 );
    REQUIRE( RemoveTwos(7) == 7 );
    REQUIRE( RemoveTwos(26) == 13 );
    REQUIRE( RemoveTwos(52) == 13 );
}

//unit test for multiples filter
TEST_CASE( "multiples filter is computed", "[multiples filter]" ) {
    std::vector<int> v1{1,2,3,2,5,5};
    std::vector<int> res1 = MultiplesFilter(v1, 2);
    REQUIRE( res1[0] == 1 );
    REQUIRE( res1[1] == 3 );
    REQUIRE( res1[2] == 5 );
    REQUIRE( res1[3] == 5 );
}

//unit test for even mask
TEST_CASE( "even mask is computed", "[even mask]" ) {
    std::vector<int> v2{1,2,3,2,5,5,4};
    std::vector<bool> res2 = EvenMask(v2);
    REQUIRE( res2[0] == false );
    REQUIRE( res2[1] == true );
    REQUIRE( res2[2] == false );
    REQUIRE( res2[3] == true );
    REQUIRE( res2[4] == false );
    REQUIRE( res2[5] == false );
    REQUIRE( res2[6] == true );
}