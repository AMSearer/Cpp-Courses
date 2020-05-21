/*
 * printAddress.cpp
 *
 * Write a C++ program that uses a pointer to print out the address of a variable and the value of a variable that it points too
 *
 *  Created on: Dec 4, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int main()
{
	int var = 13;
	int* ptr = &var;

	cout << ptr << endl;
	cout << *ptr << endl;

	return 0;
}


