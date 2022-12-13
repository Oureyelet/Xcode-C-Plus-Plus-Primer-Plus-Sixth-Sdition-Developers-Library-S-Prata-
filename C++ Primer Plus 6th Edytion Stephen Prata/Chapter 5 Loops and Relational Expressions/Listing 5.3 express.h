//  C++ Primer Plus 6th Edytion Stephen Prata
//  Listing 5.3 values of expressions
//  Chapter 5 Loops and Relational Expressions
//
//  Created by Mateusz Kacperski on 13/12/2022.
//

#ifndef Listing_5_3_express_h
#define Listing_5_3_express_h

#include <iostream>

void listing_5_3()
{
    int x;
    
    std::cout << "The expression x = 100 has the value ";
    std::cout << (x = 100) << '\n';
    std::cout << "Now x = " << x << '\n';
    
    std::cout << "The expression x < 3 has the value ";
    std::cout << (x < 3) << '\n';
    std::cout << "The expression x > 3 has the value ";
    std::cout << (x > 3) << '\n';
    
    std::cout.setf(std::ios_base::boolalpha); // a newer c++ feature
    
    std::cout << "The expression x < 3 has the value ";
    std::cout << (x < 3) << '\n';
    std::cout << "The expression x > 3 has the value ";
    std::cout << (x > 3) << '\n';
}

#endif /* Listing_5_3_express_h */
