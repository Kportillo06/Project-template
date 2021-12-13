/*
 * Class: CMSC140 CRN
 * Instructor: Greg Grinberg
 * Project<number>(1)
 * Description: Develop a program that asks for input from visitor and displays a game that the user can interact with.
 * Due Date: 9/27/2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Katya Alexandra Portillo Cabrera

 * Pseudocode or Algorithm for the program:
	Ask the user to input their name
	Ask the user to input an age of an important person or pet
	Calculate months from given age
	Calculate days from given age
	Calculate hours from given age
	Calculate minutes from given age
	Calculate seconds from given age
	Calculate dog year from given age
	Calculate goldfish year from given age
	Display calculated months
	Display calculated days
	Display calculated hours
	Display calculated minutes
	Display calculated seconds
	Display calculated dog year
	Display calculated goldfish year
	Ask the user for two whole numbers
	Calculate the sum of the two whole numbers
	Calculate division of the two whole numbers
	Display the sum of the two whole numbers
	Display the total of the divided numbers
	Display end of game


*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()

{

	// string variables
	string robot_name = "Nao";
	string visitor_name;
	string programmer_name = "Katya";
	string assignment_number = "1";
	string due_date = "9/27/2021";
	string project_1 = "CMSC140: Common Project 1";

	// constant variables
	const int DAYS_IN_MONTH = 30;
	const int MONTHS_IN_YEAR = 12;
	const int HOURS_IN_DAY = 24;
	const int MINUTES_IN_HOUR = 60;
	const int SECONDS_IN_MINUTES = 60;
	const int HUMAN_YEAR = 1;
	const int GOLDFISH_YEAR = 5;
	const int DOG_YEAR = 7;

	//calculation variables
	int age; // to hold age
	int days_in_year; // to hold calculations for total days in a year
	int total_hours; // to hold calculations for hours
	int total_minutes; // to hold calculations for minutes
	int total_seconds; // to hold calculations for seconds

	// variables for sum and division
	int number1;
	int number2;

	// Calculations
	days_in_year = DAYS_IN_MONTH * MONTHS_IN_YEAR;
	total_hours = HOURS_IN_DAY * days_in_year;
	total_minutes = days_in_year * MINUTES_IN_HOUR * HOURS_IN_DAY;
	total_seconds = days_in_year * HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTES;

	//Display prompt for visitor
	cout << "Hello, Welcome to Montgomery College! My name is " << robot_name << "." << " May I have your name?" << endl;
	getline( cin, visitor_name);
	cout << "Nice to have you with us today, " << visitor_name << "!" << endl;

	//Display first part of game
	cout << "Let me impress you with a small game," << endl;
	cout << "Give me the age of an important person or pet to you," << endl;
	cout << "Please give me only one number." << endl;
	cin >> age;
	cout << "\n";
	cout << "You have entered " << age << endl;
	cout << "If this is for a person, the age can be expressed as:" << endl;
	cout << age << " Years" << endl;
	cout << "or " << age * MONTHS_IN_YEAR << " months" << endl;
	cout << "or about " << age * days_in_year << " days" << endl;
	cout << "or about " << age * total_hours << " hours" << endl;
	cout << "or about " << age * total_minutes << " minutes" << endl;
	cout << "or about " << age * total_seconds << " seconds" << endl;
	cout << "If this is for a dog, it is " << age * DOG_YEAR << " years old in human age." << endl;
	cout << "If this is for a gold fish, it is " << age * GOLDFISH_YEAR << " years old in human age." << endl;
	cout << "\n";

	//Display second part of game
	cout << "Let's play another game, " << visitor_name << "." << " Give me a whole number." << endl;
	cin >> number1;
	cout << "Very well. Give me another whole number." << endl;
	cin >> number2;
	cout << "Using the operator '+' in C++, the result of " << number1 << " + " << number2 << " is " << number1 + number2 << endl;
	cout << "Using the operator of '/' in C++, the result of " << number1 << " / " << number2 << " is " << number1 / number2 << endl;
	cout << "However, the result of " << setprecision(2) << showpoint << static_cast<double>(number1) << " / " << static_cast<double>(number2) << " is about " << static_cast<double>(number1) / number2 << endl;
	cout << "\n";


	//Display end of game
	cout << "------------------" << "Thank you for testing my program!" << "------------------" << endl;
	cout << "PROGRAMMER: " << programmer_name << endl;
	cout << project_1 << endl;
	cout << "Due date: " << due_date << endl;

	system("pause");
	return 0;
}