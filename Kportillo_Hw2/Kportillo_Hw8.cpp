#include <iostream>
using namespace std;

//protypes
void displayArray(int array[], int size);
void selectionSort(int array[], int size);
double findAvg(int array[], int size);
int findMax(int array[], int size);
int findMin(int array[], int size);

int main()
{
	const int SIZE = 50;
	int scores[SIZE];
	int size, highestScore, lowestScore;
	double average = 0.0;

	cout << "How many scores do you want to enter? ";
	cin >> size;
	for (int count = 0; count < size; count++)
	{
		cout << "Enter score #" << (count + 1) << ": ";
		cin >> scores[count];
	}
	cout << "\n";
	cout << "Original order scores are: ";
	displayArray(scores, size);
	highestScore = findMax(scores, size);
	cout << "Highest score: " << highestScore << endl;
	lowestScore = findMin(scores, size);
	cout << "\nLowest score: " << lowestScore << endl;
	cout << "\n";
	cout << "Scores ordered high to low: ";
	selectionSort(scores, size);
	for (int count = 0; count < size; count++)
	{
		cout << scores[count] << " ";
	}
	cout << "\n";
	average = findAvg(scores, size);
	cout << "\nAverage of scores: " << average << endl;

	system("pause");
	return 0;

}
void displayArray(int array[], int size)
{
	for (int count = 0; count < size; count++)
	{
		cout << array[count] << " ";
	}
	cout << "\n\n";
}
double findAvg(int array[], int size)
{
	double average = 0.0, sum = 0;
	for (int count = 0; count < size; count++)
	{
		sum += array[count];
	}
	average = sum / size;

	return average;
}
int findMax(int array[], int size)
{
	int highestScore = array[0];
	for (int count = 0; count < size; count++)
	{
		if (array[count] > highestScore)
		{
			highestScore = array[count];
		}
	}
	return highestScore;
}
int findMin(int array[], int size)
{
	int lowestScore = array[0];
	for (int count = 0; count < size; count++)
	{
		if (array[count] < lowestScore)
		{
			lowestScore = array[count];
		}
	}
	return lowestScore;
}
void selectionSort(int array[], int size)
{
	int maxIndex, maxValue;

	for (int start = 0; start < (size - 1); start++)
	{
		maxIndex = start;
		maxValue = array[start];
		for (int index = start + 1; index < size; index++)
		{
			if (array[index] > maxValue)
			{
				maxValue = array[index];
				maxIndex = index;
			}
		}
		int temp = array[maxIndex];
		array[maxIndex] = array[start];
		array[start] = temp;
	}
}
