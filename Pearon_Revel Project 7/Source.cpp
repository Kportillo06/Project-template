#include <iostream>
#include <string>

using namespace std;

int main()
{

	const int TOTALMONTHS = 12;
	double highest, lowest, getAverage;
	double total = 0;
	double rainfall[TOTALMONTHS];
	string months[TOTALMONTHS] = { "January", "February", "March", "April","May", "June", "July", "August", "September","October", "November", "December" };
	// Get total rainfall per month
	for (int month = 0; month < TOTALMONTHS; month++)
	{
		cout << "Enter rainfall for " << months[month] << ": ";
		cin >> rainfall[month];
		total += rainfall[month];

		// Validate the input
		while (rainfall[month] < 0)
		{
			cout << "invalid data (negative rainfall) -- retry";
			cin >> rainfall[month];
			total += rainfall[month];
		}
	}
	getAverage = total / TOTALMONTHS;

	// Get highest and lowest rainfall
	string maxMonth, minMonth;
	highest = rainfall[0];
	maxMonth = months[0];
		for (int count = 0; count < TOTALMONTHS; count++)
		{
			if (rainfall[count] > highest)
			{
				highest = rainfall[count];
				maxMonth = months[count];
			}
		}
	lowest = rainfall[0];
	minMonth = months[0];
		for (int count = 1; count < TOTALMONTHS; count++)
		{
			if (rainfall[count] < lowest)
			{
				lowest = rainfall[count];
				minMonth = months[count];
				
			}
		}

	cout << "Total rainfall: " << total << endl;
	cout << "Average rainfall: " << getAverage << endl;
	cout << "Least rainfall in: " << minMonth << endl;
	cout << "Most rainfall in: " << maxMonth << endl;
	


	system("pause");
	return 0;
}