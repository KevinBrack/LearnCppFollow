// Comments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	std::cout << "Hello world!" << std::endl; // cout and endl live in the iostream library
	std::cout << "It is very nice to meet you!" << std::endl; // these comments make the code hard to read
	std::cout << "Yeah!" << std::endl;

	// cout and endl live in the iostream library
    std::cout << "Hello World!" << std::endl; 

	// this is much easier to read
	std::cout << "It is very nice to meet you!" << std::endl;

	// dont you think so
	std::cout << "Yeah!" << std::endl;

	/* This is a multi-line comment .
	   This line will be ignored.
	   So will this one. */

	/* This is a multi-line comment.
	 * The matching asterisks to the left
	 * can make this easier to read
	 */

	// This program calculates the student's final grade based on his test and homework scores
	// This function uses newton's method to approximate the root of a given equasion
	// The following lines generate a random item based on rarity, level, and weight factor

	/* To calculate the final grade, we sum all the weighted midterm and homework scores
		and then divide the number of scores to assign a percentage. This percentage
		is used to calculate a letter grade. */

	// To generate a random item, we are going to do the following:
	// 1) Put all of the items of the desired rarity in a list
	// 2) Calculate a probability for each item based on level and weight factor
	// 3) Choose a random number
	// 4) Figure out which item that random number corresponds to
	// 5) Return the appropriate item

	// uncommented out
	std::cout << 1 << std::endl;

	// commented out
	// std::cout << 1 << std::endl;
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
