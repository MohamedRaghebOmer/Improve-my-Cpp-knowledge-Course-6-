#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

/*  vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();*/

	 cout << vNumbers.empty() << endl;
	 cout << vNumbers.size() << endl;
	 //vNumbers.clear();
	 cout << vNumbers.size() << endl;

	 (vNumbers.empty() == 0) ? cout << "No" : cout << "Yes";

	 cout << "first Number: " << vNumbers.front() << endl;
	 cout << "Last Number: " << vNumbers.back() << endl;
	 cout << "Last Number: " << vNumbers.capacity() << endl;



	for (int& Number : vNumbers)
		cout << Number << endl;

	return 0;
}
