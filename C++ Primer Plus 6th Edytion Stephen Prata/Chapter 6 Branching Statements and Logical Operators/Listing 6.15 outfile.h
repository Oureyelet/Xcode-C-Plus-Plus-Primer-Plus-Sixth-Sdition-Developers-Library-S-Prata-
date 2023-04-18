//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6. -- writing to a file
//
//  Created by Mateusz Kacperski on 14/04/2023.



#ifndef Listing_6_15_outfile_h
#define Listing_6_15_outfile_h

#include <iostream>
#include <fstream>  // for file I/O

void listing_6_15()
{
    char automobile[50];
    int year;
    double a_price;
    double b_price;
    
    std::ofstream outFile;          // create object for output
    outFile.open("carinfo.txt");    // associate with a file
    
    std::cout << "Enter the make and model of automobile: ";
    std::cin.getline(automobile, 50);
    std::cout << "Enter the model year: ";
    std::cin >> year;
    std::cout << "Enter the orginal asking price: ";
    std::cin >> a_price;
    b_price = 0.913 * a_price;
    
// display information on screen with std::cout
    
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout.setf(std::ios_base::showpoint);
    std::cout << "Make and model: " << automobile << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Was asking $" << a_price << std::endl;
    std::cout << "Now asking $" << b_price << std::endl;
    std::cout << std::filesystem::current_path();
    
// now do exact things using outFilr instead of std::cout
    
    outFile << std::fixed;
    outFile.precision(2);
    outFile.setf(std::ios_base::showpoint);
    outFile << "Make and model: " << automobile << std::endl;
    outFile << "Year: " << year << std::endl;
    outFile << "Was asking $" << a_price << std::endl;
    outFile << "Now asking $" << b_price <<std::endl;
    
    /*
     If you want to open contain folde go to top menu -> Product -> Show build folder in finder -> producks -> Debug
     */
    
    
    /*
     here is some play with this code...
     */
    
    std::ofstream trial1;
    std::ofstream trial2;
    
    trial1.open("trial 1 here");
    trial2.open("trial 2 here");
    
    trial1.precision(6);
    trial2.precision(3);
    
    double trial_1 = 4.678976;
    double trial_2 = 7.678976;
    
    trial1 << trial_1;
    trial2 << trial_2;
    
     
    outFile.close();    // done with file
}

#endif /* Listing_6_15_outfile_h */
