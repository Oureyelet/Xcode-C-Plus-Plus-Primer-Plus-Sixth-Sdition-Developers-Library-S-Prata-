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
    std::ifstream fromFile; // object for handling file input - read from file.
    
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
        ++count;                // one more item read
        sum += value;           // calculate runing total
    }
    
    if (fromFile.eof())
        std::cout << "End of file reached.\n";
    else if (fromFile.fail())
        std::cout << "Input terminated by data mismatch.\n";
    else
        std::cout << "Imput terminate for unknow reason.\n";
    
    if (count == 0)
        std::cout << "No data processed.\n";
    else
    {
//        std::cout << std::fixed;
        std::cout.precision(20);
        std::cout << "Items read: " << count << std::endl;
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Average: " << sum / count << std::endl;
    }
    
    fromFile.close();       // finished with the file
    
}


#endif /* Listing_6_16_sumafile_h */
