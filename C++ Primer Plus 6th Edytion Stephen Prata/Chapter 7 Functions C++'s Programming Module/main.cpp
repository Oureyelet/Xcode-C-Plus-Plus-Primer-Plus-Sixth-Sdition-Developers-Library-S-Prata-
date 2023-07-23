//
//  main.cpp -- C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7 Functions C++'s Programming Modules
//
//  Created by Mateusz Kacperski on 8/05/2023.



#include <iostream>

// Examples has been included in header files:
#include "Listing 7.1 calling.h"
#include "Listing 7.2 protos.h"
#include "Listing 7.3 twoarg.h"
#include "Listing 7.4 lotto.h"
#include "Listing 7.5 arrfun1.h"
#include "Listing 7.5b arrfun (my own).h"
#include "Listing 7.6 arrfun2.h"
#include "Listing 7.7 arrfun3.h"
#include "Listing 7.8 arrfun4.h"

// Function prototypes:
void cheerss(int);
int test(double);
int bigger(int,int);
void say_hi();
int change_x(int&);
int x_100 = 100; // example global variable could be change by passing by reference to function argumeter...
void favorite_char_and_number(int, char);
int test_2(int arr[], int n); // test only
int fill_array(int arr[], int limit);
void read_only_array(const int arr[], int size); // 'read only' prototype function
void displeymyarray(const int *begin, const int *end); // just example about using array range innstead of data type, the location of the beggining of the array and the number of elements

 
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
    
//    listing_7_1();
//    std::cout << std::endl;
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Defining a Function:
    //-----------------------------------------------------------------------------------------------------
    
//    cheers(15);
//
//    std::cout << test(15.99999) << '\n'; // The double value (from parameters) in test() function is type cast to type int.
//
//    std::cout << bigger(13, 14) << '\n';
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Prototyping and Calling a Function: check example here -> "Listing 7.2 protos.h"
    //-----------------------------------------------------------------------------------------------------
    
//    listing_7_2();
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Why Prototypes?
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Prototype Syntax:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // C++ Versus ANSI C Prototyping:
    //-----------------------------------------------------------------------------------------------------
    
    say_hi();

    
    
    
    //-----------------------------------------------------------------------------------------------------
    // What Prototypes Do for you:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Function Arguments and Passing by Value:
    //-----------------------------------------------------------------------------------------------------
    
    std::cout << "Before calling the funnction x_100 = " << x_100 << '\n';
    
//    std::cout << change_x(x_100);
    
    std::cout << "After callinng function x_100 = " << x_100 << '\n';
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Multiple Arguments: : check example here -> "Listing 7.3 twoarg.h"
    //-----------------------------------------------------------------------------------------------------
    
    std::cout << "12 may 23:16" << '\n';
    
//    listing_7_3();
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Another Two-Argument Function: check example here -> "Listing 7.4 lotto.h"
    //-----------------------------------------------------------------------------------------------------
        
//    listing_7_4();
    
    
    
    
    //------------------------------------------------------------------------------------------------------------------------
    // Functions and Arrays: check example here -> "Listing 7.5 arrfun1.h" and my own version "Listing 7.5b arrfun (my own).h"
    //------------------------------------------------------------------------------------------------------------------------
        
//    listing_7_5();
        
//    listing_7_5b();
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The Implications of Using Arrays as Arguments: check example here -> "Listing 7.6 arrfun2.h"
    //-----------------------------------------------------------------------------------------------------
    
    int arr_for_test[] = {1,2,3,4,5};
    
    std::cout << "Before calling function: " << '\n';
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr_for_test[i] << ' ';
    }
    std::cout << std::endl;
    
    std::cout << "After caling function: " << '\n';
    
    test_2(arr_for_test, 5);
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr_for_test[i] << ' ';
    }
    std::cout << std::endl;
    
    std::cout << sizeof arr_for_test << " = sizeof of the whole arr_for_test (in bytes)\n";
    
    std::cout << arr_for_test << " = arr_for_test.\n";
    
    std::cout << &arr_for_test[0] << " = arr_for_test.\n";
    
    std::cout << *arr_for_test << " = arr_for_test.\n";
    
    /*
     With code above we have proved even array is not passed by references through function - function changed the orginal array content where an ordinary variable, where function works with a copy.
     
     Because a function with an array name argument accesses the original array, not a copy, you can use a function call to assign values to array elements. 
     */
    
    
    listing_7_6();
    
    /*
     Regarding listing 7.6:
     
     Sizeof cookies is 32, whereas sizeof arr is only 4.That’s because sizeof cookies is the size of the whole array, whereas sizeof arr is the size of the pointer variable.
     */
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // More Array Function Examples:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Filling the Array:
    //-----------------------------------------------------------------------------------------------------
    
    /*
     Because a function with an array name argument accesses the original array, not a copy, you can use a function call to assign values to array elements.
     */
    
    int f_array[] = {};
    int arr_size = 10;
    
//    std::cout << fill_array(f_array, arr_size) << '\n';
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Showing the Array and Protecting It with 'const':
    //-----------------------------------------------------------------------------------------------------
    
    /*
     Building a function to display the array contents is simple.You pass the name of the array and the number of filled elements to the function, which then uses a loop to display each element. But there is another consideration—guaranteeing that the display function doesn’t alter the original array. Unless the purpose of a function is to alter data passed to it, you should safeguard it from doing so.That protection comes automatically with ordinary arguments because C++ passes them by value, and the function works with a copy. But functions that use an array work with the original.After all,that’s why thefill_array() function is able to do its job.To keep a function from accidentally altering the contents of an array argument, you can use the keyword const (discussed in Chapter 3,“Dealing with Data”) when you declare the formal argument:
     void show_array(const double ar[], int n);

     

     Here is the code for the show_array() function:
     */
    
    int arr_for_read_only[] = {1,2,3,4,5,6,7};
    
    read_only_array(arr_for_read_only, 7); // Be aware passing array does not have to be const...
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Modifying the Array:
    //-----------------------------------------------------------------------------------------------------
    
    /*
     Anytime you need to to modifying arra content through function pass arr without const:
     
     (If you need only display/show array the argument inn functionn should include 'const' to protect any changes )
     */
    
    // for example:  void revalue(double r, double ar[], int n)
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Putting the Pieces Together: check example here -> "Listing 7.7 arrfun3.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_7_7();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The Usual Array Function Idiom
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Function Using Array Ranges: check example here -> "Listing 7.8 arrfun4.h"
    //-----------------------------------------------------------------------------------------------------
    
    listing_7_8();
    
    // int myarrayexample[5] = {2, 4, 5, 6, 7};
    
    // displeymyarray(myarrayexample, myarrayexample + 5);
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Pointer and const
    //-----------------------------------------------------------------------------------------------------
    
    int age = 31;
    const int *ptr = &age;
    
    // *ptr += 1;           INVALID because pt points to a const int
    // std::cin >> *ptr     INVALID for the same reason
    
    // however !
    
    // *ptr = 21;           INVALID because pt points to a const int
    age = 21;            // VALID because age is not declared to be const
    
    
    
    std::cin.get();
    return 0;
}

void displeymyarray(const int *begin, const int *end)
{
    std::cout << "Here is our array: ";
    
    for(int i = 0; i < 5; i++)
    {
        std::cout << begin[i] << ' ';
    }
    
    std::cout << std::endl;
}

void cheerss(int n)
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

void say_hi()
{
    std::cout << "Hello World! :)\n";
}

int change_x(int& x)
{
    x = 1;
    
    return x;
}

void favorite_char_and_number(int x, char c = 'Q')
{
    std::cout << "The favorite char is " << c << " and the favorite number is " << x << '\n';
}

int test_2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] += 1;
    }
    
    return 0;
}

int fill_array(int arr[], int limit)
{
    double temp;
    int i;
    
    for (i = 0; i < limit; i++)
    {
        std::cout << "Enter value #" << i + 1 << ": ";
        std::cin >> temp;
        
        if (!std::cin) // bad input check
        {
            std::cin.clear();
            
            /*
             By repeatedly calling (in while loop) std::cin.get() and ignoring the returned characters until a newline character is found, we ensure that any remaining characters in the buffer are discarded. This clears out any invalid or unwanted input, so the buffer is empty and ready for fresh input.
             */
            
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input, input process terminated.\n";
            break;
        }
        else if(temp < 0)
            break;
        arr[i] = temp;
    }
    
    return i;
}

void read_only_array(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}
