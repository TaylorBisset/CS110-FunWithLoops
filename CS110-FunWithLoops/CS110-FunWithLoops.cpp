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

	cout << endl << endl;

	// Problem 2: Parrot: Echo the user's input until the user enters nothing.

	cout << "Problem 2: Parrot: Echo the user's input until the user enters nothing.\n\n";

	string parrot = "Parrot";

	while (parrot != "")
	{
		cout << "You     : ";
		getline(cin, parrot);
		cout << "Parrot  : " << parrot << endl;
	}
	
	cout << endl << endl;
}
