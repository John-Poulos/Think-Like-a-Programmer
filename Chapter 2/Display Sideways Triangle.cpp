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
	cout << "Solution 1: " << '\n';

	for (size_t k = 1; k < 8; ++k)
	{
		if (k < 5) 
		{
			numOfHashes(k);
		}

		else 
		{
			numOfHashes(8 - k);
		}
		
	}
		
	cout << '\n';

	cout << "Solution 2: " << '\n';

	numOfHashes(1);
	numOfHashes(2);
	numOfHashes(3);
	numOfHashes(4);	
	numOfHashes(3);
	numOfHashes(2);
	numOfHashes(1);
	cout << endl;
	
	cout << "Solution 3: " << '\n';

	for (size_t i = 1; i <= 7; i++)
	{				
		for (size_t hashes = 1; hashes <= i && hashes <= 8 - i; hashes++)
		{
			cout << "#";
		}
		cout << endl;		
	}

	cout << '\n';

	cout << "Solution 4: " << '\n';

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