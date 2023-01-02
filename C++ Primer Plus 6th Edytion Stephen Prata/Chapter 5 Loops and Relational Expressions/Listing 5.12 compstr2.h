//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.12 compstr2 -- comparing strings using arrays
//
//  Created by Mateusz Kacperski on 02/01/2023.
//

#ifndef Listing_5_12_compstr2_h
#define Listing_5_12_compstr2_h

#include <iostream>
#include <string>   // string class

void listing_5_12()
{
    std::string word = "?ate";
    
    for (char ch = 'a'; word != "mate"; ch++)
    {
        std::cout << word << '\n';
        word[0] = ch;
    }
    
    std::cout << "After loop ends, word is " << word << '\n';
}


#endif /* Listing_5_12_compstr2_h */
