//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.1 if.h -- using the if statement (how many spaces and characters sentance has)
//
//  Created by Mateusz Kacperski on 03/02/2023.
//

#ifndef Listing_6_1_if_h
#define Listing_6_1_if_h

#include <iostream>

void listinng_6_1()
{
    std::cout << "Enter sentens with periot on the end please: ";
    char ch;
    int spaces = 0;
    int total = 0;
    std::cin.get(ch);
    
    while(ch != '.')        // quit at end of sentence
    {
        if(ch == ' ')
            ++spaces;
        ++total;            // done every time
        std::cin.get(ch);
    }
    std::cout << spaces << " spaces, " << total;
    std::cout << " characters total in sentence\n";
    std::cout << "ch: " << ch << '\n';
}


#endif /* Listing_6_1_if_h */
