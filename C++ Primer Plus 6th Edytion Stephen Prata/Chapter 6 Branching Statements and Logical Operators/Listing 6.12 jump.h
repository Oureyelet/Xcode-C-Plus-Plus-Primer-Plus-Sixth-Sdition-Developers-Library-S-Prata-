//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.12 -- sing continue and break
//
//  Created by Mateusz Kacperski on 15/02/2023.



#ifndef Listing_6_12_jump_h
#define Listing_6_12_jump_h

#include <iostream>

const int ArSize_v2 = 80;

void listing_6_12()
{
    char line[ArSize_v2];
    int spaces = 0;
    
    std::cout << "Enter a line of text: ";
    std::cin.get(line, ArSize_v2);
    std::cout << "Complete linne:\n" << line << std::endl;
    std::cout << "Line through first period:\n";
    
    for (int i = 0; line[i] != '\0'; i++)
    {
        std::cout << line[i];   // display character
        if(line[i] == '.')      // quit if it's a period
            break;
        if(line[i] != ' ')      // skip rest of loop
            continue;
        spaces++;
    }
    
    std::cout << '\n' << spaces << " spaces\n";
    std::cout << "Done.\n";
}


#endif /* Listing_6_12_jump_h */
