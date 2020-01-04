// Luhn Checksum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{    
    string numberToVerify;
    cout << "Enter a number to verify: " << endl;
    cin >> numberToVerify;
 
    bool flag = false;
    int checksum = 0;
    int tempValue = 0;
    
    for (signed int i = numberToVerify.size()-1; i >= 0; i--)
    {
        if (flag == false)
        {
            int tempChara = numberToVerify[i] - 48;
            tempValue = 2 * tempChara;
            if (tempValue > 9)
            {
                tempValue -= 9;
                checksum += tempValue;
                flag = true;
            }
            else
            {
                checksum += tempValue;
                flag = true;
            }
        }

        else if (flag == true)
        {
            int tempChar = numberToVerify[i] - 48;
            checksum += tempChar;
            flag = false;
        }
    }
    cout << 10 - checksum % 10;
}

