/*
 * Square.cpp
 *
 *  Created on: Sep 9, 2018
 *      Author: amsea
 */

#include <iostream>

using namespace std;

int main()
{
	float sideLength;
	float area;

	cout << "Please input the side length of the square and we will calculate the area." << endl;

	cin >> sideLength;

	area = sideLength * sideLength;

	cout << "The area of your square is: " << area;

	return 0;
}


