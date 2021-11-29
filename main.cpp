/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Koby Montenegro
 */

#include "header.h"

int main()
{
	int input = 0;
	std::cout << "Please enter an integer: ";
	std::cin >> input;

    //Use a modulo to check whether a number is odd or even
    //Check for even first
	if (input%2 == 0)
	{
	std::cout << "The value " << input << " is an even number\n";
	}
	else
	{
	std::cout << "The value " << input << " is an odd number\n";
	}

	return input;
}