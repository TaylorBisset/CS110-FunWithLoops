#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	// Problem 1: Print the numbers 10 to 1 with a space between each number.
	
	cout << "Problem 1: Print the numbers 10 to 1 with a space between each number.\n\n";

	for (int y = 10; y >= 1; y--)
	{
		cout << y << " ";
	}

	cout << endl << endl << "------------------------------" << endl << endl;

	// Problem 2: Parrot: Echo the user's input until the user enters nothing. Included <string> for getline().

	cout << "Problem 2: Parrot: Echo the user's input until the user enters nothing.\n\n";

	string parrot = "Parrot";

	while (parrot != "")
	{
		cout << "You     : ";
		getline(cin, parrot);
		cout << "Parrot  : " << parrot << endl;
	}
	
	cout << endl << "------------------------------" << endl << endl;

	// Problem 3: Print all the words to the song "99 Bottles of Beer".

	cout << "Problem 2: Print all the words to the song '99 Bottles of Beer.'\n\n";

	int beerBottles = 99;

	while (beerBottles > 1)
	{
		cout << beerBottles << " bottles of beer on the wall,\n" << beerBottles << " bottles of beer!\n";
		cout << "Take one down, pass it around,\n";
		--beerBottles;
	}
	while (beerBottles == 1)
	{
		cout << beerBottles << " bottle of beer on the wall,\n" << beerBottles << " bottle of beer!\n";
		cout << "Take one down, pass it around,\n";
		--beerBottles;
	}
	cout << "No more bottles of beer on the wall!\n";

	cout << endl << "------------------------------" << endl << endl;

	// Problem 4: Print all the powers of 2 that are less than 5000.

	cout << "Problem 4: Print all the powers of 2 that are less than 5000.\n\n";

	int numPow = 1;
	int numOut = 2;
	while (numOut < 5000)
	{
		cout << numOut << endl;
		numOut = pow(2, numPow++);
	}

	cout << endl << "------------------------------" << endl << endl;

	// Problem 5: Print backwards all the positive even integers starting with 100.

	cout << "Problem 5: Print backwards all the positive even integers starting with 100.\n\n";

	int countDownEvens = 100;

	do
	{
		cout << countDownEvens << endl;
		countDownEvens -= 2;
	} while (countDownEvens >= 2);

	cout << endl << "------------------------------" << endl << endl;

	/*
		Problem 6: Print the numbers 1 through 10 on one line, with a comma after
		each except the last value, which should have a period after it.

		Expected outcome:
			1, 2, 3, 4, 5, 6, 7, 8, 9, 10.

		Use a loop so that you can change a single number in your code
		to print this same list from 1 to 20 or 1 to 80 instead.
	*/

	int countUpList = 1;
	int countUpMax = 10;	// Change this value to increase list.

	cout << "Problem 6: Print the numbers 1 through 10 on one line as a list.\n\n";

	while (countUpList <= countUpMax)
	{
		cout << countUpList;
		if (countUpList < countUpMax)
		{
			cout << ", ";
		}
		countUpList++;
	}
	cout << ".\n";

	cout << endl << "------------------------------" << endl << endl;

	/*	Problem 7: Ask the user to enter an integer between 1 and 10.

		If the user enters a number out of range, keep asking until the user enters valid input,
		no matter how many times they get it wrong or what sorts of mistakes they make.

		Then print the entered number. 
		
		(Challenge: You print the prompt that asks the
		user to enter a number in only one place in your code.)
	*/

	cout << "Problem 7: Ask user for integer between 1 and 10, then print it only if input is within range.\n\n";

	int userInputRanged = 11;

	cout << "Please enter an integer (a whole number) between 1 and 10: \n";

	while (userInputRanged > 10 || userInputRanged < 1)
	{
		cin >> userInputRanged;
	}
	cout << userInputRanged << " is within the given range.\n";

	cout << endl << "------------------------------" << endl << endl;


	/*
		I need to figure out how to check if the user input is an ineger and not a float.
	*/


	// Problem 8: Hi-Lo number game. 
	/*
		The computer randomly picks an int between 1 and 100 
		and then tells the user whether each guess is too high or low 
		until the user guesses the number correctly
	*/

	cout << "Problem 8: Hi-Lo number game.\n\n";

	int userGuess = 101;
	int secretNum = 50;

	srand(time(NULL));	// initialize ramdom seed
	secretNum = rand() % 100 + 1;	// generate secret number between 1 and 100

	cout << "Guess a number between 1 and 100.\n";

	while (userGuess != secretNum)
	{
		cin >> userGuess;
		if (userGuess < secretNum)
		{
			cout << "\nToo low. Guess again.\n";
		}
		else if (userGuess > secretNum)
		{
			cout << "\nToo high. Guess again.\n";
		}
	}
	cout << "\nCongratulations! The secret number was " << secretNum << "!\n";

	cout << endl << "------------------------------" << endl << endl;

	// Problem 9: Print ASCII conversion table for lowercase letters.
	// (Hint: int letter = 'a'; letter++;)

	cout << "Problem 9: ASCII conversion table for lowercase letters.\n\n";

	int letterInt = 'a';
	char letterChar = 'a';
	while (letterInt != 'z')
	{
		cout << setw(8) << letterInt << " = " << letterChar << endl;
		letterInt++;letterChar++;
	}

	cout << endl << "------------------------------" << endl << endl;

	/* 
		Problem 10: Print the full lyrics of the song "12 Days of Christmas".
		(Hint: a fall-thru switch)

		In your program, you can only have the words to each verse one time. 
		No copying and pasting the same verse many times within your program.
	*/

	cout << "Problem 10: Print the full lyrics of the song '12 Days of Christmas.'\n\n";

	string verse12 = "Twelve drummers drumming\n";
	string verse11 = "Eleven pipers piping\n";
	string verse10 = "Ten lords a-leaping\n";
	string verse9  = "Nine ladies dancing\n";
	string verse8  = "Eight maids a-milking\n";
	string verse7  = "Seven swans a-swimming\n";
	string verse6  = "Six geese a-laying\n";
	string verse5  = "Five golden rings\n";
	string verse4  = "Four calling birds\n";
	string verse3  = "Three french hens\n";
	string verse2  = "Two turtle doves, and\n";
	string verse1  = "A partridge in a pear tree.";

	int dayXmas = 1;
	string dayString = "first";

	if (dayXmas == 1)  { dayString = "first"; }
	if (dayXmas == 2)  { dayString = "second"; }
	if (dayXmas == 3)  { dayString = "third"; }
	if (dayXmas == 4)  { dayString = "fourth"; }
	if (dayXmas == 5)  { dayString = "fifth"; }
	if (dayXmas == 6)  { dayString = "sixth"; }
	if (dayXmas == 7)  { dayString = "seventh"; }
	if (dayXmas == 8)  { dayString = "eighth"; }
	if (dayXmas == 9)  { dayString = "ninth"; }
	if (dayXmas == 10) { dayString = "tenth"; }
	if (dayXmas == 11) { dayString = "eleventh"; }
	if (dayXmas == 12) { dayString = "twelfth"; }

	switch (dayXmas)
	{
	case 12:
		cout << verse12;
	case 11:
		cout << verse11;
	case 10:
		cout << verse10;
	case 9:
		cout << verse9;
	case 8:
		cout << verse8;
	case 7:
		cout << verse7;
	case 6:
		cout << verse6;
	case 5:
		cout << verse5;
	case 4:
		cout << verse4;
	case 3:
		cout << verse3;
	case 2:
		cout << verse2;
	case 1:
		cout << verse1;
	}

}
