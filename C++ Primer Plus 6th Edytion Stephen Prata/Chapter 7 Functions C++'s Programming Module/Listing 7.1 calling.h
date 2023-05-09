//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7 Functions C++'s Programming Modules
//  Listing 7.1 -- defining, prototyping and calling a function
//
//  Created by Mateusz Kacperski on 9/05/2023.



#ifndef Listing_7_1_calling_h
#define Listing_7_1_calling_h

void simple();

void listing_7_1() // we treat listing_7_2() as a example of using main() in main.cpp
{
    std::cout << "listing_7_1() will call the simple() function:\n";
    simple();   // function call
    std::cout << "listing_7_1() is finished with the simple() function.\n";
}

void simple()
{
    std::cout << "I'm but a simple function.\n";
}

#endif /* Listing_7_1_calling_h */
