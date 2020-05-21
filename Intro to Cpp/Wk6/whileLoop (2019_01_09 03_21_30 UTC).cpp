/*
 * whileLoop.cpp
 *
 *  Created on: Oct 4, 2018
 *      Author: amsea
 */

#include <iostream>
using namespace std;

int main ()
{
	int rightAge = 62;
	int guess;
	string guessAgain = "yes";

	cout << "Can you guess the age of Bill Gates? \n";

	while (guessAgain == "yes")
	{
		cout << "What's your guess? \n";
		cin >> guess;
		if (guess == "quit")
			break;
		if (guess == rightAge)
		{
			cout << "You guessed it! \n";
		}
		else
		{
			cout << "Sorry, not this time. \n";
			cout << "Would you like to guess again? \n";
			cin >> guessAgain;
		}
	}

	return 0;
}



