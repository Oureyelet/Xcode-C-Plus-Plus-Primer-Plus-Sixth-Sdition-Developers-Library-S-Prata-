//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.11 -- comparing strings using arrays
//
//  Created by Mateusz Kacperski on 26/12/2022.
//

#ifndef Listing_5_11_compstr1_h
#define Listing_5_11_compstr1_h

#include <cstring>  // prototype for strcmp()
#include <iostream>

void listing_5_11()
{
    char word[5] = "?ate";
    
    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        std::cout << word << '\n';
        word[0] = ch;
    }
    std::cout << "After loop ends, word is " << word << std::endl;
}

void if_is_equality()
{
    char guess[50];
    char word[6] = "love";
    
    do
    {
        std::cout << "Enter your guess word: ";
        std::cin >> guess;
    } while (strcmp(word, guess) != 0);
    
    std::cout << "Yes, word is " << word << std::endl;
}


#endif /* Listing_5_11_compstr1_h */
