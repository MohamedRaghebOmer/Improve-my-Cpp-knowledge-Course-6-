#include <iostream>
using namespace std;

int main()
{
	int Page = 10, TotalPages = 100;
	float fPage = 10.123456789;

	printf("Number of page is %d %d\n", Page,  TotalPages);
	printf("\nNumber of page is %0*d\n", 10,Page);
	printf("\nNumber of page is %0*d\n", 10, TotalPages);
	printf("\nNumber of page is %.*f\n", 5, fPage);

	return 0;
}