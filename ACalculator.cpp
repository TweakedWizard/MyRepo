#include <iostream>

using namespace std;

int main ()
{
	double FirstDigit, SecondDigit, Result;
	char op;
	cout << "Enter fFirst Digit";
	cin >> FirstDigit;
	cout << "Enter seconnd digit";
	cin >> SecondDigit;
	cout << "Enter operator";
	cin >> op;
	
	if (op == '+')
	{
		Result = FirstDigit + SecondDigit;
		cout << Result;
	}
	else if (op == '-')
	{
		Result = FirstDigit - SecondDigit;
		cout << Result;
	}
	else if (op == '/')
	{
		Result = FirstDigit / SecondDigit;
		cout << Result;
	}
	else if (op == '*')
	{
		Result = FirstDigit * SecondDigit;
		cout << Result;
	}
	else
	{
		cout << "Wrong Operator";
	}

	return 0;
}