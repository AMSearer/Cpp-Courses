/*
 * GuessANumber.cpp
 *
 *  Created on: Sep 23, 2018
 *      Author: amsea
 */

#include <iostream>

using namespace std;

int main()
{
	const int ANSWER = 1;
	int guess;

	cout << "Welcome to \"Guess a Number!\"" << endl;
	cout << "Please guess a number from one to five: " << endl;

	cin >> guess;

	switch (guess)
	{
		case 1:
			cout << "One for the money" << endl;
			if (ANSWER == guess) cout << endl << "Congratulations! You guessed correctly!" << endl;
			break;
		case 2:
			cout << "Two for the show" << endl;
			if (ANSWER == guess) cout << endl << "Congratulations! You guessed correctly!" << endl;
			break;
		case 3:
			cout << "Three to get ready" << endl;
			if (ANSWER == guess) cout << endl << "Congratulations! You guessed correctly!" << endl;
			break;
		case 4:
			cout << "And four to go" << endl;
			if (ANSWER == guess) cout << endl << "Congratulations! You guessed correctly!" << endl;
			break;
		case 5:
			cout << "But five is just right out" << endl;
			if (ANSWER == guess) cout << endl << "Congratulations! You guessed correctly!" << endl;
			break;
	}

	return 0;
}


