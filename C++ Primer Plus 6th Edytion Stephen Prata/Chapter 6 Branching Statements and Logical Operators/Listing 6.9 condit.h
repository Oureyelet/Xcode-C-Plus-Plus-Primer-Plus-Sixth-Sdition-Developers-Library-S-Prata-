//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.9 -- using the conditional operator
//
//  Created by Mateusz Kacperski on 11/02/2023.



#ifndef Listing_6_9_condit_h
#define Listing_6_9_condit_h

#include <iostream>

void listing_6_9()
{
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "The larger of " << a << " and " << b;
    int c = a > b ? a : b;  // c = a if a > b, else c = b
    std::cout << " is " << c << '\n';
}

#endif /* Listing_6_9_condit_h */
