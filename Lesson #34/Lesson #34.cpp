#include <iostream>
using namespace std;

int main()
{
	int a = 10; 
	int& x = a; // This is mean: take the same place belongs to (a) and creat a nother name to (a) -> (x)

	cout << "(a) Addreas: " << &a << endl; // Prints (a) addreas
	cout << "(x) Addreas: " << &x << endl; // Prints the same addreas

	cout << endl;

	cout << "a: " << a << endl; // Prints the Value : 10
	cout << "x: " << x << endl; // The same value : 10
	return 0;
}