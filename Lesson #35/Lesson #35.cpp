#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c; " << c << endl;

	cout << endl;

	cout << "(a) addreas: " << &a << endl;
	cout << "(b) addreas: " << &b << endl;
	cout << "(c) addreas: " << &c << endl;

	cout << endl;

	int* p = &a;
	int* S = &b;
	int* J = &c;

	cout << "(P) contain (a) addreas: " << p << endl;
	cout << "(S) contain (b) addreas: " << S << endl;
	cout << "(J) contain (c) addreas: " << J << endl;

	return 0;
}