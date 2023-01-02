//
//  main.cpp -- S.Prata C++ Primer Plus 6th ed.
//  Chapter 5 Loops and Relational Expressions (Xcode)
//
//  Created by Mateusz Kacperski on 10/12/2022.
//

#include <iostream>
#include <thread>
#include <string>
#include <cstring>

// Examples include in header files:
#include "Listing 5.1 forloop.h"
#include "Listing 5.2 num_test.h"
#include "Listing 5.3 express.h"
#include "Listing 5.4 formore.h"
#include "Listing 5.5 bigstep.h"
#include "Listing 5.6 forstr1.h"
#include "Listing 5.7 plus_one.h"
#include "Listing 5.8 block.h"
#include "Listing 5.9 forstr2.h"
#include "Listing 5.10 equal.h"
#include "Listing 5.11 compstr1.h"
#include "Listing 5.12 compstr2.h"
#include "Listing 5.13 while.h"
#include "Listing 5.14 waiting.h"

// function prototypes:


int main()
{
    //-----------------------------------------------------------------------------------------------------
    // Introducing for Loops: check example here -> "Listing 5.1 forloop.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_5_1();
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Parts of a 'for Loop': check example here -> "Listing 5.2 num_test.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_5_2();
        
        //TIP:
        /*
         Common C++ style is to place a space between for and the following parenthesis and to omit space between a function name and the following parenthesis:
            
         for (i = 6; i < 10; i++) smart_function(i);
         */
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Expressions and Statements: check example here -> "Listing 5.3 express.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_5_3();
    
        //NOTE:
        /*
         A c++ expression is a value or a combination of values annd operators, and every c++ expression has a value
         */
    
    // an expression example: age = 100
    // a statement example: age = 100 or int toad
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Nonexpressions and Statements:
    //-----------------------------------------------------------------------------------------------------
    
    // Nonexpression mean it has no value and you can’t assign it.
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Bending the Rules:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Back to the for Loop: check example here -> "Listing 5.4 formore.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_5_4();
        
        // Program note:
        
    
    
    //-----------------------------------------------------------------------------------------------------
    // Changing the Step Size: check example here ->> "Listing 5.5 bitstep.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_5_5();
    
        // "This example illustrates the use of using declarations instead of a using directive."
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Inside Strings with the for Loop: check example here ->> "Listing 5.6 forstr1.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_5_6();

    
    
    //-----------------------------------------------------------------------------------------------------
    // The Increment (++) and Decrement (--) Operators: check example here ->> "Listing 5.7 plus_one.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_5_7();
    
    int x = 5;
    int y = ++x; // change x, then assing to y
                 // x = 6, y = 6
    
    int z = 5;
    int t = z++; // assing to t, then change z
                 // z = 6, t = 5
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Side Effects and Sequence Points:
    //-----------------------------------------------------------------------------------------------------
    
    /*
     What’s a full expression? It’s an expression that’s not a subexpression of a larger expres- sion.
     */
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Prefixing Versus Postfixing:
    //-----------------------------------------------------------------------------------------------------
    
    	
    
    //-----------------------------------------------------------------------------------------------------
    // The Increment/Decrement Operators and Pointers:
    //-----------------------------------------------------------------------------------------------------
    
    /*
     You can use increment operators with pointers as well as with basic variables. Recall that adding an increment operator to a pointer increases its value by the number of bytes in the type it points to.The same rule holds for incrementing and decrementing pointers:
     */
    
    double arr[5] = { 21.1, 32.8, 23.4, 45.2, 37.4 };
    double *ptr_arr = arr; // pt points to arr[0], i.e. to 21.1
    ++ptr_arr;             // pt points to arr[1], i.e. to 32.8
    double x_arr = *++ptr_arr; // increment pointer, take the value; i.e., arr[2], or 23.4
    double y_arr = ++*ptr_arr; // increment the pointed to value; i.e., change 23.4 to 24.4
    
    // Next, consider this combination:
    std::cout << "arr[0] = " << *ptr_arr << '\n';
    (*ptr_arr)++; // increment pointed-to value
    std::cout << "arr[0] = " << *ptr_arr << '\n';
    
    x_arr = *ptr_arr++; // dereference original location, then increment pointer
    
        //Note:
            /*
             Incrementing and decrementing pointers follow pointer arithmetic rules. Thus, if pt points to the first member of an array, ++pt changes pt so that it points to the second member.
             */
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Combination Assignment Operators:
    //-----------------------------------------------------------------------------------------------------
    
    int window = 5;
    double glass = 7;
    
    window += glass; // is equivalent to windown = window + glass
    
    int *pa = new int[10];  // pa points to pa[0]
    pa[4] = 12;
    pa[4] += 6;             // pa[4] set to 18 so is same as pa[4] = pa[4] + 6
    *(pa + 4) += 7;         // same as pa[4] += 7 -- pa[4] set to 25
    
    std::cout << *(pa + 4) << '\n';
    
    pa += 2;                // ok, pa points to the former pa[2]
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Compound Statements, or Blocks: check example here ->> "Listing 5.8 Listing 5.8 block.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_5_8();
    
    int thursday = 22;                                      // original 'thursday'
    
    {                                                       // block starts
        std::cout << "Thursday: " << thursday << '\n';      // use original 'thursday'
        int thursday = 23;                                  // new 'thursday'
        std::cout << "Thursday: " << thursday << '\n';      // use new 'thursday'
    }                                                       // block ends
    
    std::cout << "Thursday: " << thursday << '\n';          // use original 'thursday' againn
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // More Syntax Tricks—The Comma Operator: check example here ->> "Listing 5.9 forstr2.h"
    //-----------------------------------------------------------------------------------------------------
    
    int i = 2;
    int j = 4;
    
    ++i, --j;   // two expressions count as one for syntax purposes
    
    double o, p; // comma is a separator here, not an operator
    
    // listing_5_9();
    
        // Program Notes:
            

    
    //-----------------------------------------------------------------------------------------------------
    // Comma Operator Tidbits:
    //-----------------------------------------------------------------------------------------------------
        
        /*
         C++ guarantees that the first expression is evaluated before the second:
         */
        
    int w1;
    int g1;
    
    w1 = 20, g1 = 2 * w1; // w1 set to 20, then g1 set to 40
    
        /*
         The comma operator has the lowest precedence of any operator. For example, this statement:
         */
    int cata;
//    cata = 17, 240;
//
//    //gets read as this:
//
//    (cata = 18), 240; // That is, cats is set to 18, and 240 does nothing.
//
//    cata = (17,240); // But because parentheses have high precedence, the following results in cats being set to 240, the value              // of the expression on the right of the comma
//
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Relational Expressions:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    //-----------------------------------------------------------------------------------------------------------
    // Assignment, Comparison, and a Mistake You’ll Probably Make: check example here ->> "Listing 5.10 equal.h"
    //-----------------------------------------------------------------------------------------------------------
    
     // listing_5_10();
    
            /*
             Caution:
             
             Don’t use = to compare for equality; use ==.
             */
    
    
    
    //-----------------------------------------------------------------------------------------------------------
    // Comparing C-Style Strings: check example here ->> "Listing 5.11 compstr1.h"
    //-----------------------------------------------------------------------------------------------------------
    
    char string1[30] = "Sophie";
    char string2[40] = "Ania";
    char string3[50] = "Sophie";
	
    if (strcmp(string1, string3))
        std::cout << "char string is not the same...\n";
    else
        std::cout << "char string is the same...\n";
    
        /*
         Comparing std::string objects:
         */
        std::string str1 = "Sophie";
        std::string str2 = "Ania";
        std::string str3 = "Sophie";
    
        if (str1.compare(str2))
            std::cout << "std::string object is not same...\n";
        else
            std::cout << "std::string object is same...\n";
    
    
    /*
     By the way, although you can’t use relational operators to compare strings, you can use them to compare characters because characters are actually integer types.Therefore, the following is valid code, at least for the ASCII and Unicode character sets, for displaying the characters of the alphabet:
     */
    
    for(char ch = 'a'; ch <= 'z'; ch++)
        std::cout << ch << ' ';
    std::cout << '\n';

//    listing_5_11();
    
        //Program Notes:
    
    //    if_is_equality();

    
    
    
        
    //-----------------------------------------------------------------------------------------------------------
    // Comparing string Class Strings: check example here ->> "Listing 5.12 compstr2.h"
    //-----------------------------------------------------------------------------------------------------------
    
    // listing_5_12();
    
        // Program Notes:
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------------
    // The while Loop: check example here ->> "Listing 5.13 while.h"
    //-----------------------------------------------------------------------------------------------------------
    
    // listing_5_13();
    
        // Program Notes:
            
            //infinity_loop();

    
    
    
    
    //-----------------------------------------------------------------------------------------------------------
    // for Versus while:
    //-----------------------------------------------------------------------------------------------------------
    
    //    for ( ; ; ) body this loop run forever
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------------
    // Just a Moment—Building a Time-Delay Loop: check example here ->> "Listing 5.14 waiting"
    //-----------------------------------------------------------------------------------------------------------
    
    // Álisting_5_14();
    
        /*
         Type Aliases:
         
         C++ has two ways to establish a new name as an alias for a type. One is to use the pre- processor:
         
            #define BYTE char              // preprocessor replaces BYTE with char
         
         The second method is to use the C++ (and C) keyword typedef to create an alias:
         
            typedef char byte;             // makes byte an alias for char
            typedef char * byte_pointer;   // pointer to char type
         
         */
    
    typedef int liczba;
    liczba licznik = 23;
    
    std::cout << licznik + 3 << '\n';
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------------
    // The do while Loop:
    //-----------------------------------------------------------------------------------------------------------
    
    
    
    
    
    
    std::cin.get();
    return 0;
}


