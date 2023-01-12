//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.19 textin4.h -- reading chars with cin.get()
//
//  Created by Mateusz Kacperski on 11/01/2023.
//

#ifndef Listing_5_19_textin4_h
#define Listing_5_19_textin4_h

#include <iostream>

void listing_5_19()
{
    int ch; // should be int, not char
    int count = 0;
    
    while ((ch = cin.get()) != EOF) // test for end-of-file
    {
        std::cout.put(char(ch));
        ++count;
    }
    std::cout << std::endl << " characters read\n";
}


#endif /* Listing_5_19_textin4_h */
