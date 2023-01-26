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
#include <array>
#include <vector>
#include <limits> // for: std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


// Examples has been included in header files:
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
#include "Listing 5.15 dowhile.h"
#include "Listing 5.16 textin1.h"
#include "Listing 5.17 textin2.h"
#include "Listing 5.18 textin3.h"
#include "Listing 5.19 textin4.h"
#include "Listing 5.20 nested.h"

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
void Programming_exercises_10();

struct Car
{
    std::string make;
    int year;
};


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
    // Just a Moment—Building a Time-Delay Loop: check example here ->> "Listing 5.14 waiting.h"
    //-----------------------------------------------------------------------------------------------------------

    // listing_5_14();

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
    // The do while Loop: check example here ->> "Listing 5.15 dowhile.h"
    //-----------------------------------------------------------------------------------------------------------

    // listing_5_15();

                        // "infinity loop"
    int op2 = 0;

    for (; ; )          // sometimes called a "forever loop"
    {
        op2++;
        std::cout << "op2 = " << op2 << '\n';
        if (op2 >= 30)  // if statement and break (Chapter 6)
        {
            break;
        }
    }





    //-----------------------------------------------------------------------------------------------------------
    // The Range-Based for Loop (C++11):
    //-----------------------------------------------------------------------------------------------------------

    double princes[5] = { 4.99, 10.99, 6.87, 7.99, 8.49 };

    for (double x : princes)
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;

    /*
     To modify array values, you need a different syntax for the loop variable:
     */

    for (double &x : princes)
    {
        x = x * 0.80;   //20% off sale
        std::cout << x << ' ';
    }

    /*
     The range-based for loop also can be used with initialization lists:
     */
    for (int x : { 3, 5, 2, 8, 6 })
    {
        std::cout << x << ' ';
    }
    std::cout << std::endl;





    //-----------------------------------------------------------------------------------------------------------
    // Loops and Text Input:
    //-----------------------------------------------------------------------------------------------------------





    //-----------------------------------------------------------------------------------------------------------
    // Using Unadorned cin for Input: see example at "Listing 5.16 textin1.h"
    //-----------------------------------------------------------------------------------------------------------

    // "sentinel character" - see book to full explanation.

    // listing_5_16();





    //-----------------------------------------------------------------------------------------------------------
    // cin.get(char) to the Rescue: see example at "Listing 5.17 textin2.h"
    //-----------------------------------------------------------------------------------------------------------

     // listing_5_17();

    /*
     cin.get() is used for accessing character array. It includes white space characters. Generally, cin with an extraction operator (>>) terminates when whitespace is found. However, cin.get() reads a string with the whitespace.
     */


//    char name_and_surname[50];
//
//    std::cout << "[CHAR ARRAY] Enter your name and surname please: ";
//    std::cin >> name_and_surname;
//    std::cout << "[CHAR ARRAY] Hello " << name_and_surname << '\n';
//
//    std::cout << "[CHAR ARRAY] Now with cin.get()...\n";
//
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//    std::cout << "[CHAR ARRAY] Enter your name and surname please: ";
//    cin.get(name_and_surname, 50);
//    std::cout << "[CHAR ARRAY] Hello " << name_and_surname << '\n';
//
//    //and here is exaclly same code but with std::string...
//
//    std::string name_and_surname2;
//
//    std::cout << "[STD::STRING] Enter your name and surname please: ";
//    std::cin >> name_and_surname2;  // like this cin read onnly one work from input - until white space
//    std::cout << "[STD::STRING] Hello " << name_and_surname2 << '\n';
//
//    std::cout << "[STD::STRING] Now with std::getline()...\n";
//
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//    std::cout << "[STD::STRING] Enter your name and surname please: ";
//    std::getline(std::cin, name_and_surname2); // here is read whole line
//    std::cout << "[STD::STRING] Hello " << name_and_surname2 << '\n';





    //-----------------------------------------------------------------------------------------------------------
    // Which cin.get() Should You Use?:
    //-----------------------------------------------------------------------------------------------------------





    //-----------------------------------------------------------------------------------------------------------
    // The End-of-File Condition: see example at "Listing 5.18 textin3.h"
    //-----------------------------------------------------------------------------------------------------------

        // info only: (EOF) mean end-of-file.

    // listing_5_18();

        /*
         Here is sample output from the program in Listing 5.18:

         The green bird sings in the winter.<ENTER>
         The green bird sings in the winter.
         Yes, but the crow flies in the dawn.<ENTER>
         Yes, but the crow flies in the dawn.
         <CTRL>+<D>
         73 characters read
         */





    //-----------------------------------------------------------------------------------------------------------
    // EOF Ends Input:
    //-----------------------------------------------------------------------------------------------------------

        /*
         Remember that when a cin method detects the EOF, it sets a flag in the cin object, indi- cating the EOF condition. When this flag is set, cin does not read anymore input, and fur- ther calls to cin have no effect. For file input, this makes sense because you shouldn’t read past the end of a file. For keyboard input, however, you might use a simulated EOF to ter- minate a loop but then want to read more input later.The cin.clear() method clears the EOF flag and lets input proceed again. Chapter 17, “Input, Output, and Files,” dis- cusses this further. Keep in mind, however, that in some systems, typing Ctrl+Z effectively terminates both input and output beyond the powers of cin.clear() to restore them.
         */

    std::cin.clear();





    //-----------------------------------------------------------------------------------------------------------
    // Common Idioms for Character Input:
    //-----------------------------------------------------------------------------------------------------------

        /*
         The followinng is the essential design of a loop intennded to read text a character at a time until EOF:
         */

//    char ch1;
//
//    cin.get(ch1);
//
//    while (cin.fail() == false)
//    {
//        // some code....
//
//        cin.get(ch1);
//    }

        // <CTRL>+<D> to finish test EOF





    //-----------------------------------------------------------------------------------------------------------
    // Yet Another Version of cin.get(): see example "Listing 5.19 textin4.h"
    //-----------------------------------------------------------------------------------------------------------

    std::cout << "listing_5_19: \n";
    // listing_5_19();

        /*
         If you have been using cin.get() to freeze the screen until you can read it, that won’t work here because detecting the EOF turns off further attempts to read input.
         */


    // can use cin.clear(), as described in Chapter 17, to reset the input stream.

    std::cin.clear();





    //-----------------------------------------------------------------------------------------------------------
    // Nested Loops and Two-Dimensional Arrays:
    //-----------------------------------------------------------------------------------------------------------

        // '\t' in c++ is just TAB key





    //-----------------------------------------------------------------------------------------------------------
    // Initializing a Two-Dimensional Array:
    //-----------------------------------------------------------------------------------------------------------





    //-----------------------------------------------------------------------------------------------------------
    // Using a Two-Dimensional Array: see example "Listing 5.20 nested.h"
    //-----------------------------------------------------------------------------------------------------------

    // listinng_5_20();





    //-----------------------------------------------------------------------------------------------------------
    // Summary:
    //-----------------------------------------------------------------------------------------------------------





    //-----------------------------------------------------------------------------------------------------
    // Chapter Review:
    //-----------------------------------------------------------------------------------------------------
    /*
     1. What’s the difference between an entry-condition loop and an exit-condition loop? Which kind is each of the C++ loops?
        - for-loop and while-loop is entry-condition loop and is check condision before body of loop is executing where do-while-loop is exit condition loop which mean body of loop is execution at least one time end then condition is check.

     2. What would the following code fragment print if it were part of a valid program?
     int i;
     for (i = 0; i < 5; i++)
     cout << i; cout << endl;
        - 01234
        - new line

     3. What would the following code fragment print if it were part of a valid program?
     int j;
     for (j = 0; j < 11; j = j + 3)
     cout << j;
     cout << endl << j << endl;
        - 0369
        - newline 12
        - new line

     4. What would the following code fragment print if it were part of a valid program?
     int j = 5;
     while(++j < 9)
     cout << j++ << endl;
        - 6
        - 8

     5. What would the following code fragment print if it were part of a valid program?

     int k = 8;
     do
     {
        cout <<" k = " << k << endl;
     }
     while (k++ < 5);

        - k = 8
        - new line

     6. Write a for loop that prints the values 1 2 4 8 16 32 64 by increasing the value of a counting variable by a factor of two in each cycle.

        - for(int i = 1; i < 65; i *= 2)
            std::cout <<  i << ' ';
        std::cout << std::endl;

     7. How do you make a loop body include more than one statement?

        - for(;;)
          {
            // more then one statement code...
          }

     8. Is the following statement valid? If not, why not? If so, what does it do?

     int x = (1,024);

        Yes, is valid and x is = 024 which is octal for 20 so x = 20
        Is equivalent to (x = 1),024; which means the commas have no effect.
        When used with parentheses it returns the last value in the "comma delimited list"
        This is all due to operator precedence.


     What about the following?
     int y;
     y = 1,024;

        - here is otherway y = 1 and the value after coma is ignor.

     9. How does cin>>ch differ from cin.get(ch) and ch=cin.get() in how it views input?

        - std::cin >> ch - " If ch is a type char variable, the following statement reads the next input character into ch
                                however, it skips over spaces, newlines, and tabs."
        - cin.get(ch) - "reads the next input character, regardless of its value, and places it in ch"
        - ch=cin.get() - "The member function call cin.get() returns the next input character, including
                                spaces, newlines, and tabs"
     */
    
    // Programming_exercises_1();
    // Programming_exercises_2();
    // Programming_exercises_3();
    // Programming_exercises_4()
    // Programming_exercises_5();
    // Programming_exercises_6();
    // Programming_exercises_7();
    // Programming_exercises_8();
    // Programming_exercises_9();
    Programming_exercises_10();
    
    std::cin.get();
    return 0;
}

void Programming_exercises_1()
{
    /*
     Write a program that requests the user to enter two integers.The program should then calculate and report the sum of all the integers between and including the two integers. At this point, assume that the smaller integer is entered first. For example, if the user enters 2 and 9, the program should report that the sum of all the integers from 2 through 9 is 44.
     */
    
    std::cout << "Yo enter first integers please: ";
    int x;
    std::cin >> x;
    std::cout << "Yo enter second integers please: ";
    int y;
    std::cin >> y;
    
    int answer = x; // 5
    
    for(int i = x; i != y; i++)
    {
        answer += i + 1;
    }
    
    std::cout << "The sum of all the integers = " << answer << '\n';
}

void Programming_exercises_2()
{
    /*
     Redo Listing 5.4 using a type array object instead of a built-in array and type long double instead of long long. Find the value of 100!
     */
    
    const int ArSize = 100;
    
    std::array<long double, ArSize> factorials;
    
    factorials[1] = factorials[0] = 1LL;
    
    for (int i = 2; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i-1];
    }
    
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
}

void Programming_exercises_3()
{
    /*
     Write a program that asks the user to type in numbers.After each entry,the pro- gram should report the cumulative sum of the entries to date.The program should terminate when the user enters 0.
     */
    
    
    int x;
    
    int answer = 0;
    int rem = 0;
    
    while (x != 0)
    {
        std::cout << "Yo enter an integer please: ";
        
        std::cin >> x;
        
        rem = x;
        
        answer = answer + rem;
        
        ++rem;
        
        std::cout << "The sum of all the integers = " << answer << '\n';
    }
}

void Programming_exercises_4()
{
    /*
     Daphne invests $100 at 10% simple interest.That is, every year, the investment earns 10% of the original investment, or $10 each and every year:
     interest = 0.10 × original balance
     
     
     At the same time, Cleo invests $100 at 5% compound interest.That is, interest is 5%
     of the current balance, including previous additions of interest: interest = 0.05 × current balance
     Cleo earns 5% of $100 the first year, giving her $105.The next year she earns 5% of $105, or $5.25, and so on.
     
     Write a program that finds how many years it takes for the value of Cleo’s investment to exceed the value of Daphne’s investment and then displays the value of both investments at that time.
     */
    
    std::cout << "Enter you invest: ";
    double invest;
    int years = 1;
    std::cin >> invest;
    double dephnes_money = invest;
    double cleos_money = invest;


    while (cleos_money <= dephnes_money)
    {
        dephnes_money = (0.10 * invest) + dephnes_money;
        cleos_money = (0.05 * cleos_money) + cleos_money;

        std::cout << years << " year current balance of Dephne's account = " << dephnes_money << '\n';
        std::cout << years << " year current balance of Cleo's account = " << cleos_money << '\n';
        std::cout << std::endl;

        years++;
    }

    std::cout << "Cleo's investment need " << years - 1 << " years to execeed the value of Daphne's invesment.\n";
}

void Programming_exercises_5()
{
    /*
     You sell the book C++ for Fools.Write a program that has you enter a year’s worth of monthly sales (in terms of number of books, not of money).The program should use a loop to prompt you by month, using an array of char * (or an array of string objects, if you prefer) initialized to the month strings and storing the input data in an array of int.Then, the program should find the sum of the array con- tents and report the total sales for the year.
     */
    
    const int month = 12;
    
    std::string months[month] = { "January", "February", "March", "April", "May", "June", "July", "August",
        "September", "October", "November", "December" };
    
    int data[month];
    int sum;
    
    for(int i = 0; i < month ; i++)
    {
        std::cout << "Enter a year’s worth of monthly sales (in books) for month " << months[i] << ": ";
        std::cin >> data[i];
        sum += data[i];
    }
    
    std::cout << "The total sales for the year = " << sum << '\n';
}

void Programming_exercises_6()
{
        /*
         Do Programming Exercise 5 but use a two-dimensional array to store input for 3 years of monthly sales. Report the total sales for each individual year and for the combined years.
         */
    
    const int year = 3;
    const int month = 12;
    
    std::string months[month] = { "January", "February", "March", "April", "May", "June", "July", "August",
        "September", "October", "November", "December" };
    
    std::string st_nd_th[year] = { "st", "nd", "th"};
    
    int data[year][month];
    int sum[year] = {};
    int total = 0;
    
    for(int i = 0; i < year ; i++)
    {
        for (int t = 0; t < month ; t++)
        {
            std::cout << "Enter a year’s worth of monthly sales (in books) for month " << months[t] << " in " << i+1 <<                    st_nd_th[i] << " year: ";
            
            std::cin >> data[i][t];
            sum[i] += data[i][t];
        }
        
        total += sum[i];
        std::cout << "The total sales for " << i+1 << st_nd_th[i] << " year = " << sum[i] << "$.\n";
    }
    
    std::cout << "The total sales for " << year << " years = " << total << '\n';
}

void Programming_exercises_7()
{
    /*
     Design a structure called car that holds the following information about an auto- mobile: its make, as a string in a character array or in a string object, and the year it was built, as an integer.Write a program that asks the user how many cars to cata- log.The program should then use new to create a dynamic array of that many car structures. Next, it should prompt the user to input the make (which might consist of more than one word) and year information for each structure. Note that this requires some care because it alternates reading strings with numeric data (see Chapter 4). Finally, it should display the contents of each structure. A sample run should look something like the following:
         How many cars do you wish to catalog? 2
         Car #1:
         Please enter the make: Hudson Hornet Please enter the year made: 1952 Car #2:
         Please enter the make: Kaiser Please enter the year made: 1951 Here is your collection:
         1952 Hudson Hornet 1951 Kaiser
     */
    
    int x;
    Car* how_many = new Car[x];
    
    std::cout << "How many cars do you wish to catalog? ";
    (std::cin >> x).get();  // READ MORE about this line...
    //std::cin >> x;
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    for (int i = 0; i != x; i++)
    {
        std::cout << "Car #" << i+1 << ":\n";
        std::cout << "Please enter the make: ";
        std::getline(std::cin, how_many[i].make);
        std::cout << "Please enter the year made: ";
        std::cin >> how_many[i].year;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
    std::cout << "Here is your collection:\n";
    
    for (int i = 0; i != x; i++)
    {
        std::cout << how_many[i].year << ' ' << how_many[i].make << '\n';
    }
}

void Programming_exercises_8()
{
    /*
     Write a program that uses an array of char and a loop to read one word at a time until the word done is entered.The program should then report the number of words entered (not counting done). A sample run could look like this:
     Enter words (to stop, type the word done):
     
     anteater birthday category dumpster envy finagle geometry done for sure You entered a total of 7 words.
     
     You should include the cstring header file and use the strcmp() function to make the comparison test.
     
     */
    
    char words[50];
    char done[] = "done";
    int count = 0;
    
    std::cout << "Enter words (to stop, type the word done): ";
    
    do
    {
        std::cin >> words;
        count++;
        
    } while (strcmp(done, words) != 0);
    
    std::cout << "You entered a total of " << count-1 << " words.\n";
}
    
void Programming_exercises_9()
{
        /*
         Write a program that matches the description of the program in Programming Exercise 8, but use a string class object instead of an array. Include the string header file and use a relational operator to make the comparison test.
         */
    
    std::string words;
    int count = 0;
    
    std::cout << "Enter words (to stop, type the word done): ";
    
    do
    {
        std::cin >> words;
        count++;
        
    } while (words != "done");
    
    std::cout << "You entered a total of " << count-1 << " words.\n";
}

void Programming_exercises_10()
{
    /*
     Write a program using nested loops that asks the user to enter a value for the number of rows to display. It should then display that many rows of asterisks, with one asterisk in the first row, two in the second row, and so on. For each row, the asterisks are preceded by the number of periods needed to make all the rows display a total number of characters equal to the number of rows.A sample run would look like this:
     
     Enter number of rows: 5
     
     ....*
     ...**
     ..***
     .****
     *****
     
     */
    
    const char period = '.';
    const char asterisk = '*';
    int nr;
    
    std::cout << "Enter number of rows: ";
    std::cin >> nr;
    
    for (int i = 1; i < nr; i++)
    {
        for (int t = nr; t > 1; t--)
        {
            std::cout << period;
        }
        
        for (int o = 1; o != nr; o++)
        {
            std::cout << asterisk;
        }
        
        std::cout << std::endl;
    }
}
