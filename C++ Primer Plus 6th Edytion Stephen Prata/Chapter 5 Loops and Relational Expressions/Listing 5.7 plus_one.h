//  C++ Primer Plus 6th Edytion Stephen Prata
//  Listing 5.7 -- The increment operator
//  Chapter 5 Loops and Relational Expressions
//
//  Created by Mateusz Kacperski on 21/12/2022.
//

#ifndef Listing_5_7_plus_one_h
#define Listing_5_7_plus_one_h

#include <iostream>

void listing_5_7()
{
    int a = 20;
    int b = 20;
    
    std::cout << "a = " << a << "; b = " << b << '\n';
    std::cout << "a++ = " << a++ << "; ++b= " << ++b << '\n';
    std::cout << "a = " << a << "; b = " << b << '\n';
}


#endif /* Listing_5_7_plus_one_h */
