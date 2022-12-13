//
//  main.cpp -- S.Prata C++ Primer Plus 6th ed.
//  Chapter 5 Loops and Relational Expressions (Xcode)
//
//  Created by Mateusz Kacperski on 10/12/2022.
//

#include <iostream>
#include <thread>

#include "Listing 5.1 forloop.h"
#include "Listing 5.2 num_test.h"
#include "Listing 5.3 express.h"

int main()
{
    //-----------------------------------------------------------------------------------------------------
    // Introducing for Loops: check example here -> "Listing 5.1 forloop.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_5_1();
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Parts of a 'for Loop': check example here -> "Listing 5.2 num_test.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_5_2();
        
        //TIP:
        /*
         Common C++ style is to place a space between for and the following parenthesis and to omit space between a function name and the following parenthesis:
            
         for (i = 6; i < 10; i++) smart_function(i);
         */
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Expressions and Statements: check example here -> "Listing 5.3 express.h"
    //-----------------------------------------------------------------------------------------------------
    
    listing_5_3();
    
        //NOTE:
        /*
         A c++ expression is a value or a combination of values annd operators, and every c++ expression has a value
         */
    
    
    
    std::cin.get();
    return 0;
}
