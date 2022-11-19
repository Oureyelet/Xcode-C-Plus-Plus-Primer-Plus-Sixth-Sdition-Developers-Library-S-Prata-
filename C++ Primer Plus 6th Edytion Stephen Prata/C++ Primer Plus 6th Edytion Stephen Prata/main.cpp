//
//  main.cpp -- S.Prata C++ Primer Plus 6th ed. Chapter 4 -- Compound Types.
//  Chapter 4 Compound Types (Xcode)
//
//  Created by Mateusz Kacperski on 16/11/2022.
//
#include <iostream>
#include <vector>
#include <array>
#include "Listing 4.24 choices.h"

int main()
{

    std::cout << "Hello, World\n";
    
    
    //--------------------------------------------------------------------------------------------
    // Array Alternatives:
    //--------------------------------------------------------------------------------------------

    
    //--------------------------------------------------------------------------------------------
    // The vector Template Class:
    //--------------------------------------------------------------------------------------------
    
    // Vector is dynamic array.
    
    std::vector<int> vi;        // create a zero-size array of int
    
    std::cout << "Enter size of std::vector<int> vi: ";
    int n;
    std::cin >> n;
    
    std::vector<double> vd(n);  // create an array of n doubles
    
    std::cout << "vd vector size is: " <<vd.size() << '\n';
    
    
    //--------------------------------------------------------------------------------------------
    // The Array Template Class(C++11):
    //--------------------------------------------------------------------------------------------
    std::array<int, 5> ai;  // create array object of 5 ints
    std::array<double, 4> ad {1.2, 2.1, 3.43, 4.3};
    //unlike the case of vector, size of array can't be variable.
    
    
    //--------------------------------------------------------------------------------------------
    // Comparing Arrays, Vector Object and Array Objects:
    //--------------------------------------------------------------------------------------------
    
    
    listing_4_24();
    
    
    
    
    return 0;
}
