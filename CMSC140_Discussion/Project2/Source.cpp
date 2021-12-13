#include <iostream>
using namespace std;

int main()
{
	
	int temperature;
	int hot_weather = 60;
	int cold_weather = 50;


	cout << "Hello, let's play a short game. ";
	cout << "Tell me the weather and I'll tell you what to wear" << endl;
	cout << "Tell me the temperature in Farenheit" << endl;
	cin >> temperature;

	if (temperature >= hot_weather)
	{
		cout << "Today you should wear a t-shirt" << endl;
	}
	else if (temperature <= cold_weather)
	{
		cout << "Today you should wear a warm coat" << endl;
	}

	system("pause");
	return 0;
}