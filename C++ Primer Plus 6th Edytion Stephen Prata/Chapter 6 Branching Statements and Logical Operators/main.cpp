//
//  main.cpp -- S.Prata C++ Primer Plus 6th ed.
//  Chapter 6 Branching Statements and Logical Operators
//
//  Created by Mateusz Kacperski on 28/01/2023.
//

#include <iostream>
#include <cctype>
#include <string>

// Examples has been included in header files:
#include "Listing 6.1 if.h"
#include "Listing 6.2 if else.h"
#include "Listing 6.3 if else if.h"
#include "Listing 6.4 or.h"
#include "Listing 6.5 end.h"
#include "Listing 6.6 more end.h"
#include "Listing 6.7 not.h"
#include "Listing 6.8 cctypes.h"
#include "Listing 6.9 condit.h"
#include "Listing 6.10 switch.h"
#include "Listing 6.11 enum.h"
#include "Listing 6.12 jump.h"

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

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
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
    // The ?: Operator: check example here -> "Listing 6.9 condit.h"
    //-----------------------------------------------------------------------------------------------------
       
    /*
     C++ has an operator that can often be used instead of the if else statement.This opera- tor is called the conditional operator,
     written ?:, and, for you trivia buffs, it is the only C++ operator that requires three operands.The general form looks like this:
     
     expression1 ? expression2 : expression3
     */
    
    // listing_6_9();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The switch Statement: check example here -> "Listing 6.10 switch.h"
    //-----------------------------------------------------------------------------------------------------
    
    /*
     Each switch case label must be a single value. Also that value must be an integer (which includes char).
     */
    
    // listing_6_10();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Using Enumerators as Labels: check example here -> "Listing 6.11 enum.h"
    //-----------------------------------------------------------------------------------------------------
    
     // listing_6_11();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Switch and if else:
    //-----------------------------------------------------------------------------------------------------
    
    /*
     "If you can use either an if else if sequence or a switch statement, the usual practice is to use switch if you have three or more alternatives."
     */
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    //  The break and continue Statements: check example here -> "Listing 6.12 jump.h"
    //-----------------------------------------------------------------------------------------------------
    
    /*
    "The break and continue statements enable a program to skip over parts of the code.You can use the break statement in a switch statement and in any of the loops. It causes pro- gram execution to pass to the next statement following the switch or the loop.The continue statement is used in loops and causes a program to skip the rest of the body of the loop and then start a new loop cycle (see Figure 6.4)."
     */
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
//    listing_6_12();
    
//    std::string test = "H]llo Worl[d";
//
//    int index = test.find('[');
//
//    if(test.find('[') != std::string::npos)
//        std::cout << "true" << index << '\n';
//    else
//        std::cout << "false" << '\n';
//
    
    /*
     C++, like C, also has a goto statement. A statement like this means to jump to the location bearing the paris: label:
     */
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    tuesday: std::cout << "Tha's mean your monday inclue :P" << '\n';
    
    char monday;
    std::cin >> monday;
    if(monday == 'P')
        goto tuesday;
    
    std::cout << "Tha's mean your monday did not inclue P." << '\n';
    
    /*
     In most circumstances (some would say in all circumstances), using goto is a bad hack, and you should use structured controls, such as if else, switch, continue, and the like, to control program flow.
     */
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    //  Number-Reading Loops: check example here -> "Listing 6.12 jump.h"
    //-----------------------------------------------------------------------------------------------------
    
    std::cout << "New start after Easter - Jezus Christ is my Lord" << '\n';
    
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
