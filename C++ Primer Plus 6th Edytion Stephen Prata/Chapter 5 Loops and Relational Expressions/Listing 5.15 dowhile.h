//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.15 dowhile.h -- exit-condition loop
//
//  Created by Mateusz Kacperski on 03/01/2023
//

#ifndef Listing_5_15_dowhile_h
#define Listing_5_15_dowhile_h

#include <iostream>

void listing_5_15()
{
    int n;
    
    do
    {
        std::cout << "Enter numbers in the range 1-10 to find ";
        std::cout << "my favorite number: ";
        
        std::cin >> n;  // execute body
        
    } while (n != 7);   // then test
    
    std::cout << "Yes Yes, 7 is my favorite.\n";
}


#endif /* Listing_5_15_dowhile_h */
