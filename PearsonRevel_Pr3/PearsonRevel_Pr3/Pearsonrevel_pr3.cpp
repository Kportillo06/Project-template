#include <iostream>
#include <string>
using namespace std;

int main()
{
	//input variables
	string name;
	string city;
	int age;
	string NAME_OF_COLLEGE;
	string profession;
	string TYPE_OF_ANIMAL;
	string PETS_NAME;

	//Display input 
	cout << "Enter name: \n";
	getline(cin, name);
	cout << "Enter city: \n";
	getline(cin, city);
	cout << "Enter age: \n";
	cin >> age;
	cin.ignore();
	cout << "Enter college: \n";
	getline(cin, NAME_OF_COLLEGE);
	cout << "Enter profession: \n";
	getline(cin, profession);
	cout << "Enter animal: \n";
	getline(cin, TYPE_OF_ANIMAL);
	cout << "Enter pet name: \n";
	getline(cin, PETS_NAME);
	cout << "\n";
	cout << "\n";

	//Display story
	cout << "There was once a person named " << name << " who lived in " << city << "\n";
	cout << "At the age of " << age << ", " << name << " went to college at school of " << NAME_OF_COLLEGE << "\n";
	cout << name << " graduated and went to work as a " << profession << ".\n";
	cout << "Then, " << name << " adopted a(n) " << TYPE_OF_ANIMAL << " named " << PETS_NAME << ".\n";
	cout << "They both lived happily ever after!\n";

	system("pause");
	return 0;

}