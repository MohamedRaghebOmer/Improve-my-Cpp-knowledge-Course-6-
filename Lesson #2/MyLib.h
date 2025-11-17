#pragma once

#include <iostream>
using namespace std;

namespace MyLib
{
	void Test()
	{
		cout << "Hi, this is my first funtion in my library!" << endl;
	}

	int Sum2Numbers(int Num1, int Num2)
	{
		return Num1 + Num2;
	}
}