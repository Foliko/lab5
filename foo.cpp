#include"catch.hpp"

unsigned int Factorial( unsigned int number )

TEST_CASE( "Factorials are computed", "[foo]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}
