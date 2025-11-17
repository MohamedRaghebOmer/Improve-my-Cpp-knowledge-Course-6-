#include <iostream>
#include <vector>
using namespace std;

int main()
{
 // vector <type> name    = {       elements     };
    vector <int> vNumbers = { 10, 20, 30, 40, 50 };

    // Print vector
    cout << "Vector elements are: " << endl;
    for (int Number1 : vNumbers)
    {
        cout << Number1 << endl;
    }


//                      Second practise

    vector <float> vfloat = { 100.5, 200.9, 300.1, 400.7, 500.2 };

    cout << "\nVector2 elements are: " << endl;
    for (float Number2 : vfloat)
    {
        cout << Number2 << endl;
    }




    return 0;
}

