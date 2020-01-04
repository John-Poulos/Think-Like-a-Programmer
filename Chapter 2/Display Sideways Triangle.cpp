// Shapes using Characters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

//Display a triangle with five # as the top and only one # at the bottom
//Reverse the above and have the five # as the base and only one # at the bottom
//Constraints are that we can only use cout << "#" and cout << endl;

void numOfHashes(int howMany);

int main()
{
	for (size_t k = 1; k < 11; ++k)
	{
		if (k < 6) 
		{
			numOfHashes(6-k);
		}

		else 
		{
			numOfHashes(k - 5);
		}
		
	}
	
	

	cout << endl << endl << endl;

	numOfHashes(5);
	numOfHashes(4);
	numOfHashes(3);
	numOfHashes(2);
	numOfHashes(1);
	cout << endl;
	numOfHashes(1);
	numOfHashes(2);
	numOfHashes(3);
	numOfHashes(4);
	numOfHashes(5);
	cout << endl;
		
	for (size_t i = 1; i <= 7; i++)
	{				
		for (size_t hashes = 1; hashes <= i && hashes <= 8 - i; hashes++)
		{
			cout << "#";
		}
		cout << endl;		
	}

	cout << endl;

	for (signed int i = 1; i <= 7; i++)
	{
		for (signed int hashes = 1; hashes <= 4-abs(4 - i); hashes++)
		{
			cout << "#";
		}
		cout << endl;
	}
}

void numOfHashes(int howMany)
{
	for (size_t i = 0; i < howMany; i++)
	{
		cout << "#";
	}
	cout << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
