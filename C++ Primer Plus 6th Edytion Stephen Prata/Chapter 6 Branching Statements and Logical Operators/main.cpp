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
#include "Listing 6.6 more end.h"
#include "Listing 6.7 not.h"

// Function prototypes:
bool is_alphabetick(char);

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
    
    // listing_6_5();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Setting Up Ranges with &&: check example here -> "Listing 6.6 more end.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_6_6();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The Logical NOT Operator !: check example here -> "Listing 6.7 not.h"
    //-----------------------------------------------------------------------------------------------------
    
    std::cout << INT_MAX << '\n';   // to check what is the max int in current system -- INT_MIN to check minimum int
    
    // listing_6_7();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Logical Operator Facts:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Alternative Representations:
    //-----------------------------------------------------------------------------------------------------
        
    /*
     
     Table 6.3 Logical Operators: Alternative Representations
     Operator                       Alternative Representation
     &&                             and                         -- both need to be true for result true
     ||                             or                          -- If either or both is true the resulting expression has the value true.
     !                              not                         --
     
     */

    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The cctype Library of Character Functions:
    //-----------------------------------------------------------------------------------------------------
       
    char letter;
    
    std::cout << "Enter alphabetick character: ";
    std::cin >> letter;
    
    while( !is_alphabetick(letter) )
    {
        std::cout << "No! no! no! Try again... ";
        std::cin >> letter;
    }
    
    if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 1 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 2 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 3 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 4 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 5 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 6 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 7 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 8 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 9 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 10 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 11 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 12 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 13 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 14 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 15 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 16 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 17 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 18 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 19 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 20 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 21 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 22 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A')
        std::cout << "That is right " << letter << " is " << 23 << " letter in alphabet.\n";
    else if(letter == 'a' && letter == 'A'
        std::cout << "That is right " << letter << " is " << 24 << " letter in alphabet.\n";
    
    std::cin.get();
    std::cin.get();
    return 0;
}

bool is_alphabetick(char x)
{
    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
        return true;
    else
       return false;
}
