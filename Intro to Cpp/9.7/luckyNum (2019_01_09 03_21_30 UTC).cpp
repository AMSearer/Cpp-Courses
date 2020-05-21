/*
 * luckyNum.cpp
 *
 *  Ask the user to enter their lucky number and then ask if the user would like to change it (use a while).
 *
 *  Created on: Dec 3, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int main()
{
	int lucky;
	char answer;

	cout << "What is your lucky number? " << endl;
	cin >> lucky;

	while(true)
	{
		cout << "Would you like to change you lucky number?" << endl << endl << "Enter y/n (Enter anything else to stop)" << endl;

		cin >> answer;

		if (answer == 'y')
		{
			cout << endl << "What would you like to change you lucky number to?" << endl;
			cin >> lucky;
			cout << "Your lucky number is now " << lucky << endl;
		}
		else if (answer == 'n')
			cout << "Your lucky number is still " << lucky << endl;
		else
			break;

	}

	return 0;
}


