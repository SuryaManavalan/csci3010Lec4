#include <iostream>
#include <vector>
#include "functions_to_implement.cpp"
#include "catch.hpp"

//unit test for factorial
TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

//unit test for nth fibonacci
TEST_CASE( "nth fibonacci is computed", "[nth fibonacci]" ) {
    REQUIRE( NthFibonacci(1) == 1 );
    REQUIRE( NthFibonacci(2) == 1 );
    REQUIRE( NthFibonacci(3) == 2 );
    REQUIRE( NthFibonacci(10) == 55 );
}

//unit test for even mask
TEST_CASE( "even mask is computed", "[even mask]" ) {
    std::vector<int> v1{1,2,3,2,5,5};
    std::vector<int> v2{1,2,3,2,5,5,4};
    std::vector<bool> res1 = EvenMask(v1);
    std::vector<bool> res2 = EvenMask(v2);
    REQUIRE( res1[0] == false );
    REQUIRE( res1[1] == true );
    REQUIRE( res1[2] == false );
    REQUIRE( res1[3] == true );
    REQUIRE( res1[4] == false );
    REQUIRE( res1[5] == false );
    REQUIRE( res2[0] == false );
    REQUIRE( res2[1] == true );
    REQUIRE( res2[2] == false );
    REQUIRE( res2[3] == true );
    REQUIRE( res2[4] == false );
    REQUIRE( res2[5] == false );
    REQUIRE( res2[6] == true );
}