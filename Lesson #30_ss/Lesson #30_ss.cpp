#include <iostream>
#include <vector>
using namespace std;

struct stData
{
    string FirstName;
    string LastName;
    string Department;
    string ID;
    unsigned short Age;
};

void ReadEmployees(vector <stData>& vEmployess)
{
    stData TempData;

    char ReadMore = 'y';
    while (ReadMore == 'y' || ReadMore == 'Y')
    {
        cout << "\nWhat is the employee frist name? " << endl;
        cin >> TempData.FirstName;

        cout << "What is the employee last name? " << endl;
        cin >> TempData.LastName;

        cout << "What is the employee Department? " << endl;
        cin >> TempData.Department;

        cout << "What is the employee ID? " << endl;
        cin >> TempData.ID;

        cout << "What is the employee Age? " << endl;
        cin >> TempData.Age;

        vEmployess.push_back(TempData);

        cout << "\nDo you want to add more employees? [Y]or[N]" << endl;
        cin >> ReadMore;
    }
}

void PrintEmplData(vector <stData>& vEmployess)
{
    int Counter = 1;

    cout << "\nAll employees data:\n" << endl;
    for (stData &Employee : vEmployess)
    {
        cout << "Employee #" << Counter << endl;

        cout << "Frist name: " << Employee.FirstName << endl;
        cout << "Last name : " << Employee.LastName << endl;
        cout << "Department: " << Employee.Department << endl;
        cout << "ID        : " << Employee.ID << endl;
        cout << "Age       : " << Employee.Age << endl;
        cout << endl;

        Counter++;
    }
}

int main()
{
    vector <stData> vEmployess;

    ReadEmployees(vEmployess);
    PrintEmplData(vEmployess);

    return 0;
}
