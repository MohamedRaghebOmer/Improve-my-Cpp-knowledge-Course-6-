#include <iostream>
#include "ReadNumber.h"
using namespace std;

void IsPositive(int Number)
{
	(Number > 0) ? cout << Number << " is a positive number "  << endl : cout << Number  << " is a nigative number " << endl;
}

int main()
{
	int Number = ReadNumber::ReadNumber("Please enter your number");
	IsPositive(Number);

	return 0;
}
