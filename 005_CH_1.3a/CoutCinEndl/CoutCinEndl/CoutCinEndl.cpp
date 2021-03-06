// CoutCinEndl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	// the std::cout object can be used to output text to the console.
    std::cout << "Hello World!\n"; 

	// To print more than one thing on the same line, the output operator (<<) can be used multiple times
	int y = 4;
	std::cout << "y is equal to " << y << std::endl;

	// multiple outputs by default show up on the same line in the console
	std::cout << "Hi!";
	std::cout << "My name is Alex.";

	// std::endl inserts a new line character
	std::cout << "Hi!" << std::endl;
	std::cout << "My name is Alex." << std::endl;

	// std::cin reads input from the user at the console using the input (>>) operator
	std::cout << "enter a number: "; // Ask a user for a number
	int x; // No need to initialize x since we are going to overwrite that on the next line
	std::cin >> x; // read a number from the console and store it as x
	std::cout << "You entered " << x << std::endl;

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
