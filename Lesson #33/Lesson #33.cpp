#include <iostream>
using namespace std;

void Add(int &a) // by refrance to livly edit the main value in the main not to make a copy
{
	a++;
}

int main()
{
	int a = 10;

	Add(a);
	cout << "a: " << a << endl; // Prints (a) value
	cout << "a Addreas: " << &a << endl; // Prints (a) hexadeciml addreas

	return 0;
}
