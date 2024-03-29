//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.13 -- non-numeric input terminates loop
//
//  Created by Mateusz Kacperski on 12/04/2023.



#ifndef Listing_6_13_cinfish_h
#define Listing_6_13_cinfish_h

#include <iostream>

const int Max = 5;

void listing_6_13()
{
    
//    std::cin.clear();
//    std::cin.ignore(1000, '\n');
    
//get data
    double fish[Max];
    
    std::cout << "Please enter the weight of your fish.\n";
    std::cout << "You may enter up to " << Max << " fish <q to terminate>.\n";
    std::cout << "fish #1: ";
    
    int i = 0;
    
    while (i < Max && std::cin >> fish[i])
    {
        if (++i < Max)
            std::cout << "fish #" << i+1 << ": ";
    }
    
//calculate average
    double total = 0.0;
    for(int j = 0; j < i; j++)
        total += fish[j];

//report results
    if (i == 0)
    {
        std::cout << "No fish\n";
    }
    else
        std::cout << total / i << " = average weight of "
        << i << " fish\n";
    std::cout << "Done.\n";
    
}

#endif /* Listing_6_13_cinfish_h */
