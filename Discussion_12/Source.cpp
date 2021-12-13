#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare array of const size 4
	const int SIZE = 4;
	string favorite_shows[SIZE] = {"Freaks and geeks", "Shameless", "Stranger Things", "Ratched"};                            
	string favorite_movies[SIZE] = {"Moonrise Kingdom", "Heathers", "Submarine", "1917"};

	cout << "Some of my favorite shows are: " << endl;
	//display shows using range-based for loop
	for (string shows: favorite_shows)
		cout << shows << endl;
	cout << " " << endl;
	//display movies using range-based for loop
	cout << "Some of my favorite movies are: " << endl;
	for (string movies : favorite_movies)
		cout << movies << endl;


	system("pause");
	return 0;
}