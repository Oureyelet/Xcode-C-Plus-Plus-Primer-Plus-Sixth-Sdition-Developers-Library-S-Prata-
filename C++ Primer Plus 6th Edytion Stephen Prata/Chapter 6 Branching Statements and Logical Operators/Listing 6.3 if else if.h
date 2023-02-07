//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.3 -- using if else if else
//
//  Created by Mateusz Kacperski on 04/02/2023.



#ifndef Listing_6_3_if_else_if_h
#define Listing_6_3_if_else_if_h

#include <iostream>

const int Fave = 77;

void listing_6_3()
{
    int n;
    
    std::cout << "Enter a number in the range 1-100 to find ";
    std::cout << "my favorite number: ";
    
    do
    {
        std::cin >> n;
        if(n < Fave)
            std::cout << "Too low -- guess again: ";
        else if(n > Fave)
            std::cout << "Too high -- guess again: ";
        else
            std::cout << " is right!\n";
        
    } while(n != Fave);
}

#endif /* Listing_6_3_if_else_if_h */
