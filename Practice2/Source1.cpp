//This program is used to practice programming with increment/decrement operators and while loops
#include <iostream>
using namespace std;

int main()
{
	float test;

	test = 2.0e38 * 1000;      // Should overflow test. 
	cout << test << endl;
	test = 2.0e-38 / 2.0e38;   // Should underflow test. 
	cout << test << endl;
	
	/*
	char a = 'a';
	int b = 6;
	int result = a * b / b;
	cout << result << endl;
	*/

	/*
	-----------------------------------
	PROBLEM #1

	Write code that does the following:
	1. Increment int1 in postfix
	2. Decrement int2 in prefix
	-----------------------------------
	*/

	//int int1 = 9, int2 = 13;
	//cout << int1++ << " " << ++int2 << endl;
	/*
	---------------------------------------------------------------
	PROBLEM #2

	Whate are the values of a, b, and num after this code executes?
	(7 * 9) = 63
	---------------------------------------------------------------
	*/
	/*
	int a = 7, b = 10, num;
	num = (a++ * --b);
	cout << num << endl;
	*/

	/*
	----------------------------------------------
	PROBLEM #3

	What will be the output of the following code?
	if (9 < 10)
	the weather is wonderful today
	----------------------------------------------
	*/
	/*
	int z = 9;
	if (z++ < 10)
	{
		cout << "The weather is wonderful today." << endl;
	}
	else
	{
		cout << "It feels rather hot." << endl;
	}
	*/
	/*
	--------------------------------------
	PROBLEM #4

	What is wrong with the following code?
	operand of increments and decrement has to be an l value
	(2 + 23) = 25 +1 = 26
	--------------------------------------
	*/
	/*
	int j = 2, k = 23, l;
	l = ++(j + k);
	*/
	
	/*
	-----------------------------------------------------------
	PROBLEM #5

	What is the value of firstNum after the loop is terminated?
	6 7 8 9 10 11 12 13 14 15
	-----------------------------------------------------------
	*/
	/*
	int counter = 0, firstNum = 5;
	while (counter < 10)
	{
		counter++;
		firstNum++;
	}
	cout << firstNum << endl;
	*/

	/*
	--------------------------------------
	PROBLEM #6

	What is wrong with the following loop?
	there is no increment operand so the loop will be infinite
	--------------------------------------
	*/
	/*
	int counter2 = 0;
	while (counter2 < 10)
	{
		cout << "The counter is now: " << counter2 << endl;
	}
	*/

	/*
	-----------------------------------------
	PROBLEM #7

	What is the output of the following code?
	goodbye
	-----------------------------------------
	*/
	/*
	int counter3 = 25;
	while (counter3 < 20)
	{
		cout << "The counter is now: " << counter3 << endl;
	}
	cout << "Goodbye.";
	*/

	/*
	-------------------------------------------------------------------------------------------------
	PROBLEM #8

	Write a while loop to display the message "hello world" 7 times.
	-------------------------------------------------------------------------------------------------
	*/
	/*
	int firstValue = 0;
	while (firstValue < 7)
	{
		cout << "Hello word" << endl;
		firstValue++;
	}
	*/

	/*
	-----------------------------------------------
	PROBLEM #9

	How many times will the following loop execute?
	-----------------------------------------------
	*/
	/*
	int counter4 = 0, counter5 = 5;
	while (counter5 < 3 || counter4 < 9)
	{
		cout << "Hello" << endl;
		counter5++;
		counter4++;
	}
	*/

	/*
	--------------------------------------------------------------
	PROBLEM #10

	Write a while loop that displays the odd numbers from 0 to 10.
	--------------------------------------------------------------
	*/
	/*
	int counter6 = 0;
	while (counter6 < 10)
	{
		counter6++;
		if (counter6 % 2 != 0)
		{
			cout << counter6 << endl;
		}
	}
	*/

	system("pause");
	return 0;
}