/*
 * small2Ints.cpp
 *
 * Find the smallest of two integers input
 *
 *  Created on: Dec 3, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int main()
{
	int smaller, input;

	cout << "Enter two integers and we will tell you which is smaller. " << endl;

	cin >> input;
	smaller = input;

	cin >> input;

	if (input < smaller)
		smaller = input;

	cout << "The smaller of the two numbers is " << smaller << endl;

	return 0;
}


