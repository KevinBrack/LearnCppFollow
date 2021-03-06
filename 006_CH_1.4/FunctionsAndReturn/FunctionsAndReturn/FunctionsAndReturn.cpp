// FunctionsAndReturn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

// define a function of doPrint()
// void doPrint() // doPrint() is the called function in this example
// {
// 	std::cout << "In doPrint()" << std::endl;
// }
// 
// int main()
// {
// 	std::cout << "Starting main()" << std::endl;
// 	doPrint(); // Interrupt main() by making a function call to doPrint(). main() is the caller
// 	std::cout << "Ending main()" << std::endl;
// 
// 	return 0;
// }

// int means a function returns an integer value to the caller
// int return5()
// {
// 	// This function returns an integer, so a return statement is needed
// 	return 5; // we're going to return integer value 5 back to the caller of this function
// }
// 
// int main()
// {
// 	std::cout << return5() << std::endl; // prints 5
// 	std::cout << return5() + 2 << std::endl; // prints 7
// 
// 	return5(); // okay: the value 5 is returned, but it is ignored since main() doesn't do anything with it
// 
// 	return 0;
// }

// void returnNothing()
// {
// 	std::cout << "Hi" << std::endl;
// 	// this function does not return a value so no return statement is needed.
// }
// 
// int main()
// {
// 	returnNothing(); // function returnNothing() is called, no return value is returned
// 
// 	// std::cout << returnNothing(); // error: this line will not compile. YOu need to comment it out to continue
// 
// 	return 0;
// }

// REUSING FUNCTIONS
// int getValueFromUser()
// {
// 	std::cout << "Enter an integer: "; // ask user for an integer
// 	int a; // allocate a variable to hold the user input
// 	std::cin >> a; // get user input from console and store in variable a
// 	return a; // return this value to the function's caller (main)
// }
// 
// int main()
// {
// 	int x = getValueFromUser(); // first call to getValueFromUser()
// 	int y = getValueFromUser(); // second call to getValueFromUser()
// 
// 	std::cout << x << " + " << y << " = " << x + y << std::endl;
// 
// 	return 0;
// }

// ANY FUNCTION CAN CALL ANOTHER FUNCTION
// void printA()
// {
// 	std::cout << "A" << std::endl;
// }
// 
// void printB()
// {
// 	std::cout << "B" << std::endl;
// }
// 
// // function printAB() calls both printA() and printB()
// void printAB()
// {
// 	printA();
// 	printB();
// }
// 
// int main()
// {
// 	std::cout << "Starting main()" << std::endl;
// 	printAB();
// 	std::cout << "Enidng main()" << std::endl;
// 	return 0;
// }

// NESTED FUNCTIONS
// functions can not be defined inside other functions (nested) in c++. the following program is not legal
int main()
{
	void foo() // this function is nested inside main which is illegal
	{
		std::cout << "foo" << std::endl;
	}

	foo();
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
