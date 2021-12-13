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
	// Your code goes here
	char answer;
	do
	{
		fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
		showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
		//check if function works
		if (checkRange(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS, MIN, MAX))
			cout << " there is no number less than 1 or greater than 9" << endl;
		else
			cout << "there is a number less than 1 or greater than 9" << endl;
		//check
		if (checkRowSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS))
			cout << "The sum of the rows is the same" << endl;
		else
			cout << "The sum of the rows is not the same" << endl;
		//
		if (checkUnique(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS))
			cout << "Two numbers are not the same" << endl;
		else 
			cout << "Two numbers are the same" << endl;
		if (checkColSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS))
			cout << "The sum of the cols are the same" << endl;
		else
			cout << "The sum of the cols is not the same" << endl;
		if (isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS))
			cout << "This is a Lo Shou magic square" << endl;
		else
			cout << "This is not a Lo Shou magic square" << endl;
		checkDiagSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

		
		cout << "Do you want to try again?";
		cin >> answer;
	} while (answer == 'y' || answer == 'Y');
	
	system("pause");
	return 0;
}
// Function definitions go here
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	for (int col = 0; col < size; col++)
	{
		cout << "Enter a number for row 0, column " << col << " : ";
		cin >> arrayRow1[col];
	}
	for (int col = 0; col < size; col++)
	{
		cout << "Enter a number for row 1, column " << col << " : ";
		cin >> arrayRow2[col];
	}
	for (int col = 0; col < size; col++)
	{
		cout << "Enter a number for row 2, column " << col << " : ";
		cin >> arrayRow3[col];
	}
}//end of filArray function
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	for (int col = 0; col < size; col++)
	{
		cout << arrayRow1[col] << " ";
	}
	cout << "\n";
	for (int col = 0; col < size; col++)
	{
		cout << arrayRow2[col] << " ";
	}
	cout << "\n";
	for (int col = 0; col < size; col++)
	{
		cout << arrayRow3[col] << " ";
	}
}//end of showArray function
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max)
{
	bool checkRange1 = true, checkRange2 = true, checkRange3 = true;

	for (int col = 0; col < size; col++)
	{
		if (arrayRow1[col] < min || arrayRow1[col] > max)
			checkRange1 = false;
	}
	for (int col = 0; col < size; col++)
	{
		if (arrayRow2[col] < min || arrayRow2[col] > max)
			checkRange2 = false;
	}
	for (int col = 0; col < size; col++)
	{
		if (arrayRow3[col] < min || arrayRow3[col] > max)
			checkRange3 = false;
	}
	if (checkRange1 == true && checkRange2 == true && checkRange3 == true)
		return true;
	else
		return false;

}//end of checkRange function
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	int searchValue1 = arrayRow1[0];
	bool status = true;
	for (int col = 0; col < size; col++)
	{
		if (searchValue1 == arrayRow1[col])
			status = false;
		else
			status = true;
	}
	int searchValue2 = arrayRow2[0];
	bool status2 = true;
	for (int col = 0; col < size; col++)
	{
		if (searchValue2 == arrayRow2[col])
			status2 = false;
		else
			status2 = true;
	}
	int searchValue3 = arrayRow3[0];
	bool status3 = true;
	for (int col = 0; col < size; col++)
	{
		if (searchValue3 == arrayRow3[col])
			status3 = false;
		else
			status3 = true;
	}
	if (status == true && status2 == true && status3 == true)
		return true;
	else
		return false;
}//end of checkUnique function
bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	int sumofRow1 = arrayRow1[0] + arrayRow1[1] + arrayRow1[2];
	cout << sumofRow1 << endl;
	int sumOfRow2 = arrayRow2[0] + arrayRow2[1] + arrayRow2[2];
	cout << sumOfRow2 << endl;
	int sumOfRow3 = arrayRow3[0] + arrayRow3[1] + arrayRow3[2];
	cout << sumOfRow3 << endl;

	if (sumofRow1 == sumOfRow2 && sumofRow1 == sumOfRow3 && sumOfRow2 == sumOfRow3)
		return true;
	else
		return false;

}//end of checkRowSum function
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	int sumOfCol1 = arrayRow1[0] + arrayRow2[0] + arrayRow3[0];
	cout << sumOfCol1 << endl;
	int sumOfCol2 = arrayRow1[1] + arrayRow2[1] + arrayRow3[1];
	cout << sumOfCol2 << endl;
	int SumOfCol3 = arrayRow1[2] + arrayRow2[2] + arrayRow3[2];
	cout << SumOfCol3 << endl;

	if (sumOfCol1 == sumOfCol2 && sumOfCol1 == SumOfCol3 && sumOfCol2 == SumOfCol3)
		return true;
	else
		return false;

}//end of checkColSum function
bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	int sumofDiagLeft = arrayRow1[0] + arrayRow2[1] + arrayRow3[2];
	cout << "sum of diag left :" << sumofDiagLeft << endl;
	int sumofDiagRight = arrayRow1[2] + arrayRow2[1] + arrayRow3[0];
	cout << "sum of diag right: " << sumofDiagRight << endl;

	if (sumofDiagLeft == sumofDiagRight)
		return true;
	else
		return false;

}//end of checkDiagSum function
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	if (checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX) == true
		&& checkUnique(arrayRow1, arrayRow2, arrayRow3, size) == true
		&& checkRowSum(arrayRow1, arrayRow2, arrayRow3, size) == true
		&& checkColSum(arrayRow1, arrayRow2, arrayRow3, size) == true
		&& checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size) == true)
		return true;
	else
		return false;


}//end of isMagocSquare function
