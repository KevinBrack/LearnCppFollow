// quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int x = 5; // this is an initialization
	x = x - 2; // this is an assignment
	std::cout << x << std::endl; // #1
	// 3

	int y = x;
	std::cout << y << std::endl; // #2
	// 3

	// x + y is an r-value in this context, so evaluate their values
	std::cout << x + y << std::endl; // #3
	// 6

	std::cout << x << std::endl; // #4
	// 3

	int z;
	// std::cout << z << std::endl; // #5
	// error need to comment out
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
