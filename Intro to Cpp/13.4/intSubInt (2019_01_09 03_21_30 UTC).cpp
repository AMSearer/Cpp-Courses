/*
 * intSubInt.cpp
 *
 * Write a C++ program that inputs two integers then calls a function subtract,
 * use pass by reference and allow the user to change his/her input values,
 * then subtract the two numbers and return the difference.
 *
 *  Created on: Dec 4, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;


int subtract(int* a, int* b)
{
	int x, y;
	char response;

	x = *a;
	y = *b;

	cout << "The equation we will process is: " << endl <<
			*a << " - " << *b << endl <<
			"Would you like to change it? y/n" << endl;

	cin >> response;

	if (response == 'y')
	{
		cout << "Would you like to change a? y/n" << endl;
		cin >> response;

		if (response == 'y')
		{
			cout << "What would you like to change a to?" << endl;
			cin >> x;
		}

		cout << "Would you like to change b? y/n" << endl;
		cin >> response;

		if (response == 'y')
		{
			cout << "What would you like to change b to?" << endl;
			cin >> y;
		}
	}

	int answer = x - y;

	cout << x << " - " << y << " = ";

	return answer;
}


int main()
{
	int in1, in2;
	int* a;
	int* b;
	int c;

	cout << "We will subtract two integers for you in the form of a - b." << endl <<
			"Please enter a: " << endl;
	cin >> in1;
	cout << "Please enter b: " << endl;
	cin >> in2;

	a = &in1;
	b = &in2;

	c = subtract(a, b);

	cout << c;

	return 0;
}






