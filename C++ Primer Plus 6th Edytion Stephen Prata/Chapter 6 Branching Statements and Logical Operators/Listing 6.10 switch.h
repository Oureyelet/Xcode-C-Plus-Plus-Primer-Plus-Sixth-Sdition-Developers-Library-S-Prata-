//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.10 -- using the switch statement
//
//  Created by Mateusz Kacperski on 13/02/2023.



#ifndef Listing_6_10_switch_h
#define Listing_6_10_switch_h

#include <iostream>

void showmenu();

void listing_6_10()
{
    showmenu();
    int choice;
    std::cout << std::endl;
    std::cin >> choice;
    
    while(choice != 5)
    {
        switch (choice) {
            case 1:
                std::cout << "\a\n";
                break;
            case 2:
                std::cout << "\a\n";
                break;
            case 3:
                std::cout << "\a\n";
                break;
            case 4:
                std::cout << "\a\n";
                break;
            default:
                break;
        }
    }
    
    std::cout << "Bye byee\n";
}

void showmenu()
{
    std::cout << "Please Enter number from menu below\n"
              << "1: Alarm\n"
              << "2: Report\n"
              << "3: Alibi\n"
              << "4: Comfort\n"
              << "5: Quit\n";
}

void report()
{
    
}

void comfort()
{
    
}

#endif /* Listing_6_10_switch_h */
