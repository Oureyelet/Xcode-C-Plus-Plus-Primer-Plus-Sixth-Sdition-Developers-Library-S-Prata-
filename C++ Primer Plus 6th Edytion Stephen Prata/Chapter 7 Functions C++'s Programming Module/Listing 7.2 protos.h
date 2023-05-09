//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7th Functions C++'s Programming Modules
//  Listing 7.2 -- using prototypes and function calls
//
//  Created by Mateusz Kacperski on 9/05/2023.



#ifndef Listing_7_2_protos_h
#define Listing_7_2_protos_h

void cheers(int);       // prototype: no return value
double cube(double x);  // prototype: return a double

void listing_7_2()  // we treat listing_7_2() as a example of using main() in main.cpp
{
    
}

void cheers(int x)
{
    for (int i = 0; i < x; i++)
    {
        std::cout << "Cheers! ";
        std::cout << std::endl;
    }
}

double cube(double x)
{
    return x * x * x;
}

#endif /* Listing_7_2_protos_h */
