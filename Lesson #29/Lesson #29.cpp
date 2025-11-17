#include <iostream>
#include <vector>
using namespace std;

void ReadVectorElements(vector <int> &vNumbers) 
{
	int Number = 0;
	char Answer = 'y';

	do
	{
		cout << "\nPlease enter the number: ";
		cin >> Number;

		vNumbers.push_back(Number);

		cout << "\nDo you want to add more numbers? [y]or[n]" << endl;
		cin >> Answer;
	} while (Answer == 'y' || Answer == 'Y');
}

void PrintVector(vector <int> &vNumbers)
{
	cout << "\nYour numbers are: " << endl;
	for (int Number : vNumbers)
	{
		cout << Number << endl;
	}
}

int main()
{
	vector <int> vNumbers;

	ReadVectorElements(vNumbers);
	PrintVector(vNumbers);

	return 0;
}
