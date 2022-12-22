//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.4 -- more looping with for
//
//  Created by Mateusz Kacperski on 14/12/2022.
//

#ifndef Listing_5_4_formore_h
#define Listing_5_4_formore_h

const int ArSize = 16; // example of external declaration

void listing_5_4()
{
    long long factorials[ArSize];
    
    factorials[1] = factorials[0] = 1LL;
    
    for (int i = 2; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i-1];
    }
    
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
}

#endif /* Listing_5_4_formore_h */
