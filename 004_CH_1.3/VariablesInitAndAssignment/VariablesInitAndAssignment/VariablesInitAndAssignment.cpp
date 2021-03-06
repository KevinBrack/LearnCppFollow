// VariablesInitAndAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	// int x;
	// x = 5;
	// std::cout << x << std::endl;

	int y; // define y as an integer variable
	y = 4; // r-value 4 evaluates to 4, which is then assigned to l-value y
	y = 2 + 5; // r-value 2 + r-value-5 evaluates to r-value 7, which is assigned to l-value y;

	int x; // define x as an integer variable
	x = y; // l-value y evaluates to 7 (from before), which is then assigned to l-value y
	x = x; // l-value y evaluates to 7, which is then assigned to l-value x (useless)
	x = x + 1; // l-value x + r-value 1 evaluate to r-value 8, which is than assigned to l-value x.

	std::cout << x << std::endl;

	// After a variable is defined, a value may be assigned to it via the assignment operator
	int z; // this is a variable definition
	z = 5; // assign the value 5 to variable z

	// C++ will let you both define a variable AND give an initial value in the same step. This is called initialization
	int p = 5;

	// define an integer variable named a
	int a; // this variable is uninitialized

	// print the value of a to the screen (who knows what we'll get, because a is uninitialized)
	// std::cout << a; // returned an error


	return 0;
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
