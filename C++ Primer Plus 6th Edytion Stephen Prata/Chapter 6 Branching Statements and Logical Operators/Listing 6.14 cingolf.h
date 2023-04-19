//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.14 -- non-numeric input skipped
//
//  Created by Mateusz Kacperski on 13/04/2023.



#ifndef Listing_6_14_cingolf_h
#define Listing_6_14_cingolf_h

#include <iostream>

const int Max_score = 5;

void listing_6_14()
{
// get data
    int golf[Max_score];
    
    std::cout << "Plese enter your golf scores.\n";
    std::cout << "You must enter " << Max_score << " rounds.\n";
    
    int i;
    for(i = 0; i < Max_score; i++)
    {
        std::cout << "round #" << i+1 << ": ";
        while(!(std::cin >> golf[i]))
        {
            std::cin.clear(); // reset input
            
            while (std::cin.get() != '\n')
            {
                continue; // get rid of bad input
            }
            
            std::cout << "Please enter a number: ";
        }
    }
// calculate average
    double total = 0.0;
    for(i = 0; i < Max_score; i++)
    {
        total += golf[i];
    }
    
// report result
    std::cout << total / Max_score << " = average score "
            << Max_score << " rounds\n";
}

#endif /* Listing_6_14_cingolf_h */
