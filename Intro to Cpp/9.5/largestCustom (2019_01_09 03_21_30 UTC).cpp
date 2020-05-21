/*
 *  largestCustom.cpp
 *
 * Ask the user how many numbers he or she wants to input and then find the largest of these numbers
 *
 *  Created on: Dec 3, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int main()
{
	int input, largest, iterations;

	cout << "We will tell you the largest of the integers you input." << endl;
	cout << "How many integers do you have? " << endl;

	cin >> iterations;

	cout << "After each integer hit \"Enter.\"" << endl;

	largest = 0;

	for (int i = 0; i < iterations; i++)
	{
		cin >> input;

		if (input > largest)
			largest = input;
	}

	cout << "The largest number entered was: " << largest << endl;

	return 0;
}


