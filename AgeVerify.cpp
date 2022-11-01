#include <iostream>

using namespace std;

void ageCheck (int age)
{
	if (age < 18)
	{
		cout << "You are too young for this." << endl;
	}
	else
	{
		cout << "You are " << age << " years old, please proceed." << endl;
	}
}

int main()
{
	cout << "Enter Your Age: ";
	int age;
	cin >> age;
	ageCheck(age);


	return 0;
}