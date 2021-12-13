/*
 * Class: CMSC140 CRN 20433
 * Instructor: Grigoriy A. Grinberg
 * Project 2
 * Description: Develop a program that showcases switch statement and displays temperature converter, 
 distance converter, weight converter and quit choice. 
 * Due Date: 10/11/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Full Name here: Katya Alexandra Portillo Cabrera
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()

{

	//hold variables for input
	double celcius,
		farenheit;
	double weight;
	double kilometer;
	double pounds;
	double distance;
	
	//constant for calculations
	const double MILE = 0.6;
	const double KILOGRAM = 2.2;


	// Constants for menu choices 
	string country_name;
	int choice;
	const int TEMPERATURE_CHOICE = 1,
		DISTANCE_CHOICE = 2,
		WEIGHT_CHOICE = 3,
		QUIT_CHOICE = 4;
	
	//string variables
	string Programmer = "Katya Portillo\n";
	string Project = "CMSC140 Common Project 2\n";
	string due_date = "10/11/2021";

	//Display menu
	cout << "Enter a country name: " << endl;
	getline(cin, country_name); 
	cout << "------Converter Toolkit------\n"
		<< "1. Temperature Converter\n"
		<< "2. Distance converter\n"
		<< "3. Weight converter\n"
		<< "4. Quit the Program\n\n"
		<< "Enter your choice: (1-4) ";
	cin >> choice;
	

	//Respond to user input
	if (choice < 1 || choice > 4)
	{
		cout << "Error, Please choose a number between 1-4\n";
	}
		else
		switch (choice)
		{
		case TEMPERATURE_CHOICE: cout << "Please enter temperature in Celcius\n";
			cin >> celcius;
			farenheit = ((9.0 / 5.0) * celcius + 32);
			cout << "It is " << farenheit << " farenheits.\n";
			break;
		case DISTANCE_CHOICE: cout << "Please enter distance in Kilometer\n";
			cin >> kilometer;
			if (kilometer < 0)
			{
			cout << "Error! Kilometers can not be a negative\n";
			}
			else
			{
			distance = kilometer * MILE;
			cout << "It is " << fixed << setprecision(2) << distance << " Miles.\n";
			}
			break;
		case WEIGHT_CHOICE: cout << "Please enter weight in Kilograms\n";
			cin >> weight;
			if (weight < 0)
			{
				cout << "Error! Weight can not be negative\n";
			}
			else
			{
			pounds = weight * KILOGRAM;
			cout << "It is " << fixed << setprecision (1) << pounds << " Pounds\n";
			}
			break;

		case QUIT_CHOICE:
			break;


		}

	//Display end of program
	cout << "\n";
	cout << country_name << " Sounds fun\n";
	cout << "\n------------------" << "Thank you for testing my program!" << "------------------\n";
	cout << "PROGRAMMER: " << Programmer;
	cout << Project;
	cout << "Due date: " << due_date << endl;

	
	system("pause");
	return 0;

}
