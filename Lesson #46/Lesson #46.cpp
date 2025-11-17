#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vNumber = { 100, 200, 300, 400, 500};

	// Get spesific number with the normal way like array 
	cout << "By (at) function: " << endl;
	cout << "First number in the vector is  : " << vNumber.at(0) << endl;
	cout << "Second number in the vector is : " << vNumber.at(1) << endl;
	cout << "Third number in the vector is  : " << vNumber.at(2) << endl;
	cout << "Fourth number in the vector is : " << vNumber.at(3) << endl;
	cout << "Fiveth number in the vector is : " << vNumber.at(4) << endl;

	cout << endl;

	// Get spesific number with the libraray in vector
	cout << "By the normal way: " << endl;
	cout << "First number in the vector is  : " << vNumber[0] << endl;
	cout << "Second number in the vector is : " << vNumber[1] << endl;
	cout << "Third number in the vector is  : " << vNumber[2] << endl;
	cout << "Fourth number in the vector is : " << vNumber[3] << endl;
	cout << "Fiveth number in the vector is : " << vNumber[4] << endl;

	return 0;
}
