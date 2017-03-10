#include<"catch.hpp">

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed", "[bur]" ) {
    REQUIRE( Factorial(4) == 24 );
    REQUIRE( Factorial(5) == 120 );
    REQUIRE( Factorial(6) == 720 );
}
