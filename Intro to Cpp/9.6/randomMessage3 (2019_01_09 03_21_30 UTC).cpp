/*
 * randomMessage3.cpp
 *
 *  Create a random number from 1 to 3, and have a message displayed for each value
 *
 *
 *  Created on: Dec 3, 2018
 *      Author: amsea
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int rnd = rand();
	int  random =  (rnd % 3 + 1);



	switch (random)
	{
		case 1:
			cout << "One for the money" << endl;
			break;
		case 2:
			cout << "Two for the show" << endl;
			break;
		case 3:
			cout << "Three for something or other..." << endl;
			break;
		default:
			cout << "Noone's Here." << endl;
			break;
	}

	return 0;
}


