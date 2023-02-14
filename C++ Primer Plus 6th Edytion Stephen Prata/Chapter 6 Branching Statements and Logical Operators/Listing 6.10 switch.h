//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 6 Branching Statements and Logical Operators
//  Listing 6.10 -- using the switch statement
//
//  Created by Mateusz Kacperski on 13/02/2023.



#ifndef Listing_6_10_switch_h
#define Listing_6_10_switch_h

#include <iostream>
#include <cctype>

void showmenu();
void report();
void comfort();

void listing_6_10()
{
    showmenu();
    int choice;
    std::cout << std::endl;
    std::cin >> choice;
    
    while(choice != 5)
    {
        switch (choice)
        {
            case 1: std::cout << "\a\n";
                break;
            case 2: report();
                break;
            case 3: std::cout << "No I have not seen boss this day in office.\n";
                break;
            case 4: comfort();
                break;
            default: std::cout << "That's not a choice.\n";
        }
        showmenu();
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        
        /*
         Without clear() and ignore() program goint to endless infinity input loop.
         To deal with those who don’t follow instructions, it’s better to use char- acter input.
         */
        
        std::cin >> choice;
    }
    
    std::cout << "Bye byee\n";
}

void showmenu()
{
    std::cout << "\nPlease Enter number from menu below\n"
              << "1: Alarm\n"
              << "2: Report\n"
              << "3: Alibi\n"
              << "4: Comfort\n"
              << "5: Quit\n";
}

void report()
{
    std::cout << "It's been an excellent week for business.\n"
                 "Sales are up 120%. Expenses are down 35%.\n";
}

void comfort()
{
    std::cout << "Your employees think you are the finest CEO\n"
                 "in the industry. The board of directors think\n"
                 "you are the finest CEO in the industry.\n";
}

#endif /* Listing_6_10_switch_h */
