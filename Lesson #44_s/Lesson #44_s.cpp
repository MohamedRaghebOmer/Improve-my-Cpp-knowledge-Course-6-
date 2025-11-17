#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "How many names do you want to add?" << endl;
	cin >> num;

	string* pointer = new string[num];

	cout << "\nPlease enter the names do you wnat to add:" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "Name [" << i + 1 << "]: ";
		cin >> *(pointer + i); // pointer refares to the first element in the array
	}

	cout << "\nThe names you have entered:" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "[" << i + 1 << "]: " << *(pointer + i) << endl;
	}

	delete [] pointer;

	return 0;
}