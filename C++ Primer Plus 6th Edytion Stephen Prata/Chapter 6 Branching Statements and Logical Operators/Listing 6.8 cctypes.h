//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.8 -- using the ctype.h library
//
//  Created by Mateusz Kacperski on 10/02/2023.



#ifndef Listing_6_8_cctypes_h
#define Listing_6_8_cctypes_h

#include <iostream>
#include <cctype>   // prototypes for character functions

void listing_6_8()
{
    std::cout << "Enter text for analysis, and type @"
              << " to terminate input.\n";
    
    char ch;
    int white_spaces = 0;
    int digits = 0;
    int chars = 0;
    int puncts = 0;
    int otchers = 0;
    
    std::cin.get(ch);
    
    while(ch != '@')
    {
        if(isalpha(ch))
            ++chars;
        else if(isspace(ch))
            ++white_spaces;
        else if(isdigit(ch))
            ++digits;
        else if(ispunct(ch))
            ++puncts;
        else
            ++otchers;
        std::cin.get(ch);
    }
    
    std::cout << chars << " chars\n"
              << white_spaces << " white spaces\n"
              << digits << " digits\n"
              << puncts << " puncts\n"
              << otchers << " otchers.\n";
}


#endif /* Listing_6_8_cctypes_h */
