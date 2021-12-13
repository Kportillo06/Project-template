#include <iostream>
using namespace std;

int main()
{
	double discount;

	string code = "C";
	switch (code) 
	{
	case A:    discount = 0.0;
	case B:    discount = 0.1;
	case C:    discount = 0.2;
	default:    discount = 0.3;

	}

	system("pause");
	return 0;

}
