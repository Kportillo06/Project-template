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
	int totalUnOccupiedRooms;
	int totalNumberOfRooms;
	int count;
	double hotel_income = 0;
	double singleRoomsOccupied;
	double sales_single_rooms = 0;
	const int SINGLE_ROOM_RATE = 60;
	double doubleRoomsOccupied;
	double sales_double_rooms = 0;
	const int DOUBLE_ROOM_RATE = 75;
	double kingRoomsOccupied;
	double sales_king_rooms = 0;
	const int KING_ROOMS_RATE = 100;
	double suiteRoomsOccupied;
	double sales_suite_rooms = 0;
	const int SUITE_ROOMS_RATE = 150;



	cout << "----------------------------------------------\n";
	cout << setw(29) << "Bluemont hotel\n";
	cout << "----------------------------------------------\n";
	cout << "Enter the location of this hotel chain: \n";
	getline(cin, hotel_location);

	do
	{
		cout << "Enter total number of floors in this hotel\n";
		cin >> totalNumberOfFloors;

		while (totalNumberOfFloors < 1 || totalNumberOfFloors > 5)
		{
			cout << "number of floors should be between 1 and five!!Please try again.\n";
			cout << "\n";
		} 

	} while (totalNumberOfFloors < 1 || totalNumberOfFloors > 5);

	//number of rooms in each floor for loop
	for (count = 1; count <= totalNumberOfFloors; count++)
	{
		cout << "Enter total number of rooms in the " << count << "th floor \n";
		cin >> totalNumberOfRooms;

		while (totalNumberOfRooms < 1 || totalNumberOfRooms > 30)
		{
			cout << "number of rooms should be between 1 and 30!! Please try again\n";
			cin >> totalNumberOfRooms;
		}
			cout << "How many SINGLE rooms are occupied in the " << count << " th floor \n";
			cin >> singleRoomsOccupied;
			sales_single_rooms = singleRoomsOccupied * SINGLE_ROOM_RATE; // calculate total sales for single rooms occupied 
			cout << "How many DOUBLE rooms are occupied in the " << count << " th floor \n";
			cin >> doubleRoomsOccupied;
			sales_double_rooms = doubleRoomsOccupied * DOUBLE_ROOM_RATE; // calculate total sales for double rooms occupied
			cout << "How many KING rooms are occupied in the " << count << " th floor \n";
			cin >> kingRoomsOccupied;
			sales_king_rooms = kingRoomsOccupied * KING_ROOMS_RATE; // calculate total sales for king rooms occupied
			cout << "How many SUITE rooms are occupied in the " << count << " th floor \n";
			cin >> suiteRoomsOccupied;
			sales_suite_rooms = suiteRoomsOccupied * SUITE_ROOMS_RATE; // calculate total sales for suite rooms occupied 
			cout << "\n";
			totalOccupiedRooms = singleRoomsOccupied + doubleRoomsOccupied + kingRoomsOccupied + suiteRoomsOccupied; // total rooms in all floors
	
			hotel_income = sales_single_rooms + sales_double_rooms + sales_king_rooms + sales_suite_rooms; // total income of all rooms occupied in each floor

		while (totalOccupiedRooms > totalNumberOfRooms)
		{
			cout << "Total number of rooms occupied exceeds the total number of rooms! Please try again!!\n";
			cout << "Enter total number of rooms in the " << count << " th floor\n";
			cin >> totalNumberOfRooms;
			cout << "How many SINGLE rooms are occupied in the " << count << " th floor \n";
			cin >> singleRoomsOccupied;
			cout << "How many DOUBLE rooms are occupied in the " << count << " th floor \n";
			cin >> doubleRoomsOccupied;
			cout << "How many KING rooms are occupied in the " << count << " th floor \n";
			cin >> kingRoomsOccupied;
			cout << "How many SUITE rooms are occupied in the " << count << " th floor \n";
			cin >> suiteRoomsOccupied;
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
	cout << setw(10) << SINGLE_ROOM_RATE;
	cout << setw(15) << DOUBLE_ROOM_RATE;
	cout << setw(13) << KING_ROOMS_RATE;
	cout << setw(15) << SUITE_ROOMS_RATE;
	cout << "\n";
	cout << "-----------------------------------------------------------\n";

	//calculations here
	


	//Display calculations
	cout << "Hotel Income is $" << hotel_income << endl;

	

	system("pause");
	return 0;

}