//  C++ Primer Plus 6th Edytion Stephen Prata
//  Listing 5.6 -- using for with a string
//  Chapter 5 Loops and Relational Expressions
//
//  Created by Mateusz Kacperski on 20/12/2022.
//

#ifndef Listing_5_6_forstr1_h
#define Listing_5_6_forstr1_h

#include <iostream>
#include <string>

void listing_5_6()
{
    
    std::cout << "Enter the word: ";
    std::string word;
    std::cin >> word;
    
    std::size_t word_length = word.length();
    
    int index_zero = -1;
    
    for (std::size_t i = word_length - 1 ; i != index_zero; i--)
    {
        std::cout << word[i] << ' ';
    }
    std::cout << std::endl;
    
}


#endif /* Listing_5_6_forstr1_h */
