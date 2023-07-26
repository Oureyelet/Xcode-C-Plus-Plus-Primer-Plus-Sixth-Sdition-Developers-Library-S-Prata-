//
//  main.cpp -- C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7 Functions C++'s Programming Modules
//
//  Created by Mateusz Kacperski on 8/05/2023.



#include <iostream>
#include <string>

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
#include "Listing 7.9 strgfun.h"

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
int display_const_array(const int arr[], int n);
int sum(int data[][4], int rows); // int sum(int (*data)[4], int rows) is exacly same meaning

 
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
    
    const float g_earth = 9.8;
    const float* g_earth_ptr = &g_earth;    // VALID
    
    const float g_moon = 1.63;
    // float* g_moon_ptr = &g_moon;         // INVALID because C++ prohibits you from assigning the adress of a const to a mom-const pointer.
    
    const int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    display_const_array(months, 12);
    
    
    // Anonther example...
    
    int level = 31;
    const int* f_ptr= &level;
    
    std::cout << &f_ptr << '\n';
    std::cout << f_ptr << '\n';
    
    /*
     Above const in the second declaration only prevents you from channging the value to which f_ptr points, which is 31.
     
     // *f_ptr += 1; // INVALID.
     
     It doeasn't prevennt you from changing the value of pt itself.
     This is, you can assign a new address to f_pre:
     */
    
    int sex = 1;
    f_ptr = &sex;   // okay to point to another  location.
    
    /*
     There is a way to change the value to which pointer pointing to:
     */
    
    int sloth = 3;
    const int* sloth_ptr = &sloth;  // a pointer to const int
    int* const finger = &sloth;     // a const pointer to int
    
    /*
     Note that the last declaration has repositioned the keyword const.This form of decla- ration constrains finger to point only to sloth. However, it allows you to use finger to alter the value of sloth.The middle declaration does not allow you to use ps to alter the value of sloth, but it permits you to have ps point to another location
     */
    
    // If you like, you can declare a const pointer to a const object:
    
    double light_in_the_world = 7.7;
    const double* const stick = &light_in_the_world;
    
    /*
     Here stick can point only to trouble, and stick cannot be used to change the value of trouble. In short, both stick and *stick are const.
     */
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Function and Two-Dimensional Array
    //-----------------------------------------------------------------------------------------------------
    
    int data[3][4] = {{1,2,3,4}, {9,8,7,6}, {2,4,6,8}};
    int total = sum(data, 3);
    std::cout << "Total from Two-Dimensional Array = " << total << '\n';
    
    /*
     Dereferencing a pointer in C++ means accessing the value stored at the memory address pointed to by the pointer. Pointers are variables that store memory addresses, and by dereferencing them, you can retrieve the value stored in the memory location to which they point.
     */
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Functions and C-Style Strings
    //-----------------------------------------------------------------------------------------------------
    
    const char c_style_string[] = "I am C-Style string";
    std::string cpp_string = "I am string from C++ Standard Library strings (std::string)";
    
    /*
     Recall that a C-style string consists of a series of characters terminated by the null charac- ter. Much of what you’ve learned about designing array functions applies to string func- tions, too.
     */
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Functions with C-Style String Arguments
    //-----------------------------------------------------------------------------------------------------
    
    Listing_7_9();
    
    /*
     C-style string and String Literal is basicly the same think but string litreal usually is as a const pointer:
     
     const char strCStyle[] = "Hello"; // C-style string
     
     const char* strLiteral = "Hello"; // String literal
     */
    
    char ghost[15] = "galloping";
    const char* str = "galumphing";
    
    std::size_t n1 = strlen(ghost);         // ghost is &ghost[0]
    std::size_t n2 = strlen(str);           // const pointer to char
    std::size_t n3 = strlen("gamboling");   // address of string
    
    /*
     Informally, you can say that you’re passing a string as an argument, but you’re really pass- ing the address of the first character in the string.
     */
    
    
    
    
    
    std::cin.get();
    return 0;
}

int sum(int data[][4], int rows)
{
    int total = 0;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            total += data[i][j];
        }
    }
    
    return total;
}

//function with const array argument can be use only with const array.
int display_const_array(const int arr[], int n)
{
    for (int i = 0; i < 12; i++)
    {
        std::cout << arr[i] << ' ';
    }
    
    std::cout << std::endl;
    
    return n;
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
