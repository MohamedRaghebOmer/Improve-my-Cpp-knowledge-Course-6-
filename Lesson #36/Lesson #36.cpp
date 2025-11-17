#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 20, c = 30;

	int* P = &a;
	int* J = &b;
	int* K = &c;
	
	cout << "Addreass: " << endl;
	cout << "a: " << &a << endl; // (a) addreas
	cout << "b: " << &b << endl; // (b) addreas
	cout << "c: " << &c << endl; // (c) addreas

	cout << endl;

	cout << "Adreass from pointer: " << endl;
	cout << "(P) a adddreas: " << P << endl; // (a) addreas
	cout << "(J) a adddreas: " << J << endl; // (b) addreas
	cout << "(K) a adddreas: " << K << endl; // (c) addreas
	
	cout << "\na,b,c values: " << a << " " << " " << b << " " << c << endl; // 10 20 30

	cout << "\nValues form pointers: " << endl;
	cout << "a = " << *P << endl; // 10
	cout << "b = " << *J << endl; // 20
	cout << "c = " << *K << endl; // 30

	*P = 50; // a = 50
	*J = 60; // b = 60
	*K = 70; // c = 70

	cout << "\nValues from pointer after adding: " << endl;
	cout << "a = " << *P << endl; // a = 50
	cout << "b = " << *J << endl; // b = 60
	cout << "c = " << *K << endl; // c = 70

	return 0;
}