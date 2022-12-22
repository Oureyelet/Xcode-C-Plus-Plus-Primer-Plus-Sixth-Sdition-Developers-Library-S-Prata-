//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.8 -- use a block statement
//
//  Created by Mateusz Kacperski on 22/12/2022.
//

#ifndef Listing_5_8_block_h
#define Listing_5_8_block_h

#include <iostream>

void listing_5_8()
{
    std::cout << "The Amazing Accounto will sum and average ";
    std::cout << "five numbers for you.\n";
    std::cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;
    
    for (int i = 1; i <= 5; i++)
    {                                           // block starts here
        std::cout << "Value " << i << ": ";
        std::cin >> number;
        sum += number;
    }                                           // block ends here
    
    std::cout << "Five exquisite choices indeed! ";
    std::cout << "They sum to " << sum << std::endl;
    std::cout << "and average to " << sum / 5 << ".\n";
    std::cout << "The Amazing Accounto bids you adieu!\n";
    
}

#endif /* Listing_5_8_block_h */
