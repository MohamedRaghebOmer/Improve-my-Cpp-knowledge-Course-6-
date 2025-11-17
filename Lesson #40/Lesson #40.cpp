#include <iostream>
using namespace std;

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5};
	int* p = arr; // Assign first elemnt addreas in the arr in p

	cout << "Array addreas by normal way (without pointer): " << arr << endl; // Prints the addreas normaly
	
	cout << "\nArray addreas by pointer (with pointer):" << endl;
	cout << "arr[0] = " << p << endl;
	cout << "arr[1] = " << p + 1 << endl;
	cout << "arr[2] = " << p + 2 << endl;
	cout << "arr[3] = " << p + 3 << endl;
	cout << "arr[4] = " << p + 4 << endl;


	cout << "\nArray emlemnts by ranged for loop: " << endl;
	for (int Number : arr) // Prints array elements
	{
		cout << Number << endl;
	}

	cout << endl;


	cout << "Array elements by pointer: " << endl;
	cout << "arr[0] = " << *(p) << endl; 
	cout << "arr[1] = " << *(p + 1) << endl;
	cout << "arr[2] = " << *(p + 2) << endl;
	cout << "arr[3] = " << *(p + 3) << endl;
	cout << "arr[4] = " << *(p + 4) << endl;


	cout << "\nArray elements addreass by pointer with for loop:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "arr[" << i << "]: " << p + i << endl;
	}

	cout << "\nArray emlemnts by for loop by pointer: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "arr[" << i << "]: " << *(p + i) << endl;
	}

	return 0;
}