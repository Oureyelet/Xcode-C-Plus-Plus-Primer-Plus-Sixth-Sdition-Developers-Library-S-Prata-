//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.9 -- reversing an array
//
//  Created by Mateusz Kacperski on 22/12/2022.
//

#ifndef Listing_5_9_forstr2_h
#define Listing_5_9_forstr2_h

#include <string>
#include <iostream>

void listing_5_9()
{
    std::cout << "Enter a word: ";
    std::string word;
    std::cin >> word;
    
    char temp;
    std::size_t i, j;
    
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    
    std::cout << word << '\n';
    
}

#endif /* Listing_5_9_forstr2_h */
