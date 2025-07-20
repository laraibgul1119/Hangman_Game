#include "Hangman.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int Hangman :: noOfAttemps = 6;
vector <string> Hangman::availableWords = { "apple", "mango", "orange", "berry", "date", "melon" };

Hangman::Hangman()
{
	secretWord = getRandomWord();
	currentWord = string(secretWord.length(), '-');
}

int Hangman::getNoOfAttempts()
{
	return noOfAttemps;
}

string Hangman::getRandomWord()
{
	srand(time(0));
	int index = rand() % availableWords.size();
	return availableWords[index];
}

bool Hangman::isAlreadyGuessed(char letter)
{
	return (find(guessedCharacters.begin(), guessedCharacters.end(), letter) != guessedCharacters.end());
}

bool Hangman::updateCurrentWord(char letter)
{
	bool isCorrctGuess = false;
	 // if it does not fine the character then it will return the pointer of value after last value
	if (find(secretWord.begin(), secretWord.end(), letter) != secretWord.end())
	{
		for (int i = 0; i < secretWord.length(); i++)
		{
			if (secretWord[i] == letter)
			{
				currentWord[i] = letter;
				isCorrctGuess = true;
			}
		}
	}
	guessedCharacters.push_back(letter);
	noOfAttemps--;
	return isCorrctGuess;
}

bool Hangman::isUserGuessedTheWord()
{
	return currentWord == secretWord;
}

void Hangman::displayGameInfo()
{
	cout << '\n';
	cout << " Word: " << currentWord << '\n';
	cout << " Total attempts Left: " << noOfAttemps << '\n';
}

void Hangman::drawHangman()
{
	switch (noOfAttemps)
	{
	case 5:
		cout << "   _____" << '\n';
		cout << "  |     |" << '\n';
		cout << "  |     O" << '\n';
		cout << "  |" << '\n';
		cout << "  |" << '\n';
		cout << "  |" << '\n';
		cout << "  |" << '\n';
		break;
	case 4:
		cout << "   _____" << '\n';
		cout << "  |     |" << '\n';
		cout << "  |     O" << '\n';
		cout << "  |     |" << '\n';
		cout << "  |" << '\n';
		cout << "  |" << '\n';
		cout << "  |" << '\n';
		break;
	case 3:
		cout << "   _____" << '\n';
		cout << "  |     |" << '\n';
		cout << "  |     O" << '\n';
		cout << "  |    /|" << '\n';
		cout << "  |" << '\n';
		cout << "  |" << '\n';
		cout << "  |" << '\n';
		break;
	case 2:
		cout << "   _____" << '\n';
		cout << "  |     |" << '\n';
		cout << "  |     O" << '\n';
		cout << "  |    /|\\" << '\n';
		cout << "  |" << '\n';
		cout << "  |" << '\n';
		cout << "  |" << '\n';
		break;
	case 1:
		cout << "   _____" << '\n';
		cout << "  |     |" << '\n';
		cout << "  |     O" << '\n';
		cout << "  |    /|\\" << '\n';
		cout << "  |    /" << '\n';
		cout << "  |" << '\n';
		cout << "  |" << '\n';
		break;
	case 0:
		cout << "   _____" << '\n';
		cout << "  |     |" << '\n';
		cout << "  |     O" << '\n';
		cout << "  |    /|\\" << '\n';
		cout << "  |    / \\" << '\n';
		cout << "  |" << '\n';
		cout << "  |" << '\n';
		break;
	}
}

string Hangman::getSecretWord()
{
	return secretWord;
}
