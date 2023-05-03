//
//  main.cpp -- S.Prata C++ Primer Plus 6th ed.
//  Chapter 6 Branching Statements and Logical Operators
//
//  Created by Mateusz Kacperski on 28/01/2023.
//

#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <array>

// Examples has been included in header files:
#include "Listing 6.1 if.h"
#include "Listing 6.2 if else.h"
#include "Listing 6.3 if else if.h"
#include "Listing 6.4 or.h"
#include "Listing 6.5 end.h"
#include "Listing 6.6 more end.h"
#include "Listing 6.7 not.h"
#include "Listing 6.8 cctypes.h"
#include "Listing 6.9 condit.h"
#include "Listing 6.10 switch.h"
#include "Listing 6.11 enum.h"
#include "Listing 6.12 jump.h"
#include "Listing 6.13 cinfish.h"
#include "Listing 6.14 cingolf.h"
#include "Listing 6.15 outfile.h"
#include "Listing 6.16 sumafile.h"

// Function prototypes:
bool is_alphabetick(char);
void show_menu_exer_3();   // function menu for exercises 3
void show_menu_exer_4();   // function menu for exercises 4
bool begins_with_vowel(const std::string&);     // function menu for exercises 7
 
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
     - The if statement
     - The if else statement
     - Logical operators: &&, ||, and !
     - The cctype library of character functions n The conditional operator:?:
     - The switch statement
     - The continue and break statements
     - Number-reading loops
     - Basic file input/output
     */
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The if Statement: check example here -> "Listing 6.1 if.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_6_1();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The if else Statement: check example here -> "Listing 6.2 if else.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_6_2();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Formatting 'if else' Statements:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The 'if else if else' Construction: check example here -> "Listing 6.3 if else if.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_6_3();
   
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Logical Expression:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The Logical OR Operator ||: check example here -> "Listing 6.4 or.h"
    //-----------------------------------------------------------------------------------------------------
    
    /*
     This operator combines two expressions into one.
     If either or both of the original expressions is true, or nonzero, the resulting expression has the value true.
     Otherwise, the expression has the value false.
     
     5 == 5 || 5 == 9   // true because first expression is true
     5 > 3 || 5 > 10    // true because first expression is true
     5 > 8 || 5 < 10    // true because second expression is true
     5 < 8 || 5 > 2     // true because both expressions are true
     5 > 8 || 5 < 2     // false because both expressions are false
     */
    
    // listing_6_4();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The Logical AND Operator &&: check example here -> "Listing 6.5 end.h"
    //-----------------------------------------------------------------------------------------------------
    
    /*
     The logical AND operator, written &&, also combines two expressions into one.
     Resulting expression has the value true only if both of the original expressions are true.
     
     5 == 5 && 4 == 4   // true because both expressions are true
     5 == 3 && 4 == 4   // false because first expression is false
     5 > 3 && 5 > 10    // false because second expression is false
     5 > 8 && 5 < 10    // false because first expression is false
     5 < 8 && 5 > 2     // true because both expressions are true
     5 > 8 && 5 < 2     // false because both expressions are false
     */
    
    // listing_6_5();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Setting Up Ranges with &&: check example here -> "Listing 6.6 more end.h"
    //-----------------------------------------------------------------------------------------------------
    
    // listing_6_6();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The Logical NOT Operator !: check example here -> "Listing 6.7 not.h"
    //-----------------------------------------------------------------------------------------------------
    
    std::cout << INT_MAX << '\n';   // to check what is the max int in current system -- INT_MIN to check minimum int
    
    // listing_6_7();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Logical Operator Facts:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Alternative Representations:
    //-----------------------------------------------------------------------------------------------------
        
    /*
     
     Table 6.3 Logical Operators: Alternative Representations
     Operator                       Alternative Representation
     &&                             and                         -- both need to be true for result true
     ||                             or                          -- If either or both is true the resulting expression has the value true.
     !                              not                         --
     
     */

    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The cctype Library of Character Functions: check example here -> "Listing 6.8 cctypes.h"
    //-----------------------------------------------------------------------------------------------------
       
//    char x;
//
//    std::cout << "Enter alphabetick character: ";
//    std::cin >> x;
//
//    while( !is_alphabetick(x))  // check if char is alphabetic and then i tell u which numer in alphabet it is
//    {
//        std::cout << "No! no! no! Try again... ";
//        std::cin >> x;
//    }
//
//    // listing_6_8();
//
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//    // Change lover case char to upper
//    char name;
//    std::cout << "Enter char (if will be lover case i will chang it to upper): ";
//    std::cin.get(name);
//    if(islower(name))
//    {
//        char o = toupper(name);
//        std::cout << o << '\n';
//    }

    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The ?: Operator: check example here -> "Listing 6.9 condit.h"
    //-----------------------------------------------------------------------------------------------------
       
    /*
     C++ has an operator that can often be used instead of the if else statement.This opera- tor is called the conditional operator,
     written ?:, and, for you trivia buffs, it is the only C++ operator that requires three operands.The general form looks like this:
     
     expression1 ? expression2 : expression3
     */
    
    // listing_6_9();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // The switch Statement: check example here -> "Listing 6.10 switch.h"
    //-----------------------------------------------------------------------------------------------------
    
    /*
     Each switch case label must be a single value. Also that value must be an integer (which includes char).
     */
    
    // listing_6_10();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Using Enumerators as Labels: check example here -> "Listing 6.11
        
        
        
        
        
        
    //-----------------------------------------------------------------------------------------------------
    
     // listing_6_11();
    
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Switch and if else:
    //-----------------------------------------------------------------------------------------------------
    
    /*
     "If you can use either an if else if sequence or a switch statement, the usual practice is to use switch if you have three or more alternatives."
     */
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    //  The break and continue Statements: check example here -> "Listing 6.12 jump.h"
    //-----------------------------------------------------------------------------------------------------
    
    /*
    "The break and continue statements enable a program to skip over parts of the code.You can use the break statement in a switch statement and in any of the loops. It causes pro- gram execution to pass to the next statement following the switch or the loop.The continue statement is used in loops and causes a program to skip the rest of the body of the loop and then start a new loop cycle (see Figure 6.4)."
     */
    
//    listing_6_12();
    
//    std::string test = "H]llo Worl[d";
//
//    int index = test.find('[');
//
//    if(test.find('[') != std::string::npos)
//        std::cout << "true" << index << '\n';
//    else
//        std::cout << "false" << '\n';
//
    
    /*
     C++, like C, also has a goto statement. A statement like this means to jump to the location bearing the paris: label:
     */
    
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//    std::cout << "Enter char (I'll check is that was 'P')" << '\n';
//
//    char monday;
//    std::cin >> monday;
//    if(monday == 'P')
//        goto tuesday;
//
//    std::cout << "Tha's mean your char did not inclue P." << '\n';
//    tuesday: std::cout << "but eventually your char inclue :P" << '\n';
    
    /*
     In most circumstances (some would say in all circumstances), using goto is a bad hack, and you should use structured controls, such as if else, switch, continue, and the like, to control program flow.
     */
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    //  Number-Reading Loops (check example here -> "Listing 6.13 cinfish.h" and "Listing 6.14 cingolf.h")
    //-----------------------------------------------------------------------------------------------------
    
//    std::cout << "New start after Easter - Jezus Christ is my Lord" << '\n';
//
//    std::cout << "Here we have int 'n' try to enter a word instead of number... \n";
//    int n;
//    std::cin >> n;
//
//    std::cout << n << '\n';
    
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
//    std::cout << "Listing 6_13:\n";
//    listing_6_13();
    
//    std::cout << "Listing 6_14:\n";
//    listing_6_14();
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    //  Simple file Input/Output (collectively termed "console I/O", "file I/O")
    //-----------------------------------------------------------------------------------------------------
    
    /*
     We'll look at simple text file I/O now
     */
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    //  Text I/O and Text Files
    //-----------------------------------------------------------------------------------------------------
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    //  Writing to a Text File (check example here -> "Listing 6.15 outfile.h"
    //-----------------------------------------------------------------------------------------------------
    
//    listing_6_15();
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    //  Reading from a Text File (check example here -> "Listing 6.15 outfile.h"
    //-----------------------------------------------------------------------------------------------------
    
    
//    std::ifstream fin; // create object for input - read text from file
//
//    fin.open("trial 1 hre");
//
//    if(!fin.is_open())
//        std::cout << "Error the file not existed.\n";
//    char from_file[50];
//
//    fin.getline(from_file, 50);
//    std::cout << from_file << '\n';
    
   // listing_6_16();

    
    
    
    //-----------------------------------------------------------------------------------------------------------
    // Summary:
    //-----------------------------------------------------------------------------------------------------------
    
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Chapter Review:
    //-----------------------------------------------------------------------------------------------------
    /*
     1. Consider the following two code fragments for counting spaces and newlines:
     
     // Version 1
     while (cin.get(ch)) // quit on eof
     {
        if (ch == ' ')
            spaces++;
        if (ch == '\n')
            newlines++;
     }
     
     // Version 2
     while (cin.get(ch)) // quit on eof
     {
        if (ch == ' ')
            spaces++;
        else if (ch == '\n')
            newlines++;
     }
     
     What advantages, if any, does the second form have over the first?
     
     - MY ANSWER: Secound one has non advantages at all becouse when if condition is executed if statement will fount space then newline interation inside next condition is omited where on other hand in first version we are able to count spaces and newlines independently.
        - WRONG ANSWER. Correct one is: "Both versions give the same answers, but the if else version is more efficient. Consider what happens, for example, when ch is a space.Version 1, after increment- ing spaces, tests whether the character is a newline.This wastes time because the program has already established that ch is a space and hence could not be a new- line.Version 2, in the same situation, skips the newline test."
            - My answer was wrong becouse i forget that ch char catch every single individual character instead of full line as string litteral did.
     
     2. In Listing 6.2, what is the effect of replacing ++ch with ch+1?
        - Instead of displaing 2 symbols before expected charaster when we change ++ch with ch+1 we will display numbers but i dont know why.
                - Correct answer: "Both ++ch and ch + 1 have the same numerical value. But ++ch is type char and prints as a character, while ch + 1, because it adds a char to an int, is type int and prints as a number."
     
     3. Carefully consider the following program:
     
     #include <iostream>
     
     int main()
     {
        char ch;
        int ct1;
        int ct2;
     
        ct1 = ct2 = 0;
     
        while ((ch = std::cin.get()) != '$')
        {
            std::cout << ch;
            ct1++;
     
            if (ch = '$')
                ct2++;
     
            std::cout << ch;
        }
        
        std::cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
     
        return 0;
     }
     
     Suppose you provide the following input, pressing the Enter key at the end of each line:
     Hi!
     Send $10 or $20 now!
     What is the output? (Recall that input is buffered.)
        - The output from that input will be:
     Hi !
     ct1 = 2 , ct2 = 3
            - WRONG ANSWER correct one is:
     "Hi!
     H$i$!$
     $Send $10 or $20 now! S$e$n$d$
     ct1 = 9, ct2 = 9"
        -Each character is converted to the $ character before being printed the second time. Also the value of the expression ch = $ is the code for the $ character, hence nonzero, hence true; so ct2 is incremented each time.
     
     
     4. Construct logical expressions to represent the following conditions:
     
        a. weight is greater than or equal to 115 but less than 125.
            - (125 > weight >= 115)
                - WRONG ANSWER: weight >= 115 && weight < 125
     
        b. ch is q or Q.
            - (ch == q || ch == Q)
     
        c. x is even but is not 26.
            - ((x % 2 == 0) &&  x != 26)
     
        d. x is even but is not a multiple of 26.
            - ((x % 2 == 0) && (x * 2 != 26))
                - WRONG ANSWER: x % 2 == 0 && !(x % 26 == 0)
     
        e. donation is in the range 1,000 – 2,000 or guest is 1.
            - ((donation >= 1,000) && (donation >= 2,000) || (donation == 1))
        
     f. ch is a lowercase letter or an uppercase letter. (Assume, as is true for ASCII, that lowercase letters are coded sequentially and that uppercase letters are coded sequentially but that there is a gap in the code between uppercase and lowercase.)
            - (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')
     
     5. In English, the statement “I will not not speak” means the same as “I will speak.” In C++, is !!x the same as x?
        - !No :)
            Correct answer is: Not necessarily. For example, if x is 10, then !x is 0 and !!x is 1. However, if x is a
     bool variable, then !!x is x.
     
     6. Construct a conditional expression that is equal to the absolute value of a variable. That is, if a variable x is positive, the value of the expression is just x, but if x is neg- ative, the value of the expression is -x, which is positive.
        - (x > 0) ? x : (x *= -1)
            Correct answer is: x < 0)? -x : x
                                    or
                                (x >= 0)? x : -x july

     
     7. Rewrite the following fragment using switch:
     
     if (ch == 'A')
        a_grade++;
     else if (ch == 'B')
        b_grade++;
     else if (ch == 'C')
        c_grade++;
     else if (ch == 'D')
        d_grade++;
     else
        f_grade++;
     
     char ch;
     switch(ch)
     {
        case 'A': a_grade++; break;
        case 'B': b_grade++; break;
        case 'C': c_grade++; break;
        case 'D': d_grade++; break;
        default: f_grade++; break;
     }
     
     - ANSWER IS RIGHT :)
     
     8. In Listing 6.10, what advantage would there be in using character labels, such as a and c, instead of numbers for the menu choices and switch cases? (Hint:Think about what happens if the user types q in either case and what happens if the user types 5 in either case.)
        - I don't know.
            - CORRECT ANSWER IS: "If you use integer labels and the user types a noninteger such as q, the program hangs because integer input can’t process a character. But if you use character labels and the user types an integer such as 5, character input will process 5 as a character. Then the default part of the switch can suggest entering another character."
     
     9. Consider the following code fragment:
     
        int line = 0;
        char ch;
        while (cin.get(ch))
        {
            if (ch == 'Q') break;
            if (ch != '\n') continue;
            line++;
        }
     
     Rewrite this code without using break or continue.
     
     while((std::cin.get(ch) == '\n') || (!std::cin.get(ch) == 'Q') )
     {
        
     }
     
        - WRONG ANSWER.
            - CORRECT ANSWER IS:
                while (cin.get(ch) && ch != 'Q')
                {
                    if (ch == '\n')
                        line++;
                }
     */
    
    // Programming_exercises_1();
    // Programming_exercises_2();
    // Programming_exercises_3();
    // Programming_exercises_4();
    // Programming_exercises_5();
    // Programming_exercises_6();
     Programming_exercises_7();
    // Programming_exercises_8();
    // Programming_exercises_9();
    
    std::cin.get();
    return 0;
}

void Programming_exercises_1()
{
    /*
     Write a program that reads keyboard input to the @ symbol and that echoes the input except for digits, converting each uppercase character to lowercase, and vice versa. (Don’t forget the cctype family.)
     */
    
    std::cout << "Type whatever you want but only until '@' "
            << "symbol.\nPlease do't type digits also i will covert each uppercase "
            << "character to lowrcase, and vice versa." << '\n';

    char ch;
    std::cin.get(ch);

    while(ch != '@')
    {
        if(isdigit(ch))
        {
            std::cout << "Wrong try again...\n";
            
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            
            std::cin.get(ch);
            continue;
        }
        else if(isupper(ch))
        {
                ch = tolower(ch);
        }
        else if(islower(ch))
        {
                ch = toupper(ch);
        }
        
        std::cout << ch;
        std::cin.get(ch);
    }
    std::cout << std::endl;
    
}

void Programming_exercises_2()
{
    /*
     Write a program that reads up to 10 donation values into an array of double. (Or, if you prefer, use an array template object.) The program should terminate input on non-numeric input. It should report the average of the numbers and also report how many numbers in the array are larger than the average.
     */
    
    double sum = 0.0;
    int count_index = 0;
    int how_many_bigger = 0;
    std::array<double, 10> donation;
    
    std::cout << "Enter 10 donation values into an array please: ";
    
    for (int i = 0; i < 10; i++)
    {
        
        if (std::cin >> donation[i])
        {
            sum += donation[i];
            ++count_index;
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (donation[i] > (sum / count_index))
        {
            ++how_many_bigger;
        }
    }
    
    std::cout << "Average of " << count_index << " donation = " << sum / count_index << '\n';
    std::cout << "There is a " << how_many_bigger << " numbers in the array larger than the average.\n";
    
    
}

void Programming_exercises_3()
{
    /*
     Write a precursor to a menu-driven program.The program should display a menu offering four choices, each labeled with a letter. If the user responds with a letter other than one of the four valid choices, the program should prompt the user to enter a valid response until the user complies.Then the program should use a switch to select a simple action based on the user’s selection.
     A program run could look something like this.
     
     Please enter one of the following choices:
     c) carnivore p) pianist
     t) tree      g) game
     
     f
     
     Please enter a c, p, t, or g: q
     Please enter a c, p, t, or g: t
     
     A maple is a tree.
     */
    
    show_menu_exer_3();
    char ch;
    std::cin >> ch;
    
   // std::cin.get(ch); //This function does not ignore any leading whitespace or newline characters in the input stream
    
    while (true)
    {
        switch (ch)
        {
            case 'c': std::cout << "A maple is a carnivore.\n";
                break;
            case 'p': std::cout << "A maple is a pianist.\n";
                break;
            case 't': std::cout << "A maple is a tree.\n";
                break;
            case 'g': std::cout << "A maple is a game.\n";
                break;
                
            default: std::cout << "Please enter a c, p, t, or g. \n";
        }
        
        std::cout << std::endl;
        show_menu_exer_3();
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        
        /*
         Without clear() and ignore() program goint to endless infinity input loop.
         To deal with those who don’t follow instructions, it’s better to use char- acter input insterd of ints
         */
        
        std::cin >> ch;
    }
}

void show_menu_exer_3() // function for exer 3
{
    std::cout << "Please enter one of the following choices: " << '\n';
    std::cout << "c) carnivore p) pianist\n";
    std::cout << "t) tree      g) game\n";
}

void Programming_exercises_4()
{
    /*
     When you join the Benevolent Order of Programmers, you can be known at BOP meetings by your real name, your job title, or your secret BOP name.Write a program that can list members by real name, by job title, by secret name, or by a member’s preference. Base the program on the following structure:
     
     // Benevolent Order of Programmers name structure
     struct bop
     {
         char fullname[strsize];    // real name
         char title[strsize];       // job title
         char bopname[strsize];     // secret BOP name
         int preference;            // 0 = fullname, 1 = title, 2 = bopname
     };
     
     In the program, create a small array of such structures and initialize it to suitable values. Have the program run a loop that lets the user select from different alternatives:
     
     a. display by name             b. display by title
     c. display by bopname          d. display by preference
     q. quit
     
     Note that “display by preference” does not mean display the preference member; it means display the member corresponding to the preference number. For instance, if preference is 1,choiced would display the programmer’s job title. A sample run may look something like the following:
     
     Benevolent Order of Programmers Report
     a. display by name     b. display by title
     c. display by bopname  d. display by preference
     q. quit
     
     Enter your choice: a
     Wimp Macho
     Raki Rhodes
     Celia Laiter
     Hoppy Hipman
     Pat Hand
     
     Next choice: d
     Wimp Macho
     Junior Programmer
     MIPS
     Analyst Trainee
     LOOPY
     
     Next choice: q
     Bye!
     */
    
    const int strsize = 50;
    char ch;
    
    struct bop
    {
        char fullname[strsize];    // real name
        char title[strsize];       // job title
        char bopname[strsize];     // secret BOP name
        int preference;            // 0 = fullname, 1 = title, 2 = bopname
    };
    
    bop bops[3] =
    {
        {"Ania", "Zona", "Ponczolinka", 1},
        {"Sophie", "Curka", "Dziamdziak", 2},
        {"Mateusz", "Maz", "Paczek", 0}
    };
    
    show_menu_exer_4();
    std::cin.get(ch);
    
    while (true)
    {
        switch (ch)
        {
            case 'a':
                
                        for (int i = 0; i < 3; i++)
                        {
                            std::cout << bops[i].fullname << '\n';
                        }
                break;
                
            case 'b':
                
                        for (int i = 0; i < 3; i++)
                        {
                            std::cout << bops[i].title << '\n';
                        }
                break;
                
            case 'c':
                
                        for (int i = 0; i < 3; i++)
                        {
                            std::cout << bops[i].bopname << '\n';
                        }
                break;
                
            case 'd':
                
                        for (int i = 0; i < 3; i++)
                        {
                            if(bops[i].preference == 0)
                            {
                                std::cout << bops[i].fullname << '\n';
                            }
                            else if(bops[i].preference == 1)
                            {
                                std::cout << bops[i].title << '\n';
                            }
                            else if(bops[i].preference == 2)
                            {
                                std::cout << bops[i].bopname << '\n';
                            }
                        }
                break;
                
            case 'q':   std::cout << "Bye!\n";
                exit(0);
                
            default: std::cout << "\nPlease enter an a, b, c, d, or q for exit. \n\n";
        }
        
        std::cout << std::endl;
        show_menu_exer_4();
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        
        /*
         Without clear() and ignore() program goint to endless infinity input loop.
         To deal with those who don’t follow instructions, it’s better to use char- acter input insterd of ints
         */
        
        std::cin.get(ch);
    }
}

void show_menu_exer_4() // function for exer 4
{
    std::cout << "Benevolent Order of Programmers Report\n";
    std::cout << "a. Display by name     b. Display by title\n";
    std::cout << "c. Display by bopname  d. Display by preference\n";
    std::cout << "q. Quit\n\n";
    
    std::cout << "Enter your choice: ";
}

void Programming_exercises_5()
{
    /*
     The Kingdom of Neutronia, where the unit of currency is the tvarp, has the following income tax code:
     
     First 5,000 tvarps: 0% tax
     Next 10,000 tvarps: 10% tax
     Next 20,000 tvarps: 15% tax
     Tvarps after 35,000: 20% tax
     
     For example, someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 × 0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.Write a program that uses a loop to solicit incomes and to report tax owed.The loop should terminate when the user enters a negative number or non-numeric input.
     */
    
    double income = 0.0;
    
    while (std::cin >> income)
    {
        if (income <= 0)
        {
            break;
        }
        else if (income < 5000)
        {
            std::cout << "You have to pay 0% tax.\n";
            break;
        }
        else if (income > 5000 && income < 15000)
        {
            double temp = income - 5000;
            std::cout << "You have to pay 10% tax = "
                      << temp * 0.10 << '\n';
            break;
        }
        else if(income > 15000 && income < 35000)
        {
            double temp = income - 15000;
            std::cout << "You have to pay 15% tax = "
                      << 5000 * 0.00 + 10000 * 0.10 + temp * 0.20 << '\n';
            break;
        }
        else if(income > 35000)
        {
            double temp = income - 35000;
            std::cout << "You have to pay 20% tax = "
                      << 5000 * 0.00 + 10000 * 0.10 + 20000 * 0.15 + temp * 0.20 << '\n';
            break;
        }
        else
            break;
    }
}

void Programming_exercises_6()
{
    /*
     Put together a program that keeps track of monetary contributions to the Society for the Preservation of Rightful Influence. It should ask the user to enter the number of contributors and then solicit the user to enter the name and contribution of each contributor.The information should be stored in a dynamically allocated array of structures. Each structure should have two members: a character array (or else a string object) to store the name and a double member to hold the amount of the contribution.
     
     After reading all the data, the program should display the names and amounts donated for all donors who contributed $10,000 or more.This list should
                                             be headed by the label Grand Patrons.After that,the program should list the remaining donors.That list should be headed Patrons. If there are no donors in one of the categories, the program should print the word “none.” Aside from displaying two categories, the program need do no sorting.
     */
    
    struct name_and_contribution_of_each_contributor
    {
        std::string name;
        double amount_of_the_contribution;
    };
    
    int number_of_contributors;
    std::cout << "Pleae enter the number of contributors: ";
    std::cin >> number_of_contributors;
    
    name_and_contribution_of_each_contributor* ptr_con = new name_and_contribution_of_each_contributor[number_of_contributors];
    
    for (int i = 0; i < number_of_contributors; i++)
    {
        std::cout << "Please enter the name of contributor: ";
        (std::cin >> ptr_con[i].name).get();
        /*
         The (std::cin >> name).get() statement does the same thing as std::cin >> name, but additionally it reads the next character in the input buffer, which is the newline character (\n) that was left there by the >> operator. The get() function then extracts this newline character from the input buffer and returns it.
         The get() function will read the newline character from the input buffer and discard it, preventing it from being read as input later in your program.
         */
        std::cout << "Please enter the contribution: ";
        std::cin >> ptr_con[i].amount_of_the_contribution;
    }
    
    int num_of_grands = 0;
    
    std::cout << '\n';
    std::cout << "Grand Patrons: \n";
    for (int i = 0; i < number_of_contributors; i++)
    {
        if (ptr_con[i].amount_of_the_contribution > 10000)
        {
            std::cout << ptr_con[i].name << ": " << ptr_con[i].amount_of_the_contribution << "$\n";
            ++num_of_grands;
        }
    }
    
    if (num_of_grands == 0)
    {
        std::cout << "none.\n";
    }
    
    std::cout << "Remaining patrons: \n";
    for (int i = 0; i < number_of_contributors; i++)
    {
        if (ptr_con[i].amount_of_the_contribution < 10000)
        {
            std::cout << ptr_con[i].name << ": " << ptr_con[i].amount_of_the_contribution << "$\n";
        }
    }
}

void Programming_exercises_7()
{
    /*
     Write a program that reads input a word at a time until a lone q is entered.The program should then report the number of words that began with vowels, the number that began with consonants, and the number that fit neither of those categories. One approach is to use isalpha() to discriminate between words beginning with letters and those that don’t and then use an if or switch statement to further identify those passing the isalpha() test that begin with vowels. A sample run might look like this:
     
     Enter words (q to quit):
     The 12 awesome oxen ambled
     quietly across 15 meters of lawn. q
     5 words beginning with vowels : awesome, oxen, ambled, across, of
     4 words beginning with consonants : quietly, meters, lawn, The
     2 others
     */
    
    std::string word;
    std::cout << "Enter words (q to quit): ";
    int vowels = 0;
    int consonants = 0;
    int others = 0;
    
    while (std::cin >> word && word != "q")
    {
        if (begins_with_vowel(word))
        {
            std::cout << ++vowels << " vovels." << '\n';
        }
        
        std::cout << ++vowels << " vovels." << '\n';
    }
    
    
    
}

bool begins_with_vowel(const std::string& word) {
    // Check if the word is not empty
    if (!word.empty()) {
        char c = std::tolower(word.front()); // Get the first character and convert to lowercase
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    return false;
}

void Programming_exercises_8()
{
    /*
     Write a program that opens a text file, reads it character-by-character to the end of the file, and reports the number of characters in the file.

     */
}

void Programming_exercises_9()
{
    /*
     Do Programming Exercise 6 but modify it to get information from a file.The first item in the file should be the number of contributors, and the rest of the file should consist of pairs of lines, with the first line of each pair being a contributor’s name and the second line being a contribution.That is, the file should look like this:
     4
     Sam Stone 2000
     Freida Flass 100500 Tammy Tubbs 5000
     Rich Raptor 55000
     */
}

bool is_alphabetick(char x)
{
    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        if(x == 'a' || x == 'A')
            std::cout << "That is right " << x << " is " << 1 << " letter in alphabet.\n";
        else if(x == 'b' || x == 'B')
            std::cout << "That is right " << x << " is " << 2 << " letter in alphabet.\n";
        else if(x == 'c' || x == 'C')
            std::cout << "That is right " << x << " is " << 3 << " letter in alphabet.\n";
        else if(x == 'd' || x == 'D')
            std::cout << "That is right " << x << " is " << 4 << " letter in alphabet.\n";
        else if(x == 'e' || x == 'E')
            std::cout << "That is right " << x << " is " << 5 << " letter in alphabet.\n";
        else if(x == 'f' || x == 'F')
            std::cout << "That is right " << x << " is " << 6 << " letter in alphabet.\n";
        else if(x == 'g' || x == 'G')
            std::cout << "That is right " << x << " is " << 7 << " letter in alphabet.\n";
        else if(x == 'h' || x == 'H')
            std::cout << "That is right " << x << " is " << 8 << " letter in alphabet.\n";
        else if(x == 'i' || x == 'I')
            std::cout << "That is right " << x << " is " << 9 << " letter in alphabet.\n";
        else if(x == 'j' || x == 'J')
            std::cout << "That is right " << x << " is " << 10 << " letter in alphabet.\n";
        else if(x == 'k' || x == 'K')
            std::cout << "That is right " << x << " is " << 11 << " letter in alphabet.\n";
        else if(x == 'l' || x == 'L')
            std::cout << "That is right " << x << " is " << 12 << " letter in alphabet.\n";
        else if(x == 'm' || x == 'M')
            std::cout << "That is right " << x << " is " << 13 << " letter in alphabet.\n";
        else if(x == 'n' || x == 'N')
            std::cout << "That is right " << x << " is " << 14 << " letter in alphabet.\n";
        else if(x == 'o' || x == 'O')
            std::cout << "That is right " << x << " is " << 15 << " letter in alphabet.\n";
        else if(x == 'p' || x == 'P')
            std::cout << "That is right " << x << " is " << 16 << " letter in alphabet.\n";
        else if(x == 'q' || x == 'Q')
            std::cout << "That is right " << x << " is " << 17 << " letter in alphabet.\n";
        else if(x == 'r' || x == 'R')
            std::cout << "That is right " << x << " is " << 18 << " letter in alphabet.\n";
        else if(x == 's' || x == 'S')
            std::cout << "That is right " << x << " is " << 19 << " letter in alphabet.\n";
        else if(x == 't' || x == 'T')
            std::cout << "That is right " << x << " is " << 20 << " letter in alphabet.\n";
        else if(x == 'u' || x == 'U')
            std::cout << "That is right " << x << " is " << 21 << " letter in alphabet.\n";
        else if(x == 'v' || x == 'V')
            std::cout << "That is right " << x << " is " << 22 << " letter in alphabet.\n";
        else if(x == 'w' || x == 'W')
            std::cout << "That is right " << x << " is " << 23 << " letter in alphabet.\n";
        else if(x == 'x' || x == 'X')
            std::cout << "That is right " << x << " is " << 24 << " letter in alphabet.\n";
        else if(x == 'y' || x == 'Y')
            std::cout << "That is right " << x << " is " << 25 << " letter in alphabet.\n";
        else if(x == 'z' || x == 'Z')
            std::cout << "That is right " << x << " is " << 26 << " letter in alphabet.\n";

        return true;
    }
    else
       return false;
}
