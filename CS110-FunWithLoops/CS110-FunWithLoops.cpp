#include <iostream>
#include <string>
#include <cmath>

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
}
