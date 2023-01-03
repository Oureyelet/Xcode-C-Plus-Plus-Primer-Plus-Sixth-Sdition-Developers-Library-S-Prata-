//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.16 textin1.h -- reading chars with a while loop
//
//  Created by Mateusz Kacperski on 03/01/2023.
//

#ifndef Listing_5_16_textin1_h
#define Listing_5_16_textin1_h

#include <iostream>

void listing_5_16()
{
    char ch;
    int count = 0;  // use basic input
    
    std::cout << "Enter characters; enter # to quit:\n";
    std::cin >> ch; // get a character
    
    while (ch != '#')
    {
        std::cout << ch;    // echo the character
        ++count;            // count the character
        std::cin >> ch;     // get the next character
    }
    std::cout << std::endl << count << "  characters read.\n";
}


#endif /* Listing_5_16_textin1_h */
