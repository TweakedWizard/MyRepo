#include <iostream>
#include <limits>
#include <concepts>

using namespace std;

int main ()
{
	int x _INT32_T;
   int y;

	cout << "Enter value for x: ";
	cin >> x;

	cout << "Enter value for y: ";
	cin >> y;

	int z ;
	z = x, x = y, y = z;

	cout << "Here are switched value of x: " << x << endl;
	cout << "Here are switched value of y: " << y << endl;

	return 0;
}