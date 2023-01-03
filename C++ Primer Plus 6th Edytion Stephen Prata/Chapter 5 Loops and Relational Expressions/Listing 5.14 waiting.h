//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.14 waiting.h -- using clock() in a time-delay loop
//
//  Created by Mateusz Kacperski on 02/01/2023.
//

#ifndef Listing_5_14_waiting_h
#define Listing_5_14_waiting_h

#include <iostream>
#include <ctime>    // describes clock() function, clock_t type

void listing_5_14()
{
    std::cout << "Enter the delay time, in seconds: ";
    float secs;
    std::cin >> secs;
    
    clock_t delay = secs * CLOCKS_PER_SEC; // convert to clock ticks
    
    std::cout << "starting\a\n";
    clock_t start = clock();
    
    while (clock() - start < delay) // wait until time elapses
        ;                           // note the semicolon
    std::cout << "Done! \a\n";
}


#endif /* Listing_5_14_waiting_h */
