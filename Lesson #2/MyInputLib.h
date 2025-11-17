#pragma once

#include <iostream>
using namespace std;

namespace MyInputLib
{
	int ReadNumber()
	{
		int Number;

		cout << "Please entere your number: ";
		cin >> Number;

		return Number;
	}
}

