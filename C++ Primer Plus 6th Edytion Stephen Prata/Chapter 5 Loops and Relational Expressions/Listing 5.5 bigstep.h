//  C++ Primer Plus 6th Edytion Stephen Prata
//  Chapter 5 Loops and Relational Expressions
//  Listing 5.5 -- count as directed
//
//  Created by Mateusz Kacperski on 20/12/2022.
//

#ifndef _Listing_5_5_bigstep_h
#define _Listing_5_5_bigstep_h

// 'using' declaration:
using std::cout;
using std::cin;
using std::endl;

void listing_5_5()
{
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    
    cout << "Counting by " << by << "s:\n";
    
    for (int i = 0; i < 100; i = i + by)
    {
        cout << i << endl;
    }
    
    
}


#endif /* _Listing_5_5_bigstep_h */
