//  C++ Primer Plus 6th Edytion Stephen Prata
//  Listing 5.1 introducing the for loop
//  Chapter 5 Loops and Relational Expressions
//
//  Created by Mateusz Kacperski on 10/12/2022.
//

#ifndef Listing_5_1_forloop_h
#define Listing_5_1_forloop_h

void listing_5_1()
{
    int i; // create a counter
//    initialize; test ; update
    for(i = 0; i < 5; i++)
        std::cout << "C++ knows loops.\n";
    std::cout << "C++ knows when to stop.\n";
}

#endif /* Listing_5_1_forloop_h */
