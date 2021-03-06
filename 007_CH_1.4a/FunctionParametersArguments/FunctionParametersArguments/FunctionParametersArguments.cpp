// FunctionParametersArguments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

// EXAMPLES OF FUNCTIONS WITH DIFFERENT NUMBERS OF PARAMETERS
// void doPrint()
// {
// 	std::cout << "In doPrint()" << std::endl;
// }
// 
// // this function takes one integer parameter named x
// // the caller will supply the value of x
// void printValue(int x)
// {
// 	std::cout << x << std::endl;
// }
// 
// // this function has two integer parameters, one named x and one named y
// // the caller will supply the value of both x and y
// int add(int x, int y)
// {
// 	std::cout << x << " + " << y << " = " << x + y;
// 	return x + y;
// }
// 
// // an argument is a value that is passed from the caller to the function when a function call is made
// int main()
// {
// 	printValue(6);
// 	add(2, 3);
// 	return 0;
// }

// HOW PARAMETERS AND ARGUMENTS WORK TOGETHER
// void printValues(int x, int y)
// {
// 	std::cout << x << std::endl;
// 	std::cout << y << std::endl;
// }
// 
// int main()
// {
// 	printValues(6, 7);
// 	return 0;
// }

// HOW PARAMETERS AND RETURN VALUES WORK TOGETHER
// int add(int x, int y)
// {
// 	return x + y;
// }
// 
// int main()
// {
// 	std::cout << add(4, 5) << std::endl;
// 	return 0;
// }

// MORE EXAMPLES
int add(int x, int y)
{
	return x + y;
}

int multiply(int x, int y)
{
	return x * y;
}

int main()
{
	std::cout << add(4, 5) << std::endl;
	std::cout << multiply(2, 3) << std::endl;

	// we can pass the value of expressions
	std::cout << add(1 + 2, 3 * 4) << std::endl;

	// we can pass the value of variables
	int a = 5;
	std::cout << add(a, a) << std::endl;

	std::cout << add(1, multiply(2, 3)) << std::endl;
	std::cout << add(1, add(2, 3)) << std::endl;

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
