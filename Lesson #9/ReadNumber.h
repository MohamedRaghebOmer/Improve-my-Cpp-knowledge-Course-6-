#pragma once

#include <iostream>
using namespace std;

namespace ReadNumber
{
	int ReadPositiveNumber(string Message)
	{
		int Number;

		do
		{
			cout << Message << endl;
			cin >> Number;
		} while (Number <= 0);

		return Number;
	}

	int ReadNumberInRang(int From, int To, string Message)
	{
		int Number;

		do
		{
			cout << Message << endl;
			cin >> Number;
		} while (Number < From || Number > To);

		return Number;
	}

	int ReadNumber(string Message)
	{
		int Number;

		cout << Message << endl;
		cin >> Number;

		return Number;
	}

}