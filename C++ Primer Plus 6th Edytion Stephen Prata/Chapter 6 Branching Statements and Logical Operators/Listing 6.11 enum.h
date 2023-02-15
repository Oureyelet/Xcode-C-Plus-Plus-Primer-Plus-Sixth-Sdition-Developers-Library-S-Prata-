//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.11 -- switch and using enum
//
//  Created by Mateusz Kacperski on 14/02/2023.



#ifndef Listing_6_11_enum_h
#define Listing_6_11_enum_h

#include <iostream>

// create named constants for 0 - 6
enum
{
    red,    // = 0
    orange, // = 1
    yellow, // = 2
    green,  // = 3
    blue,   // = 4
    violet, // = 5
    indigo  // = 6
};

void listing_6_11()
{
    std::cout << "Enter color code (0-6): ";
    int code;
    std::cin >> code;
    
    while (code >= red && code <= indigo)
    {
        switch (code)
        {
            case red:       std::cout << "I like red apple.\n";     break;
            case orange:    std::cout << "I like orange juice.\n";  break;
            case yellow:    std::cout << "I like yellow light.\n";  break;
            case green:     std::cout << "I like green grass.\n";   break;
            case blue:      std::cout << "I like blue sky.\n";      break;
            case violet:    std::cout << "I like violet pillow.\n"; break;
            case indigo:    std::cout << "I like indigo color.\n";  break; 
        }
        
        std::cout << "Enter color code (0-6): ";
        
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        
        /*
         Without clear() and ignore() program goint to endless infinity input loop.
         To deal with those who don’t follow instructions, it’s better to use char- acter input.
         */
        
        std::cin >> code;
    }
    std::cout << "Have a nice day sir.\n";
}


#endif /* Listing_6_11_enum_h */
