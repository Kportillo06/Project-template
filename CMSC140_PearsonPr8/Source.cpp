#include <iostream>
#include <vector>
using namespace std;


int linearSearch(vector<int> vect, int num)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (!found && index < vect.size())
	{
		if (vect[index] == num)
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
	vector<int> winningNumbers { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
	int winningNumber, position;

	cout << "Enter this week's 5-digit winning lottery number:";
	cin >> winningNumber;

	position = linearSearch(winningNumbers, winningNumber);

	if (position == -1)
	{
		cout << "You did not win this week." << endl;
	}
	else
	{
		cout << "You have a winning ticket" << endl;
	}

	system("pause");
	return 0;
}

