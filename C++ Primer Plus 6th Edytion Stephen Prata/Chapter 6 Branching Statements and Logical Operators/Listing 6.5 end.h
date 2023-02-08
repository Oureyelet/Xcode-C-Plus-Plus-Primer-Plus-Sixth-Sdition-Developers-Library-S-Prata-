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
    
    while(i < ArSize && temp >= 0)          // 2 quitting criteria
    {
        naaq[i] = temp;
        ++i;
        
        if(i < ArSize)                      // room left in the array
        {
            std::cout << "Next value: ";
            std::cin >> temp;               // so get next value
        }
    }
    if(i == 0)
        std::cout << "No data--bye.\n";
    else
    {
        std::cout << "Enter your NAAQ: ";
        float you;
        std::cin >> you;
        int count = 0;
        for(int j = 0; j < i; j++)
            if(naaq[j] > you)
                ++count;
        std::cout << count;
        std::cout << " of your neighbors have greater awareness of\n"
                  << "the New Age than you do\n";
    }
}

#endif /* Listing_6_5_end_h */
