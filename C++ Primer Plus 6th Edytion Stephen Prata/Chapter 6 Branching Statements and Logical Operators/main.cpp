//
//  main.cpp -- S.Prata C++ Primer Plus 6th ed.
//  Chapter 6 Branching Statements and Logical Operators
//
//  Created by Mateusz Kacperski on 28/01/2023.
//

#include <iostream>

// Examples has been included in header files:
#include "Listing 6.1 if.h"
#include "Listing 6.2 if else.h"
#include "Listing 6.3 if else if.h"
#include "Listing 6.4 or.h"
#include "Listing 6.5 end.h"


int main()
{
    std::cout << "Hello, World!\n";
    
    /*
     In this chapter you’ll learn about the following:
     - The if statement
     - The if else statement
     - Logical operators: &&, ||, and !
     - The cctype library of character functions n The conditional operator:?:
     - The switch statement
     - The continue and break statements
     - Number-reading loops
     - Basic file input/output
     */
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The if Statement: check example here -> "Listing 6.1 if.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_6_1();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The if else Statement: check example here -> "Listing 6.2 if else.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_6_2();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Formatting 'if else' Statements:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The 'if else if else' Construction: check example here -> "Listing 6.3 if else if.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_6_3();
   
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Logical Expression:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The Logical OR Operator ||: check example here -> "Listing 6.4 or.h"
    //-----------------------------------------------------------------------------------------------------
    
    /*
     This operator combines two expressions into one.
     If either or both of the original expressions is true, or nonzero, the resulting expression has the value true.
     Otherwise, the expression has the value false.
     
     5 == 5 || 5 == 9   // true because first expression is true
     5 > 3 || 5 > 10    // true because first expression is true
     5 > 8 || 5 < 10    // true because second expression is true
     5 < 8 || 5 > 2     // true because both expressions are true
     5 > 8 || 5 < 2     // false because both expressions are false
     */
    
    // listing_6_4();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The Logical AND Operator &&: check example here -> "Listing 6.5 end.h"
    //-----------------------------------------------------------------------------------------------------
    
    /*
     The logical AND operator, written &&, also combines two expressions into one.
     Resulting expression has the value true only if both of the original expressions are true.
     
     5 == 5 && 4 == 4   // true because both expressions are true
     5 == 3 && 4 == 4   // false because first expression is false
     5 > 3 && 5 > 10    // false because second expression is false
     5 > 8 && 5 < 10    // false because first expression is false
     5 < 8 && 5 > 2     // true because both expressions are true
     5 > 8 && 5 < 2     // false because both expressions are false
     */
    
    listing_6_5();
    
    
    
    std::cin.get();
    std::cin.get();
    return 0;
}
