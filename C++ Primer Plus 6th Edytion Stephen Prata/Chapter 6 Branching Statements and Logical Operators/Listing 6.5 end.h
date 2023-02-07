//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.5 -- using the logical AND operator
//
//  Created by Mateusz Kacperski on 07/02/2023.



#ifndef Listing_6_5_end_h
#define Listing_6_5_end_h

#include <iostream>

const int ArSize = 7;

void listing_6_5()
{
    float naaq[ArSize];
    std::cout << "Enter the NAAQs (New Age Awareness Quotients) "
              << "of\nyour neighbors. Program terminates "
              << "when you make\n" << ArSize << " entries "
              << "or enter a negative value.\n";
    
    int i = 0;
    float temp;
    std::cout << "First value: ";
    std::cin >> temp;
    
    while(i < ArSize && temp >= 0)
    {
        
    }
}

#endif /* Listing_6_5_end_h */
