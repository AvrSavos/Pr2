//
//  main.cpp
//  unittest1
//
//  Created by Кирилл on 27/02/2019.
//  Copyright © 2019 Кирилл. All rights reserved.
//

#include <iostream>
#include "/Users/kirill/Desktop/2Nelidov/BD/tc.h"
#include "/Users/kirill/Desktop/2Nelidov/BD/Disc.h"
#include "/Users/kirill/Desktop/2Nelidov/BD/HowItWasIn2007.h"
#define  CATCH_CONFIG_MAIN
#include "/Users/kirill/Desktop/2Nelidov/BD/UnitTests/unittest1/unittest1/catch.hpp"


TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( TotalCost(2, 1) == 2);
    REQUIRE( TotalCost(2, 2) == 4 );
    REQUIRE( TotalCost(3, 2) == 6 );
    REQUIRE( TotalCost(10, 2) == 20 );
    REQUIRE( TotalCost(2, 14) == 28);
    REQUIRE( TotalCost(2, 7) == 14 );
    REQUIRE( TotalCost(3, 5) == 15 );
    REQUIRE( TotalCost(10, 3) == 30 );
    REQUIRE( discount(3000) == 750 );
    REQUIRE( anguish(40000) == 24000 );
    
}
