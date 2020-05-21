/*
 * decPtr.cpp
 *
 * Write a c++ program that creates a decimal pointer, creates a variable set to a decimal value,
 * then assigns the address of the variable to the pointer.
 * User the pointer to print out the address and the value being pointed to by the pointer.
 *
 *  Created on: Dec 4, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int main()
{

	float dec;
	float* decPtr;

	dec = 13.5;
	decPtr = &dec;

	cout << "The address for the decimal variable is: " << decPtr << endl <<
			"The value of the decimal variable is: " << *decPtr;

	return 0;
}





