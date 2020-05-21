/*
 * larger.cpp
 *
 *  Created on: Nov 16, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int larger (int a, int b)
{

	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}

}


int test()
{
	int a;
	int b;
	int greater;

	cout << "Please enter the first integer: ";
	cin >> a;

	cout << "Please enter the second integer: ";
	cin >> b;

	greater = larger(a, b);

	cout << "The larger integer is " << greater << ".";

	return 0;

}

