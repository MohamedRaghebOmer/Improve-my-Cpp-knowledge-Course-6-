// :-) بإختصار (الست) الحاجه بتعملك مسافات تقدر تكتب فيها,  بس كده
// I sware it's a fun to use setw()

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "---------|--------------------------------|---------|" << endl;
	cout << "   Code  |               Name             |   Mark  |" << endl;
	cout << "---------|--------------------------------|---------|" << endl;

	cout << setw(9) << "C101" << "|" << setw(32) << "Inroduction to programing 1" << "|" << setw(9) << "95" << "|" << endl;
	cout << setw(9) << "C103" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "95" << "|" << endl;
	cout << setw(9) << "C1033233" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;
	cout << "---------|--------------------------------|---------|" << endl;

	return 0;
}