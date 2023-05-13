//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7th Functions C++'s Programming Modules
//  Listing 7.3 -- a function with 2 arguments
//
//  Created by Mateusz Kacperski on 8/05/2023.



#ifndef Listing_7_3_twoarg_h
#define Listing_7_3_twoarg_h

#include <iostream>

void n_chars(char,int);

void listing_7_3()
{
    int times;
    char ch;
    
    std::cout << "Enter a character: ";
    std::cin >> ch;
    
    while (ch != 'q')   // q to quit
    {
        std::cout << "Enter an integer: ";
        std::cin >> times;  // std::cin >> skips spaces and newlines.
        n_chars(ch, times); // function with two arguments
        
        std::cout << "\nEnter another character or press the"
                        " q-key to quit: ";
        std::cin >> ch;
    }
    std::cout << "The value of times is " << times << ".\n";
    std::cout << "Bye\n";
}

void n_chars(char c, int n) // displays c n times
{
    while (n-- > 0)         // continue until n reaches 0
        std::cout << c;
}


#endif /* Listing_7_3_twoarg_h */
