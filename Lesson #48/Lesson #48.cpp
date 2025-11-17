#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vNumber = { 100, 200, 300, 400, 500 };

	// Declare aterator
	vector <int> ::iterator iter; // iterator = pointer in normal arrays

	// Print vecotr elements by atterator 
	for (iter = vNumber.begin(); iter != vNumber.end(); iter++)
	{
		cout << *iter << "  ";
	}

	cout << endl;
	return 0;					
}								