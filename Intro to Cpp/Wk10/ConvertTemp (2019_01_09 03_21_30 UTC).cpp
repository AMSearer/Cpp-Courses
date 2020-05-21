/*
 * ConvertTemp.cpp
 *
 *  Created on: Nov 16, 2018
 *      Author: amsea
 */


#include <iostream>
using namespace std;

float convertCtoF(float celsius)
{
	float fahrenheit;

	fahrenheit = celsius * (9.0/5.0) + 32;

	return fahrenheit;
}

int main()
{
	float celsiusIn;
	float fahrenheit;

	cout << "Please enter the temperature you would like to convert to Fahrenheit: " << endl;

	cin >> celsiusIn;

	fahrenheit = convertCtoF(celsiusIn);

	cout << "The temperature in Fahrenheit is " << fahrenheit << "degrees Fahrenheit. " << endl;


	return 0;
}
