//
//  main.cpp -- C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7 Functions C++'s Programming Modules
//
//  Created by Mateusz Kacperski on 8/05/2023.



#include <iostream>

// Examples has been included in header files:
#include "Listing 7.1 calling.h"
#include "Listing 7.2 protos.h"

// Function prototypes:
void cheers(int);
int test(double);
int bigger(int,int);

 
// Function prototypes for 'Programin Exercises':
void Programming_exercises_1();
void Programming_exercises_2();
void Programming_exercises_3();
void Programming_exercises_4();
void Programming_exercises_5();
void Programming_exercises_6();
void Programming_exercises_7();
void Programming_exercises_8();
void Programming_exercises_9();

int main()
{
    std::cout << "Hello, World!\n";
    
    /*
     In this chapter you’ll learn about the following:
     - Function basics
     - Function prototypes
     - Passing function arguments by value
     - Designing functions to process arrays
     - Using const pointer parameters
     - Designing functions to process text strings
     - Designing functions to process structures
     - Designing functions to process objects of the string class n Functions that call themselves (recursion)
     - Pointers to functions
     */
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Function Review: check example here -> "Listing 7.1 calling.h"
    //-----------------------------------------------------------------------------------------------------
    
    listing_7_1();
    std::cout << std::endl;
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Defining a Function:
    //-----------------------------------------------------------------------------------------------------
    
    cheers(15);
    
    std::cout << test(15.99999) << '\n'; // The double value (from parameters) in test() function is type cast to type int.
    
    std::cout << bigger(13, 14) << '\n';
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Prototyping and Calling a Function: check example here -> "Listing 7.2 protos.h"
    //-----------------------------------------------------------------------------------------------------
    
    
    std::cin.get();
    return 0;
}

void cheers(int n)
{
    for (int i = 0; i <= n; i++)
    {
        std::cout << "Cheers!";
        std::cout << std::endl;
    }
}

int test(double n)
{
    return n * 2;
}

int bigger(int a, int b)
{
    if (a > b)
        return a;   // if a > b, function terminates here
   // else
        return b;   // otherwise, function terminates here
}
