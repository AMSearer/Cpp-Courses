/*
 * 5ptGrade.cpp
 *
 * Write a program in C++ that gives the letter grade for a 5 point quiz, the user enters 0 - 5
 *  and the program outputs a letter grade, make sure you use a switch statement.
 *
 *  Created on: Dec 4, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int main()
{
	int input;

	cout << "We will give you a letter grade for a 5 point quiz." << endl <<
			"Enter a value from 0 to 5 :" << endl;

	cin >> input;

	switch (input) {
		case 0:
			cout << "F" << endl;
			break;
		case 1:
			cout << "F" << endl;
			break;
		case 2:
			cout << "D" << endl;
			break;
		case 3:
			cout << "C" << endl;
			break;
		case 4:
			cout << "B" << endl;
			break;
		case 5:
			cout << "A" << endl;
			break;
		default:
			cout << "Plese enter a valid number." << endl;
			break;
	}

	return 0;
}


