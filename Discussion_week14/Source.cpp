#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
	int maxElement;
	int index;
	int temp;

	for (int maxElement = size - 1; maxElement > 0; maxElement--)
	{
		for (index = 0; index < maxElement; index++)
		{
			if (array[index] > array[index + 1])
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
			}

		}
	}


}
int linearSearch(int array[], int size, int number)
{
	bool found = false;
	int position = -1;
	int index = 0;

	while (!found && index < size)
	{
		if (array[index] == number)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;

}
int main()
{

	const int SIZE = 10;
	int numbers[SIZE] = { 10, 30, 6, 2, 1, 40, 5, 8, 3, 11 };
	int maxElement, index, luckyNumber, position;
	char answer;

	cout << "The unsorted numbers are :" << endl;
	//display unsorted values
	for (int values : numbers)
	{
		cout << values << " ";
		
	}
	cout << "\n\n";
	//call function
	bubbleSort(numbers, SIZE);
	//Display sorted values
	cout << "The sorted numbers are now :" << endl;
	for (int values : numbers)
	{
		cout << values << " ";
	}
	cout << "\n\n";
	//Display guessing game
	cout << "Now, enter a number from the list and I will tell you if it's a lucky number: " << endl;
	cin >> luckyNumber;
	//call linearSearch function
	position = linearSearch(numbers, SIZE, luckyNumber);
	if (luckyNumber == 6)
	{
		cout << "Congrats! You found the lucky number in position " << (position + 1) << endl;
	}
	else
	{
		cout << "Sorry, you did not find the lucky number :(" << endl;
			
	}


	system("pause");
	return 0;
}