//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.2 ifelse.h -- using the if else statement
//
//  Created by Mateusz Kacperski on 03/02/2023.
//

#ifndef Listing_6_2_ifelse_h
#define Listing_6_2_ifelse_h

#include <iostream>

void listing_6_2()
{
    char ch;
    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    
    if(ch == '\n')
        std::cout << ch;    // done if newline
    else
        std::cout << ch + 1;  // done otherwise
    std::cin.get(ch);
    
    // try ch + 1 instead of ++ch for interesting effect
    std::cout << "\nPlease excuse the slight confusion.\n";
    
    std::cin.get();
    std::cin.get();
}


#endif /* Listing_6_2_ifelse_h */
