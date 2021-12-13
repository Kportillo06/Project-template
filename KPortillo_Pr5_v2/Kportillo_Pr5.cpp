/*
 * Class: CMSC140 CRN 20433_22867
 * Instructor: Grigoriy A. Grinberg
 * Project 5
 * Description: Create a grid with 3 columns and 3 rows using one dimensional array. 
 If the sum of the rows, sum of the columns and the sum of the diagonals is the same, 
 then display that it is a Lo Shou magic square. 
 If the sums are not the same, then display that it is not a Lo Shou magic square.
 * Due Date: 12/06/21
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Full Name here: Katya Alexandra Portillo Cabrera
   */
#include <iostream>
using namespace std;

// Global constants 
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number
// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);

int main()
{
	/* Define a Lo Shu Magic Square using 3 parallel arrays corresponding to each row of the grid */
	int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
	char answer;
	do
	{
		//call fillArray function
		fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
		//cal showArray function
		showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
		//if isMagicSquare returns true display it is a Lo Shou magic square
		if (isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS))
		{
			cout << "This is a Lo Shou magic square" << endl;
		}
		//if isMagicSquare returns false display it is not a Lo Shou magic square
		else
		{
			cout << "This is not a Lo Shou magic square" << endl;
		}
		
		cout << "Do you want to try again?";
		cin >> answer;
	} while (answer == 'y' || answer == 'Y');

	system("pause");
	return 0;
}
// Function definitions go here
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	//for each loop get cols for row 1
	for (int col = 0; col < size; col++)
	{
		cout << "Enter a number for row 0, column " << col << " : ";
		cin >> arrayRow1[col];
	}
	//for each loop get cols for row 2
	for (int col = 0; col < size; col++)
	{
		cout << "Enter a number for row 1, column " << col << " : ";
		cin >> arrayRow2[col];
	}
	//for each loop get cols for row 3
	for (int col = 0; col < size; col++)
	{
		cout << "Enter a number for row 2, column " << col << " : ";
		cin >> arrayRow3[col];
	}
}//end of filArray function
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	//for each loop display cols for row 1
	for (int col = 0; col < size; col++)
	{
		cout << arrayRow1[col] << " ";
	}
	cout << "\n";
	//for each loop display cols for row 2
	for (int col = 0; col < size; col++)
	{
		cout << arrayRow2[col] << " ";
	}
	cout << "\n";
	//for each loop display cols for row 3
	for (int col = 0; col < size; col++)
	{
		cout << arrayRow3[col] << " ";
	}
	cout << "\n";
}//end of showArray function
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max)
{
	bool checkRange1 = true, checkRange2 = true, checkRange3 = true;
		//for each loop check if arrayRow1 < 1 or arrayRow1 > 9
		for (int col = 0; col < size; col++)
		{
			if (arrayRow1[col] < min || arrayRow1[col] > max)
			{
				checkRange1 = false;
			}
			else
			{
				checkRange1 = true;
			}
		}
		//for each loop check if arrayRow2 < 1 or arrayRow2 > 9
		for (int col = 0; col < size; col++)
		{
			if (arrayRow2[col] < min || arrayRow2[col] > max)
			{
				checkRange2 = false;
			}
			else
			{
				checkRange2 = true;
			}
		}
		//for each loop check if arrayRow3 < 1 or arrayRow3 > 9
		for (int col = 0; col < size; col++)
		{
			if (arrayRow3[col] < min || arrayRow3[col] > max)
			{
				checkRange3 = false;
			}
			else
			{
				checkRange3 = true;
			}	
		}
	if (checkRange1 == true && checkRange2 == true && checkRange3 == true)
		return true;
	else
		return false;
}//end of checkRange function
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	int searchValue1 = arrayRow1[0];
	bool status1 = true;
	//for each loop check if searchValue1 == arrayRow1
		for (int col = 0; col < size; col++)
		{
			if (searchValue1 == arrayRow1[col])
			{
				status1 = false;
			}
			else
			{
				status1 = true;
			}
		}
	int searchValue2 = arrayRow2[0];
	bool status2 = true;
	//for each loop check if searchValue2 == arrayRow2
		for (int col = 0; col < size; col++)
		{
			if (searchValue2 == arrayRow2[col])
			{
				status2 = false;
			}
			else
			{
				status2 = true;
			}		
		}
	int searchValue3 = arrayRow3[0];
	bool status3 = true;
	//for each loop check if searchValue3 == arrayRow3
		for (int col = 0; col < size; col++)
		{
			if (searchValue3 == arrayRow3[col])
			{
				status3 = false;
			}
			else
			{
				status3 = true;
			}	
		}
	if (status1 == true && status2 == true && status3 == true)
		return true;
	else
		return false;
}//end of checkUnique function
bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	//calculate sum of row 1
	int sumOfRow1 = 0;
	for (int col = 0; col < size; col++)
	{
		sumOfRow1 += arrayRow1[col];
	}
	//calculate sum of row 2 
	int sumOfRow2 = 0;
	for (int col = 0; col < size; col++)
	{
		sumOfRow2 += arrayRow2[col];
	}
	//calculate sum of row 3
	int sumOfRow3 = 0;
	for (int col = 0; col < size; col++)
	{
		sumOfRow3 += arrayRow3[col];
	}
	
	if (sumOfRow1 == sumOfRow2 && sumOfRow1 == sumOfRow3 && sumOfRow2 == sumOfRow3)
		return true;
	else
		return false;
}//end of checkRowSum function
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	//calculate sum of column 1
	int sumOfCol1 = arrayRow1[0] + arrayRow2[0] + arrayRow3[0];
	//calculate sum of column 2
	int sumOfCol2 = arrayRow1[1] + arrayRow2[1] + arrayRow3[1];
	//calculate sum of column 3
	int SumOfCol3 = arrayRow1[2] + arrayRow2[2] + arrayRow3[2];

	if (sumOfCol1 == sumOfCol2 && sumOfCol1 == SumOfCol3 && sumOfCol2 == SumOfCol3)
		return true;
	else
		return false;
}//end of checkColSum function
bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	//calculate sum of left diagonal in square
	int sumofDiagLeft = arrayRow1[0] + arrayRow2[1] + arrayRow3[2];
	//calculate sum of right diagonal in square
	int sumofDiagRight = arrayRow1[2] + arrayRow2[1] + arrayRow3[0];

	if (sumofDiagLeft == sumofDiagRight)
		return true;
	else
		return false;
}//end of checkDiagSum function
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	//check if all requirements for magic square return true
	if (checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX) == true 
		&& checkUnique(arrayRow1, arrayRow2, arrayRow3, size) == true
		&& checkRowSum(arrayRow1, arrayRow2, arrayRow3, size) == true
		&& checkColSum(arrayRow1, arrayRow2, arrayRow3, size) == true
		&& checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size) == true)
		return true;
	else
		return false;
}//end of isMagicSquare function