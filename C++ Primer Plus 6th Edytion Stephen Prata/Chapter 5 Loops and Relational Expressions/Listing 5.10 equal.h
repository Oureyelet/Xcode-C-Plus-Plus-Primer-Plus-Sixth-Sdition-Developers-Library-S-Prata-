//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.10 -- equality vs assignment
//
//  Created by Mateusz Kacperski on 23/12/2022.
//

#ifndef Listing_5_10_equal_h
#define Listing_5_10_equal_h

#include <iostream>

void listing_5_10()
{
    int quizscores[10] = { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20 };
    
    /*
     "How to Find Size of an Array?":
     int size = sizeof(arr)/sizeof(arr[0]);
     */
    
    int size = sizeof(quizscores)/sizeof(quizscores[0]);
    
    std::cout << "Doing it right: " << '\n';
    
    for (int i = 0; quizscores[i] == 20; i++)
    {
        
        // check test that keeps it from going past the last member
        if (i > size - 1)
        {
            std::cout << "Exeption ! break.\n";
            break;
        }

        
        std::cout << "quiz " << i+1 << " is a 20\n";
    }
    
    // Warning: you may prefer reading about this program
    // to actually running it.

    
    std::cout << "Doing it dangerously wrong:\n";
    for (int i = 0; quizscores[i] = 20; i++)
    {
        // Short Hand If...Else:
        // (condition) ? expressionTrue : expressionFalse;
        
        // Check test that keeps it from going past the last member
        
        if (i > size - 1)
        {
            std::cout << "Exeption ! break.\n";
            break;
        }
        
        std::cout << "quiz " << i+1 << " is a 20\n";
    }
    
}

#endif /* Listing_5_10_equal_h */
