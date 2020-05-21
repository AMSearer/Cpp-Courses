/*
 * pt2ptPrint.cpp
 *
 * Write a C++ program that has a pointer A pointing to another pointer B that points to a value. Print out the value using pointer A.
 *
 *  Created on: Dec 4, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int main()
{
	double var = 11.2;
	double* ptrB = &var;
	double** ptrA = &ptrB;

	cout << "Test - var  " << var << endl;
	cout << "Test - ptrB  " << *ptrB << endl;
	cout << "Test - ptrA  " << **ptrA << endl;

	cout << **ptrA;

	return 0;
}
