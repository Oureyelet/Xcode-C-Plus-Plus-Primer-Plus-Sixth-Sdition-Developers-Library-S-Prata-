//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.18 textin3.h -- reading chars to end of file
//
//  Created by Mateusz Kacperski on 06/01/2023.
//

#ifndef Listing_5_18_textin3_h
#define Listing_5_18_textin3_h

#include <iostream>

void listing_5_18()
{
    char ch;
    int count = 0;
    
    std::cin.get(ch);               // attempt to read a char
    
    while (std::cin.fail() == false)// test for EOF - (EOF) mean end-of-file
    {
        std::cout << ch;            // echo character
        ++count;
        std::cin.get(ch);           // attempt to read another char
    }
    std::cout << std::endl << count << " characters read\n";
}

#endif /* Listing_5_18_textin3_h */
