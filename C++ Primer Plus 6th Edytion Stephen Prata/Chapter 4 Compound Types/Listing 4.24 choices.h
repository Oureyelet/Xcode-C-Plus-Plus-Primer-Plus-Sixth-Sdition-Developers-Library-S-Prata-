//
//  C++ Primer Plus 6th Edytion Stephen Prata
//
//  Listing 4.24 choices.h -- array variations
//
//  Created by Mateusz Kacperski on 19/11/2022.
//

#ifndef Listinng_h
#define Listinng_h

#include <iostream>
#include <vector>   // STL C++98
#include <array>    // C++11

int listing_4_24()
{
    // C, original C++
    double a1[4] = {1.2, 3.2, 23.2, 45.1};
    
    // C++98 STL
    std::vector<double> a2(4); // create vector with 4 elements
    // no simple way to initialize in C98
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
    
    // C++11 -- create and initialize array object
    std::array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    std::array<double, 4> a4;
    
    a4 = a3; // valid for array objects of same size
    
    // use array notation
    std::cout << "a1[2]: " << a1[2] << " at " << &a1[2] << '\n';
    std::cout << "a2[2]: " << a2[2] << " at " << &a2[2] << '\n';
    std::cout << "a3[2]: " << a3[2] << " at " << &a3[2] << '\n';
    std::cout << "a4[2]: " << a4[2] << " at " << &a4[2] << '\n';
    
    // misdeed
    //a1[-2] = 20.2; // same as *(a1-2) mean where a1 point move backword two doubles elements
    // this is an example of the unsafe behavior of build-in array
    //std::cout << "a1[-2] " << a1[-2] << " at " << &a1[-2] << '\n';
    std::cout << "a3[2]: " << a3[2] << " at " << &a3[2] << '\n';
    std::cout << "a4[2]: " << a4[2] << " at " << &a4[2] << '\n';
    
    // Vector object is stored in free store or heap region of memory
    
    a4.at(3) = 3.33; // assign 3.33 to a4[4]
    /*The difference between using bracket notation and the at() member function is that if you use at(), an invalid index is caught during runtime and the program, by default, aborts.*/
    
    return 0;
}

#endif /* Listinng_h */
