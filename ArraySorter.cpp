#include <iostream>

using namespace std;

int main()
{
	int numbers[10] = { 1, 10, 3, 6, 10, 5, 5, 4, 8, 2} ;
	int n = sizeof (numbers) / sizeof (numbers[0]);
	//now we take two parameters using sort method.
	sort (numbers, numbers + n);
	cout << "Array after Sorting: \n"; 
	for (int i = 0; i < n; ++i)
	cout << numbers[i] << endl;
	


	return 0;
}