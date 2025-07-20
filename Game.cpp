#include "Game.h"
#include "Hangman.h"
#include <iostream>
using namespace std;

void Game::playGame()
{
	cout << " Welcome to Hangman Game!"<<'\n';
	cout << " Category: Fruits" << '\n';
	Hangman h;
	cout << " You have " << h.getNoOfAttempts() << " attemts Left to guess the fruit name. " << '\n';
	do
	{
		// loop continue until the all attempts run away

		h.displayGameInfo();

		// getting guess letter from the user
		char guess;
		cout << " Enter your guess : ";
		cin >> guess;

		if (isalpha(guess))
		{
			guess = tolower(guess);
			if (h.isAlreadyGuessed(guess))
			{
				cout << " This character is already guessed. " << '\n';
			}
			else
			{
				bool isCorrectGuess = h.updateCurrentWord(guess);
				if (isCorrectGuess)
				{
					cout << " Good Guess :-D"<<'\n';
					if (h.isUserGuessedTheWord())
					{
						cout << " Congratulations!  you guessed the word. " << '\n';
						return;
					}
				}
				else
				{
					cout << " Incorrect Guess! " << '\n';
					h.drawHangman();
				}
			}
		}
		if (h.getNoOfAttempts() == 0 && ! h.isUserGuessedTheWord()) 
		{
			// if all attemps run out
			h.displayGameInfo();
			cout << "You've run out of attempts.\n The word " "was: " << h.getSecretWord() << '\n';
			h.drawHangman();
		}

	} while (h.getNoOfAttempts() != 0);

}
