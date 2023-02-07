//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.4 -- using the logical OR operator
//
//  Created by Mateusz Kacperski on 07/02/2023.



#ifndef Listing_6_4_or_h
#define Listing_6_4_or_h

#include <iostream>

void listing_6_4()
{
    std::cout << "This program may reformat your hard disk\n"
                 "and destroy all your data.\n"
                 "Do you wish to continue? <y/n> ";
    char ch;
    std::cin >> ch;
    
    if(ch == 'y' || ch == 'Y')  // y or Y
        std::cout << "You were warned!\a\a\n";
    else if(ch == 'n' || ch == 'N')
        std::cout << "A wise choice ... bye.\n";
    else
        std::cout << "That wasn't a y or n! Apparently you "
                     "can't follow\ninstructions, so "
                     "I'll trash your disk anyway.\a\a\a\n";
}

#endif /* Listing_6_4_or_h */
