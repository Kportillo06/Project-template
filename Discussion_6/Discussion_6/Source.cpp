#include <iostream>
#include <string>
using namespace std;

int main()
{

	//constants for menu choic
	int choice;
	const int thriller = 1;
	const int horror = 2;
	const int romance = 3;
	const int comedy = 4;


	//Display menu
	cout << "What is your favorite Genre to watch?\n";
	cout << "Choose your favorite genre and I will recommend a movie or show:\n";
	cout << "----Menu----\n";
	cout << "1. Thriller\n";
	cout << "2. Horror\n";
	cout << "3. Romance\n";
	cout << "4. Comedy\n";
	cin >> choice;

	//Display output
	switch (choice)
	{
	case thriller: cout << "If you like thriller, you should watch: Squid Game\n";
		break;
	case horror: cout << "If you like horror, you should watch: The Conjuring: The Devil Made Me Do It\n";
		break;
	case romance: cout << "If you like romance, you should watch: 10 Things I Hate About You \n";
		break;
	case comedy: cout << "If you like comedy, you should watch: Superbad \n";
		break;
	default: cout << "You did not enter a number between 1 and 4\n";
		break;
	}

	
	system("pause");
	return 0;
}