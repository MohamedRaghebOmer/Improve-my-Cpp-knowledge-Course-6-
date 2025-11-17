#include <iostream>
#include <cstdio>
using namespace std;

void FillArray(int arr[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = (i + 1) * (j + 1);
		}
	}
}

void PrintArray(int arr[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%0*d  ", 2, arr[i][j]);
		}

		cout << endl;
	}
}

int main()
{
	int arr[10][10];

	FillArray(arr);
	PrintArray(arr);

	return 0;
}
