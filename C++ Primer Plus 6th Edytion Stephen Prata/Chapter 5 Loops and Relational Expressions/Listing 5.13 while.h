//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.13 while -- introducing the while loop
//
//  Created by Mateusz Kacperski on 02/01/2023.
//

#ifndef Listing_5_13_while_h
#define Listing_5_13_while_h

#include <iostream>
#include <string>

const int arSize = 20;

void listing_5_13()
{
    char name[arSize];
    
    std::cout << "Your first name, please: ";
    std::cin >> name;
    std::cout << "Here is your name, verticalized and ASCIIized:\n";
    
    int i = 0;  // start at beginning of string
    while (name[i] != '\0')
    {
        std::cout << name[i] << ": " << int(name[i]) << std::endl;
        i++;    // don’t forget this step
    }
}

void infinity_loop()
{
    while (true)
    {
        std::cout << "Jezus Chrystus jest Panem" << ' ';
    }
}


#endif /* Listing_5_13_while_h */
