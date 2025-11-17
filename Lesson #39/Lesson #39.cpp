#include <iostream>
using namespace std;

void Swap(int* p, int* J)
{
	int Temp;

	Temp = *p;
	*p = *J;
	*J = Temp;
}

int main()
{
	int a = 10, b = 20;
	int* P = &a;
	int* J = &b;

	cout << "Values before swaping: " << endl;
	cout << "a: " << *P << endl;
	cout << "b: " << *J << endl;

	cout << endl;
	Swap(P, J);

	cout << "values after swaping: " << endl;
	cout << "a: " << *P << endl;
	cout << "b: " << *J << endl;
	return 0;
}