#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Problem 1: Print the numbers 10 to 1 with a space between each number.
	
	cout << "Problem 1: Print the numbers 10 to 1 with a space between each number.\n\n";

	for (int y = 10; y >= 1; y--)
	{
		cout << y << " ";
	}

	cout << endl << "------------------------------" << endl;

	// Problem 2: Parrot: Echo the user's input until the user enters nothing.

	cout << "Problem 2: Parrot: Echo the user's input until the user enters nothing.\n\n";

	string parrot = "Parrot";

	while (parrot != "")
	{
		cout << "You     : ";
		getline(cin, parrot);
		cout << "Parrot  : " << parrot << endl;
	}
	
	cout << endl << "------------------------------" << endl;

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

	cout << endl << "------------------------------" << endl;
}
