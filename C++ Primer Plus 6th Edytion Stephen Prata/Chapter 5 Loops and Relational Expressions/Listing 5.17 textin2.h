//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.17 textin2.cpp -- using cin.get(char)
//
//  Created by Mateusz Kacperski on 03/01/2023.
//

#ifndef Listing_5_17_textin2_h
#define Listing_5_17_textin2_h

#include <iostream>

void listing_5_17()
{
    char ch;
    int count = 0;  // use basic input
    
    std::cout << "Enter characters; enter # to quit:\n";
    std::cin.get(ch);    // use the cin.get(ch) function
    
    /*
     cin.get() is used for accessing character array. It includes white space characters. Generally, cin with an extraction operator (>>) terminates when whitespace is found. However, cin.get() reads a string with the whitespace.
     */
    
    while (ch != '#')
    {
        std::cout << ch;    // echo the character
        ++count;            // count the character
        std::cin.get(ch);        // use it again
    }
    std::cout << std::endl << count << "  characters read.\n";
}


#endif /* Listing_5_17_textin2_h */
