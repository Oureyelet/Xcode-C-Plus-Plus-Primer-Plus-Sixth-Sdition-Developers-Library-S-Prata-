//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.20 nested.h -- nested loops and 2-D array
//
//  Created by Mateusz Kacperski on 13/01/2023.
//

#ifndef Listing_5_20_nested_h
#define Listing_5_20_nested_h

#include <iostream>

const int Cities = 5;
const int Years = 4;

void listinng_5_20()
{
    const char* cities[Cities] =    // array of pointer
    {                               // to 5 string
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };
    
    int maxtemps[Years][Cities] =   // 2-D array
    {
        {96, 100, 87, 101, 105},    // values for maxtemp[0]
        {96, 98, 91, 107, 104},     // values for maxtemp[1]
        {97, 101, 93, 108, 107},    // values for maxtemp[2]
        {98, 103, 95, 109, 108}     // values for maxtemp[3]
    };
    
    std::cout << "Maximum temperatures for 2008 - 2011\n\n";
    
    for(int city = 0; city < Cities; city++)
    {
        std::cout << cities[city] << ":\t";
        
        for (int year = 0; year < Years; year++)
        {
            std::cout << maxtemps[year][city] << "\t";
        }
        std::cout << std::endl;
    }
    
    std::cin.get();
}

#endif /* Listing_5_20_nested_h */
