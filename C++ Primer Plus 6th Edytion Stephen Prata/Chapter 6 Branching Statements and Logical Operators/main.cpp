//
//  main.cpp -- S.Prata C++ Primer Plus 6th ed.
//  Chapter 6 Branching Statements and Logical Operators
//
//  Created by Mateusz Kacperski on 28/01/2023.
//

#include <iostream>
#include <cctype>

// Examples has been included in header files:
#include "Listing 6.1 if.h"
#include "Listing 6.2 if else.h"
#include "Listing 6.3 if else if.h"
#include "Listing 6.4 or.h"
#include "Listing 6.5 end.h"
#include "Listing 6.6 more end.h"
#include "Listing 6.7 not.h"
#include "Listing 6.8 cctypes.h"

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
    // The cctype Library of Character Functions: check example here -> "Listing 6.8 cctypes.h"
    //-----------------------------------------------------------------------------------------------------
       
    char x;

    std::cout << "Enter alphabetick character: ";
    std::cin >> x;

    while( !is_alphabetick(x))  // check if char is alphabetic and then i tell u which numer in alphabet it is
    {
        std::cout << "No! no! no! Try again... ";
        std::cin >> x;
    }

    // listing_6_8();
    
    // Change lover case char to upper
    char name;
    std::cout << "Enter name: ";
    std::cin.get(name);
    if(islower(name))
    {
        char o = toupper(name);
        std::cout << o << '\n';
    }

    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The ?: Operator:
    //-----------------------------------------------------------------------------------------------------
       
            
            
    
    std::cin.get();
    return 0;
}

bool is_alphabetick(char x)
{
    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        if(x == 'a' || x == 'A')
            std::cout << "That is right " << x << " is " << 1 << " letter in alphabet.\n";
        else if(x == 'b' || x == 'B')
            std::cout << "That is right " << x << " is " << 2 << " letter in alphabet.\n";
        else if(x == 'c' || x == 'C')
            std::cout << "That is right " << x << " is " << 3 << " letter in alphabet.\n";
        else if(x == 'd' || x == 'D')
            std::cout << "That is right " << x << " is " << 4 << " letter in alphabet.\n";
        else if(x == 'e' || x == 'E')
            std::cout << "That is right " << x << " is " << 5 << " letter in alphabet.\n";
        else if(x == 'f' || x == 'F')
            std::cout << "That is right " << x << " is " << 6 << " letter in alphabet.\n";
        else if(x == 'g' || x == 'G')
            std::cout << "That is right " << x << " is " << 7 << " letter in alphabet.\n";
        else if(x == 'h' || x == 'H')
            std::cout << "That is right " << x << " is " << 8 << " letter in alphabet.\n";
        else if(x == 'i' || x == 'I')
            std::cout << "That is right " << x << " is " << 9 << " letter in alphabet.\n";
        else if(x == 'j' || x == 'J')
            std::cout << "That is right " << x << " is " << 10 << " letter in alphabet.\n";
        else if(x == 'k' || x == 'K')
            std::cout << "That is right " << x << " is " << 11 << " letter in alphabet.\n";
        else if(x == 'l' || x == 'L')
            std::cout << "That is right " << x << " is " << 12 << " letter in alphabet.\n";
        else if(x == 'm' || x == 'M')
            std::cout << "That is right " << x << " is " << 13 << " letter in alphabet.\n";
        else if(x == 'n' || x == 'N')
            std::cout << "That is right " << x << " is " << 14 << " letter in alphabet.\n";
        else if(x == 'o' || x == 'O')
            std::cout << "That is right " << x << " is " << 15 << " letter in alphabet.\n";
        else if(x == 'p' || x == 'P')
            std::cout << "That is right " << x << " is " << 16 << " letter in alphabet.\n";
        else if(x == 'q' || x == 'Q')
            std::cout << "That is right " << x << " is " << 17 << " letter in alphabet.\n";
        else if(x == 'r' || x == 'R')
            std::cout << "That is right " << x << " is " << 18 << " letter in alphabet.\n";
        else if(x == 's' || x == 'S')
            std::cout << "That is right " << x << " is " << 19 << " letter in alphabet.\n";
        else if(x == 't' || x == 'T')
            std::cout << "That is right " << x << " is " << 20 << " letter in alphabet.\n";
        else if(x == 'u' || x == 'U')
            std::cout << "That is right " << x << " is " << 21 << " letter in alphabet.\n";
        else if(x == 'v' || x == 'V')
            std::cout << "That is right " << x << " is " << 22 << " letter in alphabet.\n";
        else if(x == 'w' || x == 'W')
            std::cout << "That is right " << x << " is " << 23 << " letter in alphabet.\n";
        else if(x == 'x' || x == 'X')
            std::cout << "That is right " << x << " is " << 24 << " letter in alphabet.\n";
        else if(x == 'y' || x == 'Y')
            std::cout << "That is right " << x << " is " << 25 << " letter in alphabet.\n";
        else if(x == 'z' || x == 'Z')
            std::cout << "That is right " << x << " is " << 26 << " letter in alphabet.\n";

        return true;
    }
    else
       return false;
}
