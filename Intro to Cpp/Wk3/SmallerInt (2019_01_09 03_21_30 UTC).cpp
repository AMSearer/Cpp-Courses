/*
 * SmallerInt.cpp
 *
 *  Created on: Sep 16, 2018
 *      Author: amsea
 */

#include <iostream>

using namespace std;

int main()
{
	int int1;
	int int2;

	cout << "Please enter the first integer: " << endl;

	cin >> int1;

	cout << "Please enter the second integer: " << endl;

	cin >> int2;

	if (int1 < int2)
		cout << "The first integer input: " << int1 << ", is the smaller of the two." << endl;
	else if (int2 < int1)
		cout << "The second integer input: " << int2 << ", is the smaller of the two." << endl;
	else
		cout << "The integers are equal." << endl;

	return 0;

}
