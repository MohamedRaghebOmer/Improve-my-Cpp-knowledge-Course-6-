#include <iostream>
using namespace std;

int main()
{
	int* pointerX;
	float *pointerY;
	
	pointerX = new int;
	pointerY = new float;

	*pointerX = 32;
	*pointerY = 34.223;

	cout << "PointerX: " << *pointerX << endl;
	cout << "PointerY: " << *pointerY << endl;

	delete pointerX;
	delete pointerY;

	return 0;
}