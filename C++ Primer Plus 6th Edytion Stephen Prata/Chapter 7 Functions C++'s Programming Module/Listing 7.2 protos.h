//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7th Functions C++'s Programming Modules
//  Listing 7.2 -- using prototypes and function calls
//
//  Created by Mateusz Kacperski on 9/05/2023.



#ifndef Listing_7_2_protos_h
#define Listing_7_2_protos_h

void cheers(int);       // prototype: no return value
double cube(double x);  // prototype: return a double

void listing_7_2()  // we treat listing_7_2() as a example of using main() in main.cpp
{
    cheers(15); // function call
    std::cout << "Give me a number: ";
    double side;
    std::cin >> side;
    double volume = cube(side); // function call
    std::cout << "A " << side << "-foot cube has a volume fo ";
    std::cout << volume << " cubic feet.\n";
    cheers(cube(2));    // prototype protection at work
}

void cheers(int x)
{
    for (int i = 0; i < x; i++)
    {
        std::cout << "Cheers! " << ' ';
    }
}

double cube(double x)
{
    return x * x * x;
}

#endif /* Listing_7_2_protos_h */
