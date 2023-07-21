//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7th Functions C++'s Programming Modules
//  Listing 7.7 -- array functions and const
//
//  Created by Mateusz Kacperski on 19/05/2023.



#ifndef Listing_7_7_arrfun3_h
#define Listing_7_7_arrfun3_h

#include <iostream>

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n); // don't changed data
void revalue(double r, double ar[], int n);

const int MAX = 5;

void listing_7_7()
{
    double properties[MAX];
    
    int size = fill_array(properties, MAX);
    show_array(properties, size);
    
    if(size > 0)
    {
        std::cout << "Enter revaluation factor: ";
        
        double factor;
        while (!(std::cin >> factor))   // Basicly that while loop checking if we enter a number if not 'continue' start again from beggining until we enter a number
        {
            std::cin.clear();
            
            while (std::cin.get() != '\n')
                continue;
            
            std::cout << "Bad input; Pleace enter a number: ";
        }
        
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    
    std::cout << "Done.\n";
    
    
    
    
    std::cin.get();
    std::cin.get();
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
            
            std::cout << "Bad input; input process terminated.\n";
            
            break;
        }
        else if(temp < 0)   // signal to terminate
            break;
        
        ar[i] = temp;
    }
    
    return i;
}

void show_array(const double ar[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << "Property #" << (i + 1) << ": $";
        std::cout << ar[i] << std::endl;
    }
}

//multiplies each element of ar[] by r
void revalue(double r, double ar[], int n)
{
    for(int i = 0; i < n; i++)
        ar[i] *= r;
}


#endif /* Listing_7_7_arrfun3_h */
