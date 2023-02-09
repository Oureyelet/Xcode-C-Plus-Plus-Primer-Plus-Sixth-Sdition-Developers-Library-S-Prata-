//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.7 -- using the not operator
//
//  Created by Mateusz Kacperski on 09/02/2023.



#ifndef Listing_6_7_not_h
#define Listing_6_7_not_h

#include <climits>
#include <iostream>

//function prototype:
bool is_int(double);

void listing_6_7()
{
    double num;
    
    std::cout << "Yo, dude! Enter an integer value: ";
    std::cin >> num;
    
    while(not is_int(num))                                     // continue while num is not int-able
    {
        std::cout << "Out of range -- please try again: ";
        std::cin >> num;
    }
    int val = int(num);                                     // type cast
    
    std::cout << "You've entered the integer " << val << "\nBye.\n";
}

bool is_int(double x)
{
    if(x <= INT_MAX and x >= INT_MIN)
        return true;
    else
        return false;
}


#endif /* Listing_6_7_not_h */
