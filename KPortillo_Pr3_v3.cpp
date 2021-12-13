#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()

{
	//variables
	string hotel_location;
	int totalNumberOfFloors;
	int totalOccupiedRooms = 0;
	int totalOccupiedRoomsInFloor = 0;
	int totalUnOccupiedRooms;
	int totalNumberOfRooms = 0;
	int totalNumberOfRooms_InFloor;
	int count;
	double hotel_income = 0;
	double singleRoomsOccupied = 0;
	double singleRoomsOccupied_InFloor;
	double sales_single_rooms = 0;
	const int SINGLE_ROOM_RATE = 60;
	double doubleRoomsOccupied = 0;
	double doubleRoomsOccupied_InFloor;
	double sales_double_rooms = 0;
	const int DOUBLE_ROOM_RATE = 75;
	double kingRoomsOccupied = 0;
	double kingRoomsOccupied_InFloor;
	double sales_king_rooms = 0;
	const int KING_ROOMS_RATE = 100;
	double suiteRoomsOccupied = 0;
	double suiteRoomsOccupied_InFloor;
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
		cin >> totalNumberOfRooms_InFloor;

		while (totalNumberOfRooms_InFloor < 1 || totalNumberOfRooms_InFloor > 30)
		{
			cout << "number of rooms should be between 1 and 30!! Please try again\n";
			cin >> totalNumberOfRooms_InFloor;
		}
		cout << "How many SINGLE rooms are occupied in the " << count << " th floor \n";
		cin >> singleRoomsOccupied_InFloor;
		cout << "How many DOUBLE rooms are occupied in the " << count << " th floor \n";
		cin >> doubleRoomsOccupied_InFloor;
		cout << "How many KING rooms are occupied in the " << count << " th floor \n";
		cin >> kingRoomsOccupied_InFloor;
		cout << "How many SUITE rooms are occupied in the " << count << " th floor \n";
		cin >> suiteRoomsOccupied_InFloor;
		cout << "\n";
		

		//hotel_income = sales_single_rooms + sales_double_rooms + sales_king_rooms + sales_suite_rooms; // total income of all rooms occupied in each floor

		while (totalOccupiedRooms > totalNumberOfRooms_InFloor)// correct this code as well : change to singleRoomsOccupiedInFloor
		{
			cout << "Total number of rooms occupied exceeds the total number of rooms! Please try again!!\n";
			cout << "Enter total number of rooms in the " << count << " th floor\n";
			cin >> totalNumberOfRooms_InFloor;
			cout << "How many SINGLE rooms are occupied in the " << count << " th floor \n";
			cin >> singleRoomsOccupied_InFloor;
			cout << "How many DOUBLE rooms are occupied in the " << count << " th floor \n";
			cin >> doubleRoomsOccupied_InFloor;
			cout << "How many KING rooms are occupied in the " << count << " th floor \n";
			cin >> kingRoomsOccupied_InFloor;
			cout << "How many SUITE rooms are occupied in the " << count << " th floor \n";
			cin >> suiteRoomsOccupied_InFloor;
			cout << "\n";
		
		}

		// calculations here
		suiteRoomsOccupied += suiteRoomsOccupied_InFloor;
		singleRoomsOccupied += singleRoomsOccupied_InFloor;
		kingRoomsOccupied += kingRoomsOccupied_InFloor;
		doubleRoomsOccupied += doubleRoomsOccupied_InFloor;
		totalOccupiedRooms += totalOccupiedRoomsInFloor;
		// add here the other occupied rooms, such as single, double, king:
		//write code here
		totalNumberOfRooms += totalNumberOfRooms_InFloor;



	}//end of for loop

	//calculations for hotel income, # of rooms, # of occupied rooms, # of unoccupied rooms, etc
	hotel_income = (suiteRoomsOccupied * SUITE_ROOMS_RATE) + (singleRoomsOccupied * SINGLE_ROOM_RATE) + (doubleRoomsOccupied * DOUBLE_ROOM_RATE) + (kingRoomsOccupied * KING_ROOMS_RATE); //write code here for the otherkind of rooms: single
	totalOccupiedRooms = suiteRoomsOccupied + singleRoomsOccupied + doubleRoomsOccupied + kingRoomsOccupied;
	totalUnOccupiedRooms = totalNumberOfRooms - totalOccupiedRooms;


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

	//Display calculations
	cout << "Hotel Income is $" << hotel_income << endl;
	cout << "Total number rooms in hotel is " << totalNumberOfRooms "\n";
	cout << "Total number of occupied rooms is " << totalOccupiedRooms "\n";
	cout << "Total number of unoccupied rooms is " << totalUnOccupiedRooms "\n";
		



	system("pause");
	return 0;

}