//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7th Functions C++'s Programming Modules
//  Listing 7.7 -- array functions and const
//
//  Created by Mateusz Kacperski on 19/05/2023.



#ifndef Listing_7_7_arrfun3_h
#define Listing_7_7_arrfun3_h

#include <iostream>

void listing_7_7()
{
 
    
    
    
}

int fill_array(double ar[], int limit)
{
    double temp;
    int i;
    
    for (i = 0; i < limit; i++)
    {
        std::cout << "Enter value #" << (i + 1) << ": ";
        std::cin >> temp;
        
        if (!std::cin) // bad input
        {
            std::cin.clear();
            
            while (std::cin.get() != '\n')
                continue;
            
            std::cout << "Bad innput; input process terminated.\n";
            
            break;
        }
        else if(temp < 0)   // signal to terminate
            break;
        
        ar[i] = temp;
    }
    
    return i;
}


#endif /* Listing_7_7_arrfun3_h */
