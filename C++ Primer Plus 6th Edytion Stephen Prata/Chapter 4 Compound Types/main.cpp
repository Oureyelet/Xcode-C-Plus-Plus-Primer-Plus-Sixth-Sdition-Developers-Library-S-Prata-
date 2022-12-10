//
//  main.cpp -- S.Prata C++ Primer Plus 6th ed.
//  Chapter 4 Compound Types (Xcode)
//
//  Created by Mateusz Kacperski on 16/11/2022.
//
#include <iostream>
#include <vector>
#include <array>
#include "Listing 4.24 choices.h"
#include <cstring>
#include <iterator>
#include <limits>


//Programmin Exercises functions prototype:
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

//structure for Programming_exercises_5:
struct CandyBar
{
    std::string name;
    float weight;
    int calories;
};

//structure for Programming_exercises_7:
struct Pizza
{
    std::string name;
    float diameter;
    int weight;
};


int main()
{
    std::cout << "Hello World chapter 4 here\n";
    
    
    //--------------------------------------------------------------------------------------------
    // Array Alternatives:
    //--------------------------------------------------------------------------------------------

    
    //--------------------------------------------------------------------------------------------
    // The vector Template Class:
    //--------------------------------------------------------------------------------------------
    
    // Vector is dynamic array.
    
    std::vector<int> vi;        // create a zero-size array of int
    
    std::cout << "Enter size of std::vector<int> vi: ";
    int n;
    std::cin >> n;
    
    std::vector<int> vd(n);  // create an array of n doubles
    
    std::cout << "vd vector size is: " <<vd.size() << '\n';
    
    
    //--------------------------------------------------------------------------------------------
    // The Array Template Class(C++11):
    //--------------------------------------------------------------------------------------------
    std::array<int, 5> ai;  // create array object of 5 ints
    std::array<double, 4> ad {1.2, 2.1, 3.43, 4.3};
    //unlike the case of vector, size of array can't be variable.
    
    
    //-----------------------------------------------------------------------------------------------------
    // Comparing Arrays, Vector Object and Array Objects: check example here -> "Listing 4.24 choices.h"
    //-----------------------------------------------------------------------------------------------------
    
    listing_4_24();
    
    //-----------------------------------------------------------------------------------------------------
    // Summary:
    //-----------------------------------------------------------------------------------------------------
    
    
    
    //-----------------------------------------------------------------------------------------------------
    // Chapter Review:
    //-----------------------------------------------------------------------------------------------------
    /*
     
     1. How would you declare each of the following?
         a. actors is an array of 30 char.
            - char actors[30];
         b. betsie is an array of 100 short.
            - short betsid[100];
         c. chuck is an array of 13 float.
            - float chuck[13];
         d. dipsea is an array of 64 long double.
            - double dipsea[64];
     
     2. Does Chapter Review Question 1 use the array template class instead of built-in
     arrays.
        - std::array<char, 30> actors;
        - std::array<short, 100> betsid;
        - std::array<float, 13> chuck;
        - std::array<double, 64> dipsea;
     
     3. Declare an array of five ints and initialize it to the first five odd positive integers.
        - std::array<int, 5> odd_positive_int = {1, 3, 5, 7, 9 , 11};
        - int odd_positive_int[5] = {1, 3, 5, 7, 9 , 11};
     
     4. Write a statement that assigns the sum of the first and last elements of the array in Question 3 to the variable even.
        - int even = odd_positive_int[0] + odd_positive_int[4];
     
     5. Write a statement that displays the value of the second element in the float array ideas.
        - float ideas[4] = {3.3, 5.5, 6.7, 23.3};
        - std::cout << ideas[1] << '\n';
     
     6. Declare an array of char and initialize it to the string "cheeseburger".
        - char meal[13] = "cheeseburger". // number of characters + 1 (null character on the end of any strings)
     
     7. Declare a string object and initialize it to the string "Waldorf Salad".
        - std::string question7{ "Waldorf Salad" };
        - std::string question7 = "Waldorf Salad";
     
     
     8. Devise a structure declaration that describes a fish.The structure should include the kind, the weight in whole ounces, and the length in fractional inches.
     
        struct Fish
        {
            std::string kind; // or char kind[20];
            int weight;
            double lenght; // or float lennght;
        };
     
     9. Declare a variable of the type defined in Question 8 and initialize it.
        
        Fish fish;
        fish.kind = "salmon";
        fish.weight = 15;
        fish.lenght = 3.3;
     
     or:
     
         Fish salmon =
         {
             "Salmon",
             12,
             3.3
         };
     
     10. Use enum to define a type called Response with the possible values Yes, No, and
     Maybe. Yes should be 1, No should be 0, and Maybe should be 2.
     
        enum Response
        {
            no,
            yes,
            maybe
        };
     
     11. Suppose ted is a double variable. Declare a pointer that points to ted and use the
     pointer to display ted’s value.
        
        double ted = 12.2;
        double* ptr_ted = &ted;
        std::cout << *ptr_ted << '\n';
     
     12. Suppose treacle is an array of 10 floats. Declare a pointer that points to the first ele-
     ment of treacle and use the pointer to display the first and last elements of the array.
     
         float treacle[10] = {12.2, 34.4, 23.1, 67.4, 23.5, 7.5, 23.2, 89.3, 44.6, 9.6};
         float* ptr_treacle = treacle;
         std::cout << *treacle << treacle[9] << '\n';
         
     13. Write a code fragment that asks the user to enter a positive integer and then cre- ates a dynamic array of that many ints. Do this by using new, then again using a vector object.
        
        std::cout << "enter a positive integer: "
        int x;
        std::cin >> x;
        int* array_x = new int[x];
        delete [] array_x;
        std::vector<int> vd(n);
            
     
     14. Is the following valid code? If so, what does it print?
     cout << (int *) "Home of the jolly bytes";
        - we are casting string into int and then print adress of this int
     
     15. Write a code fragment that dynamically allocates a structure of the type described in Question 8 and then reads a value for the kind member of the structure.
         
        struct Fish
        {
         std::string kind; // or char kind[20];
         int weight;
         double lenght; // or float lennght;
        };
     
        Fish* ptr_struct = new Fish;

        std::cout << "Enter the kind of fish: ";
        std::getline(std::cin, ptr_struct->kind);

        std::cout << ptr_struct->kind << " was created.\n";
     
        delete ptr_struct;
        
     
     16. Listing 4.6 illustrates a problem created by following numeric input with line-ori- ented string input. How would replacing this:
     cin.getline(address,80);
     with this:
     cin >> address;
     affect the working of this program?
        - so my answer is if we changed the cin.getline() to just std::cin >>... we only will be able to read string until fist 'space' where cin.getlinne() read our whole input (line)
     
     17. Declare a vector object of 10 string objects and an array object of 10 string objects. Show the necessary header files and don’t use using. Do use a const for the number of strings.
     
        const std::vector<std::string> ten_object_vector(10);
        or:
        const std::vector<std::string> ten_object_vector{};
        ten_object_vector.reserve(10);

        const std::array<std::string, 10> ten_object_array{};
    */
    
    Programming_exercises_1();
    Programming_exercises_2();
    Programming_exercises_3();
    Programming_exercises_4();
    Programming_exercises_5();
    Programming_exercises_6();
    Programming_exercises_7();
    Programming_exercises_8();
    Programming_exercises_9();
    Programming_exercises_10();
    
    return 0;
}

void Programming_exercises_10()
{
    /*
     Write a program that requests the user to enter three times for the 40-yd dash (or 40-meter, if you prefer) and then displays the times and the average. Use an array object to hold the data. (Use a built-in array if array is not available.)
     */
    
    std::array<float, 3> dash;
    
    std::cout << "Enter three times for the 40-yd dash." << '\n';
    std::cout << "Enter first time: ";
    std::cin >> dash[0];
    std::cout << "Enter second time: ";
    std::cin >> dash[1];
    std::cout << "Enter third time: ";
    std::cin >> dash[2];
    
    std::cout << "1st time: " << dash[0] << " sec. " << '\n';
    std::cout << "2nd time: " << dash[1] << " sec. " << '\n';
    std::cout << "3th time: " << dash[2] << " sec. " << '\n';
    std::cout << "Average time = " << (dash[0] + dash[1] + dash[2]) / 3 << " sec. " << '\n';
    
}

void Programming_exercises_9()
{
    /*
     Do Programming Exercise 6, but instead of declaring an array of three CandyBar structures, use new to allocate the array dynamically.
     */
    
    CandyBar* ptr_CandyBar = new CandyBar[3];
    
    ptr_CandyBar[0] = { "Mars", 150.5, 250 };
    ptr_CandyBar[1] = { "Twix", 75.25, 100 };
    ptr_CandyBar[2] = { "Milcyway", 122.2, 200 };
    
    std::cout << "Here is our custom 3 candy bars: " << '\n';
    std::cout << "First candy bar is " << ptr_CandyBar[0].name << " he has " << ptr_CandyBar[0].weight << " grams and " << ptr_CandyBar[0].calories << " calories\n";
    std::cout << "Second candy bar is " << ptr_CandyBar[1].name << " he has " << ptr_CandyBar[1].weight << " grams and " << ptr_CandyBar[1].calories << " calories\n";
    std::cout << "Third candy bar is " << ptr_CandyBar[2].name << " he has " << ptr_CandyBar[2].weight << " grams and " << ptr_CandyBar[2].calories << " calories\n";
}

void Programming_exercises_8()
{
    /*
     Do Programming Exercise 7 but use new to allocate a structure instead of declaring a structure variable.Also have the program request the pizza diameter before it requests the pizza company name.
     */
    
    Pizza* dynamicly_struct = new Pizza;
    
    std::cout << "Please enter the details of pizza to analysing. \n";
    std::cout << "What is the diameter of pizza: ";
    std::cin >> (*dynamicly_struct).diameter; // or dynamicly_struct->diameter
    std::cout << "Enter the name of pizza company to analysing: ";
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //if you dont want to use cin.ignore go with just this line: std::cin >> (*dynamicly_struct).name; but then u will read only one work to your string
    //std::getline(std::cin, dynamicly_struct->name);
    
    // or even you can use:
    (std::cin >> dynamicly_struct->name).get();
    std::cout << "What is the weight of " << dynamicly_struct->name << " pizza: "; // or (*dynamicly_struct).name
    std::cin >> dynamicly_struct->weight;
    
    std::cout << "Pizza to analusis:\n";
    std::cout << "The name of the pizza company: " << dynamicly_struct->name << '\n';
    std::cout << "The diameter of " << dynamicly_struct->name << " is " << dynamicly_struct->diameter << "cm.\n";
    std::cout << "The weight of " << dynamicly_struct->name << " is " << dynamicly_struct->weight << "grams.\n";
    
    delete dynamicly_struct;
}

void Programming_exercises_7()
{
    /*
     William Wingate runs a pizza-analysis service. For each pizza, he needs to record the following information:
     
     - The name of the pizza company, which can consist of more than one word
     - The diameter of the pizza
     - The weight of the pizza
     
     Devise a structure that can hold this information and write a program that uses a structure variable of that type.The program should ask the user to enter each of the preceding items of information, and then the program should display that informa- tion. Use cin (or its methods) and cout.
     */
    std::cin.ignore();
    Pizza analysis;
    std::cout << "Please enter the details of pizza to analysing. \n";
    std::cout << "Enter the name of pizza company to analysing: ";
    std::getline(std::cin, analysis.name);
    std::cout << "What is the diameter of " << analysis.name << " pizza: ";
    std::cin >> analysis.diameter;
    std::cout << "What is the weight of " << analysis.name << " pizza: ";
    std::cin >> analysis.weight;
    
    std::cout << "Pizza to analusis:\n";
    std::cout << "The name of the pizza company: " << analysis.name << '\n';
    std::cout << "The diameter of " << analysis.name << " is " << analysis.diameter << "cm.\n";
    std::cout << "The weight of " << analysis.name << " is " << analysis.weight << "grams.\n";
        
}

void Programming_exercises_6()
{
    /*
     The CandyBar structure contains three members, as described in Programming Exercise 5.Write a program that creates an array of three CandyBar structures, ini- tializes them to values of your choice, and then displays the contents of each struc- ture.
     */
    CandyBar custom[3] =
    {
        { "Mars", 150.5, 250 },
        { "Twix", 75.25, 100 },
        { "Milcyway", 122.2, 200 }
    };
    
    std::cout << "Here is our custom 3 canby bars: " << '\n';
    std::cout << "First candy bar is " << custom[0].name << " he has " << custom[0].weight << " grams and "
                << custom[0].calories << " calories\n";
    std::cout << "First candy bar is " << custom[1].name << " he has " << custom[1].weight << " grams and "
                << custom[1].calories << " calories\n";
    std::cout << "First candy bar is " << custom[2].name << " he has " << custom[2].weight << " grams and "
                << custom[2].calories << " calories\n";
}

void Programming_exercises_5()
{
    /*
     The CandyBar structure contains three members.The first member holds the brand name of a candy bar.The second member holds the weight (which may have a frac- tional part) of the candy bar, and the third member holds the number of calories (an integer value) in the candy bar.Write a program that declares such a structure and creates a CandyBar variable called snack, initializing its members to "Mocha Munch", 2.3, and 350, respectively.The initialization should be part of the declara- tion for snack. Finally, the program should display the contents of the snack vari- able.
     */
    
    CandyBar snack =
    {
        "Mocha Munch",
        2.3,
        350
    };
    
    std::cout << "Snack name: " << snack.name << '\n';
    std::cout << "Snack weight: " << snack.weight << '\n';
    std::cout << "Snack calories: " << snack.calories << '\n';
}

void Programming_exercises_4()
{
    /*
    Write a program that asks the user to enter his or her first name and then last name, and that then constructs, stores, and displays a third string consisting of the user’s last name followed by a comma, a space, and first name. Use string objects and methods from the string header file. A sample run could look like this: Enter your first name: Flip
    Enter your last name: Fleming
    Here’s the information in a single string: Fleming, Flip
    */
    
    std::cin.ignore();
    std::cout << "Enter your first name: ";
    std::string first_name;
    std::getline(std::cin, first_name);
    
    
    std::cout << "Enter your last name: ";
    std::string last_name;
    std::getline(std::cin, last_name);
    
    std::string result = first_name + ", " + last_name;
    
    std::cout << result << '\n';
}

void Programming_exercises_3()
{
    /*
    Write a program that asks the user to enter his or her first name and then last name, and that then constructs, stores, and displays a third string, consisting of the user’s last name followed by a comma, a space, and first name. Use char arrays and functions from the cstring header file. A sample run could look like this:
    Enter your first name: Flip
    Enter your last name: Fleming
    Here’s the information in a single string: Fleming, Flip
     */
    
    std::cin.ignore();
    std::cout << "Enter your first name: ";
    char first_name[250];
    std::cin.getline(first_name, 250);
    
    
    std::cout << "Enter your last name: ";
    char last_name[250];
    std::cin.getline(last_name, 250);
    
    char result[250];
    
    strcat(result, first_name);
    strcat(result, ", " );
    strcat(result, last_name);
    
    std::cout << result << '\n';
}

void Programming_exercises_2()
{
    /* Rewrite Listing 4.4, using the C++ string class instead of char arrays. */
    
    const int arSize = 20;
    //char name[arSize];
    std::string name;
    //char dessert[arSize];
    std::string dessert;

    std::cin.ignore();
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your favorite dessert: ";
    std::getline(std::cin, dessert);
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you " << name << std::endl;
}

void Programming_exercises_1()
{
    /*
        Write a C++ program that requests and displays information as shown in the following example of output:
        What is your first name? Betty Sue
        What is your last name? Yewe
        What letter grade do you deserve? B
        What is your age? 22
        Name: Yewe, Betty Sue
        Grade: C
        Age: 22
     
        Note that the program should be able to accept first names that comprise more than one word.Also note that the program adjusts the grade downward—that is,up one letter. Assume that the user requests an A, a B, or a C so that you don’t have to worry about the gap between a D and an F.
     */
    
    std::cin.ignore();
    std::cout << "What is your first name? ";
    std::string first_name;
    std::getline(std::cin, first_name);
    
    std::cout << "What is your last name? ";
    std::string last_name;
    std::getline(std::cin, last_name);
    
    std::cout << "What letter grade do you deserve? ";
    char grade;
    std::cin >> grade;
    
    std::cout << "What is your age? ";
    int age;
    std::cin >> age;
    
    std::cout << "Name: " << last_name << ", " << first_name << '\n';
    std::cout << "Grade: " << ++grade << '\n';
    std::cout << "Age: " << age << '\n';
}
