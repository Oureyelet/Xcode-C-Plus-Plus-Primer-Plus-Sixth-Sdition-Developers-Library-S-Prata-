//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7th Functions C++'s Programming Modules
//  Listing 7.8 -- function with an array range
//
//  Created by Mateusz Kacperski on 21/07/2023.



#ifndef Listing_7_8_arrfun4_h
#define Listing_7_8_arrfun4_h

#include <iostream>

const int ArSize_1 = 8;
int sum_arr(const int *begin, const int *end);

void listing_7_8()
{
    int cookies[ArSize_1] = {1, 2, 4, 8, 16, 32, 64, 128};
    
    int sum = sum_arr(cookies, cookies + ArSize_1);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    
    sum = sum_arr(cookies, cookies + 3); // first 3 elements only
    std::cout << "First three eaters ate: " << sum << " cookies.\n";
    
    sum = sum_arr(cookies +4 , cookies + 8); // last 4 elemets
    std::cout << "Last four eaters ate " << sum << " cookies.\n";
}


// return the sum of an integer array
int sum_arr(const int *begin, const int *end)
{
    const int *pt;
    int total = 0;
    
    for (pt = begin; pt != end; pt++)
        total += *pt;
    
    return total;
}

#endif /* Listing_7_8_arrfun4_h */
