//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.16 -- functions with an array argument
//
//  Created by Mateusz Kacperski on 19/04/2023.



#ifndef Listing_6_16_sumafile_h
#define Listing_6_16_sumafile_h

#include <iostream>
#include <fstream>  // file I/O support
#include <cstdlib>  // support for exit()

const int SIZE = 60;

void listing_6_16()
{
    char filename[SIZE];
    std::ifstream fromFile; // object for handling file input
    
    std::cout << "Enter name of date file: ";
    std::cin.getline(filename, 60);
    fromFile.open(filename);    // associate fromFile with a file from computer
    
    if(!fromFile.is_open())
    {
        std::cout << "Could not open the file " << filename << std::endl;
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    
    double value;
    double sum = 0.0;
    int count = 0;
    
    /*
     Abbreviated file-reading loop design omit pre-loop input
     See "C++ Primer Plus Sixth Edition by Stephen Prata" page 297 with full explanation
     */
    
    /*
     If std::cin or input object file is part of a test condition for example in while loop , it's converted to type bool. The conversion value is true if input successeds and fals othervise.
     */
    while (fromFile >> value)   // read and test for success
    {
        
    }
}


#endif /* Listing_6_16_sumafile_h */
