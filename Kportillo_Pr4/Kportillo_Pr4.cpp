/*
 * Class: CMSC140 20433
 * Instructor: Grigoriy. A Grinberg
 * Project #4
 * Computer/Platform/Compiler: Virtual Studio 2019
 * Description: Write a program that writes to a file the number of employees in a company and the number 
 of days absent per employee, then calculate the average number of days absent.
 * Due Date: 11/15/2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Katya Alexandra Portillo Cabrera

*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//declare global variable of ofstream
ofstream outputFile("employeeAbsences.txt");
//Function protypes
int numOfEmployees();
int totDaysAbsent(int num_employees_in_company);
double averageAbsent(double tot_days_absent_all_employees, double num_employees_in_company);
int main()//start of main function
{
	string programmer_name = "Katya Portillo";
	int num_of_employees_in_company;//variable to hold number of employees in company
	int days_absent_all_employees;//variable to hold number of days absent
	double average_absent_days;//variable to hold average days absent
	//header for .txt
	outputFile << "EMPLOYEE ABSENCES REPORT " << endl;
	outputFile << setw(10) << "Employee ID:";
	outputFile << setw(15) << "Days absent:" << endl;
	//Get number of employees
	num_of_employees_in_company = numOfEmployees();
	//Get total days absent
	days_absent_all_employees = totDaysAbsent(num_of_employees_in_company);
	//calculate average absent
	average_absent_days = averageAbsent(days_absent_all_employees, num_of_employees_in_company);
	//display end of program
	cout << "Programmer : " << programmer_name << endl;
	//write calculations to file
	outputFile << "\n";
	outputFile << "The " << num_of_employees_in_company << " employees were absent a total of " << days_absent_all_employees << " days. " << endl;
	outputFile << "The average number of days absent is " << setprecision(1) << fixed << average_absent_days << "." << endl;
	outputFile << "Progammer: " << programmer_name << "." << endl;

	system("pause");
	return 0;
}//end of main function
int numOfEmployees()//start of numOfEmployees function
{
	int number_of_employees;
	//Get number of employees
	cout << "Please enter the number of employees in the company: ";
	cin >> number_of_employees;
	//validate number of employees
		while (number_of_employees < 0)
		{
			cout << "The number of employees can not be negative! Please try again: ";
			cin >> number_of_employees;
		}

	return number_of_employees;
}//end of numOfEmployees function
int totDaysAbsent(int num_employees_in_company)//start of totDaysAbsent function
{
	int employeeId;// Employee ID
	int num_of_day_absent;// number of days absent per employee
	int total_days_absent = 0; //set accumulator to 0
	//use for loop for number of employees in company
		for (int count = 0; count < num_employees_in_company; count++)
		{
			cout << "Please enter the employee ID: ";
				cin >> employeeId;
			cout << "Please enter the number of days this employee was absent: ";
				cin >> num_of_day_absent;
		//validate number of days absent
			while (num_of_day_absent < 0)
			{
				cout << "The number of days can not be negative! Please try again.: ";
				cin >> num_of_day_absent;
			}
		outputFile << setw(10) << employeeId;
		outputFile << setw(15) << num_of_day_absent << endl;

		//calculations for total days absent
		total_days_absent += num_of_day_absent;
	}// end of for loop
	return total_days_absent;
}//end of totDaysAbsent function
double averageAbsent(double tot_days_absent_all_employees, double num_employees_in_company)//start of averageAbsent function
{
	double average = (tot_days_absent_all_employees / num_employees_in_company);

	return average;
}// end of averageAbsent function