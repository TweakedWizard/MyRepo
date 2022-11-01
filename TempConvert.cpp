#include <iostream>

using namespace std;

int main ()
{
	double Farhenheit, Celsius;
	cout << "Enter the temperature in Farhenheit: ";
	cin >> Farhenheit;
	Celsius = (Farhenheit - 32) * 5/9;
	cout << "Tempertature in Celsius: " << Celsius;


	return 0;
}