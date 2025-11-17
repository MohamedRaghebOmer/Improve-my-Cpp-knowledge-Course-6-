#include <iostream>
using namespace std;

int PrintNumbers(int N, int M)
{
	if (M > 0)
	{
		N =  N * N;
		PrintNumbers(N, M - 1);
	}
	return N;
}

int main()
{
	int Result = PrintNumbers(5, 3);
	
	cout << "Result = " << Result << endl;

	return 0;
}