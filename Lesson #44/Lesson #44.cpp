#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "How many student do you want to write?" << endl;
	cin >> num;

	float* ptr = new float[num];

	cout << "\nWrite student grads: " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "Student [" << i + 1 << "]: ";
		cin >> *(ptr + i);
	}

	cout << "\nStudent Grads: " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "Student [" << i + 1 << "]: " << *(ptr + i) << endl;
	}

	return 0;
}