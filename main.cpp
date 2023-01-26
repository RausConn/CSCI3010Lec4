#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "functions_to_implement.hpp"


int main(int argc, char* argv[]) {

    int result = Catch::Session().run( argc, argv );
    return result;
    
}


TEST_CASE("Remove Twos computed", "[RemoveTwos]") {
    REQUIRE(RemoveTwos(16) == 1);
    REQUIRE(RemoveTwos(7) == 7);
    REQUIRE(RemoveTwos(26) == 13);
    REQUIRE(RemoveTwos(52) == 13);
}

TEST_CASE("Nth Fibonacci computed", "[NthFibonacci]") {
    REQUIRE(NthFibonacci(1) == 1);
    REQUIRE(NthFibonacci(2) == 1);
    REQUIRE(NthFibonacci(3) == 2);
    REQUIRE(NthFibonacci(4) == 3);
    REQUIRE(NthFibonacci(5) == 5);
    REQUIRE(NthFibonacci(6) == 8);
    REQUIRE(NthFibonacci(7) == 13);
}

TEST_CASE( "Factorials are computed", "[Factorial]" ) {
    REQUIRE(Factorial(0) == 1 );
    REQUIRE(Factorial(1) == 1 );
    REQUIRE(Factorial(2) == 2 );
    REQUIRE(Factorial(3) == 6 );
    REQUIRE(Factorial(10) == 3628800 );
}

TEST_CASE( "Int sign is computed", "[Sign]" ) {
    REQUIRE(Sign(0) == 1 );
    REQUIRE(Sign(1) == 1 );
    REQUIRE(Sign(-1) == -1 );
    REQUIRE(Sign(200) == 1 );
    REQUIRE(Sign(-200) == -1 );
}

TEST_CASE( "Double sign is computed", "[Sign]" ) {
    REQUIRE(Sign(0.0) == 1 );
    REQUIRE(Sign(1.15) == 1 );
    REQUIRE(Sign(-1.15) == -1 );
    REQUIRE(Sign(203.17255) == 1 );
    REQUIRE(Sign(-230.27378) == -1 );
}