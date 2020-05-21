/*
 * divisible5.cpp
 *
 *	Determine if the input integer is a multiple of 5 (use % modulus operator)
 *
 *  Created on: Dec 3, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int  main()
{
	int input;

	cout << "Enter an integer, and we'll tell you if it is divisible by 5." << endl << endl;

	cin >> input;

	if (input % 5 == 0)
		cout << input << " is divisible by 5!" << endl << endl;
	else
		cout << input << " is not divisible by 5!" << endl << endl;

	return 0;
}
