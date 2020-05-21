/*
 * findMax.cpp
 *
 * Write  C++ program that calls a function findarrmax which passes an array to a function
 *  and the function searches through the array to find the max value, it then returns the max value.
 *
 *
 *  Created on: Dec 4, 2018
 *      Author: amsea
 */

#include <iostream>
#include <array>
using namespace std;

int findArrMax (int input[], int size)
{
	int max = input[0];

	for (int i = 1; i < size; i++)
	{
		if (input[i] > max)
			max = input[i];
	}

	return max;
}

int main()
{
	int size = 5;
	int array[size] = {3, 56, 76, 32, 90};
	int max;

	max = findArrMax(array, size);

	cout << "The max value in the array is " << max;

	return 0;
}



