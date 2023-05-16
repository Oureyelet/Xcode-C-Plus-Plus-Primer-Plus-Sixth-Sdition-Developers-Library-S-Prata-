//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7th Functions C++'s Programming Modules
//  Listing 7.6 -- funtion with an array argument
//
//  Created by Mateusz Kacperski on 8/05/2023.



#ifndef Listing_7_6_arrfun2_h
#define Listing_7_6_arrfun2_h

#include <iostream>

const int ArrSize = 8;
int sum_arr_2(int arr[], int n); // prototype

void listing_7_6()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    std::cout << cookies << " = cookies address, ";
    std::cout << sizeof cookies << " = sizeof of the whole cookies array (in bytes)\n";
    
    int sum = sum_arr_2(cookies, ArSize);
    std::cout << "Total cookies eaten = " << sum << std::endl;
    sum = sum_arr_2(cookies, 3); // a lie
    std::cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr_2(cookies + 4, 4); // Another lie however you can use &cookies[4] instead of cookies + 4 as the argument;
                                    // they both mean the same thing.
    std::cout << "Last four eaters ate " << sum << " cookies.\n";
}

// return the sum of an integer array
int sum_arr_2(int arr[], int n)
{
    int total = 0;
    std::cout << arr << " = array address, ";
    std::cout << sizeof arr << " = sizeof arr is the size of the pointer variable.\n";
    
    for (int i = 0; i < n; i++)
    {
        total = total + arr[i];
    }
    
    return total;
}

#endif /* Listing_7_6_arrfun2_h */
