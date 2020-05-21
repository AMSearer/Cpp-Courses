/*
 * tenOnes.cpp
 *
 * Output an array of ten ones, make sure you use a for loop.
 *
 *  Created on: Dec 4, 2018
 *      Author: amsea
 */


#include <iostream>
using namespace std;

int main()
{
	int array[10];

	for (int i = 0; i < 10; i++)
	{
		array[i] = 1;
	}


	for (int i = 0; i < 10; i++){
		if (i == 0)
			cout << "[" << array[i] << ", ";
		else if (i == 9)
			cout << array[i] << "]" << endl;
		else
			cout << array[i] << ", ";
	}

	return 0;
}




