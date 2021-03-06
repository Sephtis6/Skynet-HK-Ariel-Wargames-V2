// Merlin Call Skynet HK WargamesV1.cpp : Defines the entry point for the console application.
//Guess My number
//THe classic number guessing game

//line told to add/starting included line
#include "stdafx.h"

//includes iostream, cstdlib, and ctime tio the program code
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

//lets the code know that we are using the namespace std
using namespace std;

//main role of the program
int main()
{
	//seed random number generator
	srand(static_cast<unsigned int>(time(0)));

	//random number between 1 and 64
	//enemy location = secretNumber
	//the tries for each player
	int secretNumber = rand() % 64 + 1;
	int playertries = 0;
	int binarytries = 0;
	int randomtries = 0;
	int lineartries = 0;

	//integers naming the highest and lowest guess
	int highestguess = 64;
	int lowestguess = 0;

	//integer named type of search for the guesses
	int playerNumber;
	int binaryNumber;
	int randomNumber;
	int linearNumber = 0;

	//types out the opening lines
	cout << "Welcome to Skynet HK-Ariel Wargames\n";
	cout << "Initializing Skynet HK-Ariel Wargames training program.\n";
	cout << "The goal is to find the enemy before your AI opponents.\n";
	cout << "Generating random enemy location to find.\n";
	//cout << "The enemy is located at " << secretNumber << " on an 8x8 grid.\n\n\n";

	//does depending on what the cope prints out
	//human search function
	do
	{
		//asking for the player to enter a number and add 1 to their tries
		cout << "Enter a grid square to search.(1-64)\n";
		cin >> playerNumber;
		++playertries;

		//does something if the palyerNumber > secretNumber
		if (playerNumber > secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "The Skynet Hk-Player has not found it's target! (too high)\n";
			cout << "Grid square searched " << playerNumber << "\n\n";
		}
		//does something if the playerNumber < secretNumber
		else if (playerNumber < secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "The Skynet Hk-Player has not found it's target! (too low)\n";
			cout << "Grid square searched " << playerNumber << "\n\n";
		}

		//does something if not one of the two previous statements
		else
		{
			//prints out that the computers guess was right and what the number was and how many tries it wook
			cout << "The Hk-Player has found it's target! They are in grid space " << secretNumber << " and took " << playertries + 1 << " tries\n\n\n";
		}
		//this states that while playerNumber != secretNumber
	} while (playerNumber != secretNumber);

	//binary search function
	do
	{
		//random number between the integers of highest and lowest guess
		binaryNumber = ((highestguess - lowestguess) / 2) + lowestguess;

		//does something if the binaryNumber > secretNumber
		if (binaryNumber > secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "The Skynet Hk-Binary has not found it's target! (too high)\n";
			cout << "Grid square searched " << binaryNumber << "\n\n";
			highestguess = binaryNumber;
			++binarytries;
		}
		//does something if the binaryNumber < secretNumber
		else if (binaryNumber < secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "The Skynet Hk-Binary has not found it's target! (too low)\n";
			cout << "Grid square searched " << binaryNumber << "\n\n";
			lowestguess = binaryNumber;
			++binarytries;
		}

		//does something if not one of the two previous statements
		else
		{
			//prints out that the computers guess was right and what the number was and how many tries it wook
			cout << "The Hk-Binary has found it's target! They are in grid space " << secretNumber << " and took " << binarytries + 1 << " tries\n\n\n";
		}
		//this states that while binaryNumber != secretNumber
	} while (binaryNumber != secretNumber);

	//random search function
	do
	{
		//random number between 0 and 64
		randomNumber = rand() % 64 + 1;

		//does something if the randomNumber > secretNumber
		if (randomNumber > secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "The Skynet Hk-Random has not found it's target! (too high)\n";
			cout << "Grid square searched " << randomNumber << "\n\n";
			++randomtries;
		}
		//does something if the randomNumber < secretNumber
		else if (randomNumber < secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "The Skynet Hk-Random has not found it's target! (too low)\n";
			cout << "Grid square searched " << randomNumber << "\n\n";
			++randomtries;
		}

		//does something if not one of the two previous statements
		else
		{
			//prints out that the computers guess was right and what the number was and how many tries it wook
			cout << "The Hk-Random has found it's target! They are in grid space " << secretNumber << " and took " << randomtries + 1 << " tries\n\n\n";
		}
		//this states that while randomNumber != secretNumber
	} while (randomNumber != secretNumber);

	//linear search function
	do
	{
		//started off with thte number 1 and keeps adding 1 till it hits the number
		linearNumber = linearNumber + 1;

		//does something if the randomNumber > secretNumber
		if (linearNumber > secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "The Skynet Hk-Linear has not found it's target! (too high)\n";
			cout << "Grid square searched " << linearNumber << "\n\n";
			++lineartries;
		}
		//does something if the randomNumber < secretNumber
		else if (linearNumber < secretNumber)
		{
			//prints out whether the guess is to low and the number it guessed and whether the targets where there or not
			//then resets the ranges to reflect based on the previous guess whether it was higher or lower
			cout << "The Skynet Hk-Linear has not found it's target! (too low)\n";
			cout << "Grid square searched " << linearNumber << "\n\n";
			++lineartries;
		}

		//does something if not one of the two previous statements
		else
		{
			//prints out that the computers guess was right and what the number was and how many tries it wook
			cout << "The Hk-Linear has found it's target! They are in grid space " << secretNumber << " and took " << lineartries + 1 << " tries\n\n\n";
		}
		//this states that while randomNumber != secretNumber
	} while (linearNumber != secretNumber);

	//lists the "scores" of each player
	do {
		//lists the game has ended and what the location was and in how many tries each player took
		cout << "All Skynet HK's have found the targets.\n";
		cout << "The enemy was located at " << secretNumber << " on an 8x8 grid.\n\n";
		cout << "The Hk-Player has found it's target! They are in grid space " << secretNumber << " and took " << playertries + 1 << " tries\n\n";
		cout << "The Hk-Binary has found it's target! They are in grid space " << secretNumber << " and took " << binarytries + 1 << " tries\n\n";
		cout << "The Hk-Random has found it's target! They are in grid space " << secretNumber << " and took " << randomtries + 1 << " tries\n\n";
		cout << "The Hk-Linear has found it's target! They are in grid space " << secretNumber << " and took " << lineartries + 1 << " tries\n\n";
		cout << "The player with the less amount of guesses used is the winner\n\n";

		//asks if the player wants to play again
		cout << "Do you want to play again? Y/N\n\n";
		if (GetAsyncKeyState('Y'))
		{
			return 1;
		}
		if (GetAsyncKeyState('N'))
		{
			return 0;
		}
	} while (playerNumber, binaryNumber, randomNumber, linearNumber != secretNumber);


	//this will pause the system so you can see the printed info
	system("pause");

	//thi causes the execution to leave the current subrutine
	return 0;
}