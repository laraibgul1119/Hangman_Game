#ifndef HANGMAN_H
#define HANGMAN_H

#include <string>
#include <vector>
using namespace std;

class Hangman
{
	static int noOfAttemps;
	static vector <string> availableWords;
	string secretWord;
	string currentWord;
	vector <char> guessedCharacters;

public:
	Hangman();
	int getNoOfAttempts();
	string getRandomWord();
	bool isAlreadyGuessed(char letter);
	bool updateCurrentWord(char letter);
	bool isUserGuessedTheWord();
	void displayGameInfo();
	void drawHangman();
	string getSecretWord();

};
#endif // !HANGMAN_H
