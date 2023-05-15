//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7th Functions C++'s Programming Modules
//  Listing 7.5 -- functions with an array argument
//
//  Created by Mateusz Kacperski on 15/05/2023.



#ifndef Listing_7_5_arrfun1_h
#define Listing_7_5_arrfun1_h

#include <iostream>

const int ArSize = 8;
int sum_arr(int arr[], int n); // function protytype

void listing_7_5()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    
    /*
     // Dynamically allocate the array
        int* array = new int[size];
     */
    
    int sum = sum_arr(cookies, ArSize);
    
    /*
     C++ interprets an array name as the address of its first element:
     cookies == &cookies[0] // array name is address of first element
     */
    
    std::cout << "Total cookies eaten: " << sum << '\n';
}


// return the sum of an integer array
int sum_arr(int arr[], int n) // arr = array name, n = size
{
    int total = 0;
    
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}


#endif /* Listing_7_5_arrfun1_h */
