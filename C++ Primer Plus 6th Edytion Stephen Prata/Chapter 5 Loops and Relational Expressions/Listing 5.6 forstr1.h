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
    std::cout << "Enter a word: ";
    std::string word;
    std::cin >> word;
    
    int index_zero = -1;
    
    // display letters in reverse order
    for (std::size_t i = word.size() - 1; i != index_zero; i--)
    {
        std::cout << word[i] << ' ';
    }
    std::cout << "\nBye. \n";
    
}


#endif /* Listing_5_6_forstr1_h */
