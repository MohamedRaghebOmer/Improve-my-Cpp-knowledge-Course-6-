#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vNumber = { 100, 200, 300, 400, 500 };

	cout << "My vector before any changes: " << endl;
	for (const int& Number : vNumber)
	{
		cout << Number << endl;
	}

	cout << endl;

	cout << "My vector after chang all elements temporary to 400: " << endl;
	for (int Number : vNumber) // This will take a copy and edit it then print it 
	{
		Number = 400; //This won't affect on the main vector
		cout << Number << endl;
	}

	cout << endl;

	cout << "My vector after adding 100 to all elements: " << endl;
	for (int& Number : vNumber) // This will edit the main values then print it 
	{
		Number += 100;
		cout << Number << endl;
	}

	cout << endl;

	cout << "First element is: " << vNumber.at(0) << endl;
	cout << "Second element is: " << vNumber[1] << endl;
	
	try
	{
		cout << vNumber.at(10) << endl;
	}
	catch(...)
	{
		cout << "Out of range" << endl;
	}



	return 0;
}