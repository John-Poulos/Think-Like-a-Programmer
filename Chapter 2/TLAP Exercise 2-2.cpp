// TLAP Exercise 2-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Using only single character output statements that ouput a hash mark, a space, or an end of line, write a program that produces the following shape:

//    ##
//   ####
//  ###### 
// ########
// ########
//  ######
//   ####
//    ##


#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "Solution 1: " << '\n';
    cout << '\n';

    //top half

    for (size_t i = 0; i < 4; i++)
    {   
        for (size_t spaces = 0; spaces < 3 - i; spaces++)
        {
            cout << ' ';

        }
            
        for (size_t hashes = 0; hashes < 2 + (2 * i); hashes++)
        {
            cout << '#';
        }

        cout << endl;
    }
        
   //bottom half

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t space = 1; space < i + 1 ; space++)
        {
            cout << ' ';
        }

        for (size_t hash = 0; hash < 8 - (2 * i); hash++)
        {
            cout << '#';
        }

        cout << endl;
    }


}


