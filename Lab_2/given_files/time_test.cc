#include "catch.hpp"
#include "Time.h"
// här lägger ni era testfall. 
// Jobba enligt TDD; 
//  1. Lägg till testfall
//  2. Testa
//  3. Lägg till (minsta möjliga) implementation
//  4. Testa alla testfall
//  5. Refaktorera (skriv om) så att allt ser bra ut

TEST_CASE( "Tiden är", "[giltig]" ) {
    times t1{12, 12 ,12};
    REQUIRE( giltig(t1) == false  );
    REQUIRE( giltig(t1) == true );
}