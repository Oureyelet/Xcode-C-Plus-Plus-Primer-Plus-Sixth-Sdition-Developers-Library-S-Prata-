//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.2 -- use numeric test in for loop
//
//  Created by Mateusz Kacperski on 13/12/2022.
//

#ifndef Listing_5_2_num_test_h
#define Listing_5_2_num_test_h

#include <thread>

void listing_5_2()
{
    std::cout << "Enter the starting countdown value: ";
    int limit;
    std::cin >> limit;
    int i;
    
    for(i = limit; i; i--)  // quits when 'i' is 0
    {
        /*
         How do relational expressions, such as i < 5, fit into this framework of terminating a loop with a 0 value? Before the bool type was introduced, relational expressions evaluated to 1 if true and 0 if false.Thus, the value of the expression 3 < 5 was 1, and the value of 5 < 5 was 0.
         */
        
        std::cout << "i = " << i << '\n';
        
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds
        
        sleep_for(nanoseconds(10)); // sleep
        sleep_until(system_clock::now() + seconds(1)); // sleep for 1 sec
    }
    
    std::cout << "Done ! now that i = " << i << '\n';
}

#endif /* Listing_5_2_num_test_h */
