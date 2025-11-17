#include <iostream>

#include "MyLib.h";
#include "MyInputLib.h";

using namespace std;

int main()
{
    MyLib::Test();
    cout << MyLib::Sum2Numbers(10, 20) << endl;
    cout << MyInputLib::ReadNumber();

    return 0;
}