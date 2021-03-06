// FirstLookAtLocalScope.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

// SIMPLE EXAMPLE
// int main()
// {
// 	int x; // variable x is declared here
// 	std::cout << "enter a value for x: ";
// 	std::cin >> x;
// 	std::cout << "You entered: " << x << std::endl;
// 
// 	return 0;
// } // variable is destroyed here

// SLIGHTLY COMPLEX EXAMPLE
int add(int x, int y)
{
	// x and y are only available in this function
	return x + y;
} // x and y are destroyed here

int main()
{
	int a = 5;
	int b = 6;
	// a and b are usable in this function only
	std::cout << add(a, b) << std::endl;
	return 0;
} // a and b go out of scope and are destroyed here 

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
