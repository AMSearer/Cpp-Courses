/*
 * MidterReview.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int main()
{
	float total = 0;
	float input = 0;
	float average = 0;

	cout << "Please enter 4 numbers and we will compute the average. \n";

	for (int i = 0; i < 4; i++)
	{
		cout << "Please enter your number: \n";

		cin >> input;

		total += input;
	}

	average = total / 4;

	cout << "The average of the 4 numbers is: " << average;

	return 0;
}


