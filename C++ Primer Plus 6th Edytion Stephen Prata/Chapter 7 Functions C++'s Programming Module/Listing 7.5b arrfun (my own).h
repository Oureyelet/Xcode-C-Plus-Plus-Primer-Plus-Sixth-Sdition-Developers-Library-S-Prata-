//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7th Functions C++'s Programming Modules
//  Listing 7.5b -- My own variances of listing 7.5 with vector and input from user.
//
//  Created by Mateusz Kacperski on 15/05/2023.



#ifndef Listing_7_5b_arrfun__my_own__h
#define Listing_7_5b_arrfun__my_own__h

#include <iostream>
#include <vector>

int total = 0;

void listing_7_5b()
{
    std::cout << "Hom many person will eat cookies: ";
    int n;
    std::cin >> n;
    
    std::vector<int> arr_coockies;
    
    for (int i = 0; i < n; i++)
    {
        std::cout << "How many coockies eat " << (i + 1) << " person? : ";
        int coockie;
        std::cin >> coockie;
        arr_coockies.push_back(coockie);
    }
    
    for (int i = 0; i < n; i++)
    {
        total += arr_coockies[i];
    }
    std::cout << "Total cookies eaten: " << total << '\n';
}

#endif /* Listing_7_5b_arrfun__my_own__h */
