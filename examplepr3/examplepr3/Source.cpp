#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()

{
	//variables
	string hotel_location;
	int totalNumberOfFloors;
	int totalOccupiedRooms;
	int unoccupiedRooms;
	int totalNumberOfRooms;
	int count;
	double hotel_income = 0;
	int singleRoom;
	const int SINGLE_ROOM = 60;
	int doubleRoom;
	const int DOUBLE_ROOM = 75;
	int kingRooms;
	const int KING_ROOMS = 100;
	int suiteRooms;
	const int SUITE_ROOMS = 150;



	cout << "----------------------------------------------\n";
	cout << setw(29) << "Bluemont hotel\n";
	cout << "----------------------------------------------\n";
	cout << "Enter the location of this hotel chain: \n";
	getline(cin, hotel_location);
	cout << "Enter total number of floors in this hotel\n";
	cin >> totalNumberOfFloors;
	while (totalNumberOfFloors < 1 || totalNumberOfFloors > 5)
	{
		cout << "number of floors should be between 1 and five!! Please try again.\n";
		cin >> totalNumberOfFloors;
	}
	cout << "\n";

	//number of rooms in each floor

	for (count = 1; count <= totalNumberOfFloors; count++)
	{
		cout << "Enter total number of rooms in the " << count << "th floor \n";
		cin >> totalNumberOfRooms;

		while (totalNumberOfRooms < 1 || totalNumberOfRooms > 30)
		{
			cout << "number of rooms should be between 1 and 30!! Please try again\n";
			cin >> totalNumberOfRooms;
		}

		for (count = 1; count <= totalNumberOfFloors; count++)
		{
			cout << "How many SINGLE rooms are occupied in the " << count << " th floor \n";
			cin >> singleRoom;
			cout << "How many DOUBLE rooms are occupied in the " << count << " th floor \n";
			cin >> doubleRoom;
			cout << "How many KING rooms are occupied in the " << count << " th floor \n";
			cin >> kingRooms;
			cout << "How many SUITE rooms are occupied in the " << count << " th floor \n";
			cin >> suiteRooms;
			cout << "\n";
			totalOccupiedRooms = singleRoom + doubleRoom + kingRooms + suiteRooms;
		}
		
		

		while (totalOccupiedRooms > totalNumberOfRooms)
		{
			cout << "Total number of rooms occupied exceeds the number of rooms! Please try again!!\n";
			cout << "How many SINGLE rooms are occupied in the " << count << " th floor \n";
			cin >> singleRoom;
			cout << "How many DOUBLE rooms are occupied in the " << count << " th floor \n";
			cin >> doubleRoom;
			cout << "How many KING rooms are occupied in the " << count << " th floor \n";
			cin >> kingRooms;
			cout << "How many SUITE rooms are occupied in the " << count << " th floor \n";
			cin >> suiteRooms;
			cout << "\n";
		}
	}

	// Display menu for room rates
	cout << "-----------------------------------------------------------\n";
	cout << setw(40) << "Bluemont hotel located in " << hotel_location << endl;
	cout << setw(40) << "TODAY'S ROOM RATES<US$/NIGHT> " << hotel_location << endl;
	cout << setw(10) << "Single Room";
	cout << setw(15) << "Double Room";
	cout << setw(13) << "King Room";
	cout << setw(15) << "Suite Room\n";
	cout << setw(10) << SINGLE_ROOM;
	cout << setw(15) << DOUBLE_ROOM;
	cout << setw(13) << KING_ROOMS;
	cout << setw(15) << SUITE_ROOMS;
	cout << "\n";
	cout << "-----------------------------------------------------------\n";

	//Calculate
	cout << "total occupied : " << totalOccupiedRooms << endl;











	system("pause");
	return 0;

}