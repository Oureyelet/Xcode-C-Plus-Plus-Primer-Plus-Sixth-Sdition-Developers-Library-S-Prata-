//
//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 7th Functions C++'s Programming Modules
//  Listing 7.9 -- functions with a string argument
//
//  Created by Mateusz Kacperski on 26/07/2023.



#ifndef Listing_7_9_strgfun_h
#define Listing_7_9_strgfun_h

#include <iostream>

unsigned int c_in_str(const char* str, char h);

void Listing_7_9()
{
    
}

unsigned int c_in_str(const char* str, char h)
{
    unsigned int count = 0;
    
    /*
     Initially, str points to the first character in the string, so *str represents the first char- acter itself. For example, immediately after the first function call, *str has the value m, the first character in minimum. As long as the character is not the null character (\0), *str is nonzero, so the loop continues. At the end of each loop, the expression str++ increments the pointer by 1 byte so that it points to the next character in the string.Eventually,str points to the terminating null character, making *str equal to 0, which is the numeric code for the null character.That condition terminates the loop. (Why are string-processing functions ruthless? Because they stop at nothing.)
     */
    
    while (*str)        // quit when *str is '\0' - above is explanation...
    {
        if (*str == h)
            count++;
        str++;          // move pointer to next char
    }
}

#endif /* Listing_7_9_strgfun_h */
