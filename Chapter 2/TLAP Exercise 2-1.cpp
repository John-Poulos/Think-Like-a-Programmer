// TLAP Exercise 2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Using only single character output statements that ouput a hash mark, a space, or an end of line, write a program that produces the following shape:
// ########
//  ######
//   ####
//    ##


#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "Solution 1: " << endl;

    for (size_t i = 0; i < 8; i++)
    {
        cout << "#";
    }
    cout << "\n";

    for (size_t i = 0; i < 8; i++)
    {
        if (i == 0 || i == 7)
        {
            cout << " ";
        }
        else
        {
            cout << "#";
        }       
    }
    cout << "\n";

    for (size_t i = 0; i < 8; i++)
    {
        if (i == 0 || i == 1 || i == 6 || i == 7)
        {
            cout << " ";
        }
        else
        {
            cout << "#";
        }
    }
    cout << "\n";

    for (size_t i = 0; i < 8; i++)
    {
        if (i == 3 || i == 4)
        {
            cout << "#"; 
        }
        else
        {
            cout << " ";
        }
    }
    
    cout << endl << endl << endl;






    cout << "Solution 2: " << endl;

    for (size_t pass = 0; pass < 4; pass++)
    {   //spaces before hashes
        for (size_t spaces = 1; spaces <= pass; spaces++)
        {
            cout << ' ';
        }
        //hashes
        for (size_t hashes = 0; hashes <= 7-(2 * pass); hashes++)
        {
            cout << '#';
        }
      
        cout << endl;
    }

    cout << endl << endl;
    cout << "Intermediary steps that assisted in finding the solution: " << endl;

    //full rectangle 4x8
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            cout << '#';
        }
        cout << endl;
    }

    cout << endl;

    //one side of complete image
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4 - i; ++j)
        {
            cout << '#';
        }
        cout << endl;
    }

    cout << endl;
}

