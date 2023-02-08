//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.5 -- using the logical AND operator
//
//  Created by Mateusz Kacperski on 08/02/2023.



#ifndef Listing_6_6_more_end_h
#define Listing_6_6_more_end_h

#include <iostream>

const char* qualify[4] =
{
    "10,000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"

};

void listing_6_6()
{
    int age;
    std::cout << "Enter your age in years: ";
    std::cin >> age;
    int index;
    
    if(age > 17 && age < 35)
        index = 0;
    else if(age >= 35 && age < 50)
        index = 1;
    else if(age >= 50 && age < 65)
        index = 2;
    else
        index = 3;
    
    std::cout << "You qualify for the " << qualify[index] << '\n';
}


#endif /* Listing_6_6_more_end_h */
