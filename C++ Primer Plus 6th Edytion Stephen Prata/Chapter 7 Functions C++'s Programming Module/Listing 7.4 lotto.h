//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7th Functions C++'s Programming Modules
//  Listing 7.4 -- probability of winning
//
//  Created by Mateusz Kacperski on 15/05/2023.

// Note: some implementations require double instead of long double


#ifndef Listing_7_4_lotto_h
#define Listing_7_4_lotto_h

#include <iostream>

long double probability(unsigned numbers, unsigned picks);

void listing_7_4()
{
    double total, choice;
    std::cout << "Enter the total number of choices on the game card and\n"
    "the number of picks allowed:\n";
    
    while ((std::cin >> total >> choice) && choice <= total)
    {
        std::cout << "You have one chance in ";
        std::cout << probability(total, choice);    // compute the odds
        std::cout << " of winning.\n";
        std::cout << "Next two numbers (q to quit): ";
    }
    std::cout << "Bye\n";
}


/*
 The following function calculates the probability of picking picks numbers correctly from numbers choices
 */
long double probability(unsigned numbers, unsigned picks) // numbers ans picks are formal parameters (local variables)
{
    // here come some local variables
    long double result = 1.0;
    long double n;
    unsigned p;
    
    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result *= n/p;
    }
    
    return result;
}

#endif /* Listing_7_4_lotto_h */
