// TLAP Exercise 2-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Using only single character output statements that output a hash mark, a space, or an end of line, write a program that produces the following shape:

//#            #
// ##        ##    
//  ###    ### 
//   ########
//   ########
//  ###    ### 
// ##        ##  
//#            #



#include <iostream>
using std::cout;
using std::endl;

const int SizeOfLine = 14;

void Line1() 
{
	for (size_t pos = 0; pos < SizeOfLine; pos++)
	{
		if (pos == 0 || pos == 13)
		{
			cout << '#';
		}
		else
		{
			cout << ' ';
		}

	}
	cout << '\n';
}
void Line2() 
{
	for (size_t pos = 0; pos < SizeOfLine; pos++)
	{
		if (pos == 1 || pos == 2 || pos == 11 || pos == 12)
		{
			cout << '#';
		}
		else
		{
			cout << ' ';
		}

	}
	cout << '\n';
}
void Line3() 
{
	for (size_t pos = 0; pos < SizeOfLine; pos++)
	{
		if (pos == 2 || pos == 3 || pos == 4 || pos == 9 || pos == 10 || pos == 11)
		{
			cout << '#';
		}
		else
		{
			cout << ' ';
		}

	}
	cout << '\n';
}
void Line4and5() 
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t pos = 0; pos < SizeOfLine - 3; pos++)
		{
			if (pos > 2)
			{
				cout << '#';
			}
			else
			{
				cout << ' ';
			}
		}
		cout << '\n';

	}
}


int main()
{
	cout << "Solution 1: Line by Line Solution Using Functions" << endl;

	Line1();
	Line2();
	Line3();
	Line4and5();
	Line3();
	Line2();
	Line1();



   cout << "Solution 2: Line by Line Solution" << endl;
   	
   //line 1

   for (size_t pos = 0; pos < SizeOfLine; pos++)
   {
	   if (pos == 0 || pos == 13)
	   {
		   cout << '#';
	   }
	   else
	   {
		   cout << ' ';
	   }

   }
   cout << '\n';

   //line 2

   for (size_t pos = 0; pos < SizeOfLine; pos++)
   {
	   if (pos == 1 || pos == 2 || pos == 11 || pos == 12)
	   {
		   cout << '#';
	   }
	   else
	   {
		   cout << ' ';
	   }

   }
   cout << '\n';

   //line 3

   for (size_t pos = 0; pos < SizeOfLine; pos++)
   {
	   if (pos == 2 || pos == 3 || pos == 4 || pos == 9 || pos == 10 || pos == 11)
	   {
		   cout << '#';
	   }
	   else
	   {
		   cout << ' ';
	   }

   }
   cout << '\n';

   //line 4 and 5
   for (size_t i = 0; i < 2; i++)
   {
	   for (size_t pos = 0; pos < SizeOfLine - 3; pos++)
	   {
		   if (pos > 2)
		   {
			   cout << '#';
		   }
		   else
		   {
			   cout << ' ';
		   }
	   }
	   cout << '\n';

   }

   //line 6 - repeat of line 3

   for (size_t pos = 0; pos < SizeOfLine; pos++)
   {
	   if (pos == 2 || pos == 3 || pos == 4 || pos == 9 || pos == 10 || pos == 11)
	   {
		   cout << '#';
	   }
	   else
	   {
		   cout << ' ';
	   }

   }
   cout << '\n';

   //line 7 - repeat of line 2

   for (size_t pos = 0; pos < SizeOfLine; pos++)
   {
	   if (pos == 1 || pos == 2 || pos == 11 || pos == 12)
	   {
		   cout << '#';
	   }
	   else
	   {
		   cout << ' ';
	   }

   }
   cout << '\n';

   //line 8 - repeat of line 1

   for (size_t pos = 0; pos < SizeOfLine; pos++)
   {
	   if (pos == 0 || pos == 13)
	   {
		   cout << '#';
	   }
	   else
	   {
		   cout << ' ';
	   }

   }
   cout << '\n';
	
   	


	cout << "Test Solution 3: Split Shape into L/R Sides" << endl;
	cout << "Need a way to iterate through a different count within each line " << endl;
	cout << " in order to complete the right side. " << endl;

	const int HalfNumOfLines = 4;

	//Left Side

	for (size_t line = 1; line <= HalfNumOfLines; line++)
	{
		for (size_t spaces = 1; spaces < line; spaces++)
		{
			cout << ' ';
		}

		for (size_t hashes = 0; hashes < line; hashes++)
		{
			cout << '#';
		}
		cout << '\n';
		
	}

	for (size_t line = HalfNumOfLines; line > 0; line--)
	{
		for (size_t spaces = line; spaces > 1; spaces--)
		{
			cout << ' ';
		}

		for (size_t hashes = line; hashes > 0; hashes--)
		{
			cout << '#';
		}
		cout << '\n';
	}

	//Right Side



}

