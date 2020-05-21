/*
 * average3.cpp
 *
 * Find the average of 3 numbers input
 *
 *  Created on: Dec 3, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	float sum, average;

	cout << "Enter three integers, and we will tell you their average." << endl << endl;

	cin >> a;
	cin >> b;
	cin >> c;

	sum = a + b + c;
	average = sum / 3.0;

	cout << "The average of the numbers entered is " << average;

	return 0;
}


