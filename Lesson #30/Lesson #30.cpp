#include <iostream>
#include <vector>
using namespace std;

struct stEmployee
{
    string FirstName;
    string LastName;
    short Age;
    int Salary;
};

int main()
{
    vector <stEmployee> vEmployees;

    stEmployee tempEmployee;

    tempEmployee.FirstName = "Mohamed";
    tempEmployee.LastName = "Abu-Hahhoud";
    tempEmployee.Age = 44;
    tempEmployee.Salary = 5000;
    vEmployees.push_back(tempEmployee);

    tempEmployee.FirstName = "Ali";
    tempEmployee.LastName = "Maher";
    tempEmployee.Age = 25;
    tempEmployee.Salary = 3000;
    vEmployees.push_back(tempEmployee);

    tempEmployee.FirstName = "Aya";
    tempEmployee.LastName = "Omran";
    tempEmployee.Age = 22;
    tempEmployee.Salary = 2000;
    vEmployees.push_back(tempEmployee);

    cout << "Vector Employees: " << endl;
    for (stEmployee& Employee : vEmployees)
    {
        cout << "FirstName : " << Employee.FirstName << endl;
        cout << "LastName  : " << Employee.LastName << endl;
        cout << "Age       : " << Employee.Age << endl;
        cout << "Salary    : " << Employee.Salary << endl;
        cout << endl;
    }

    return 0;
}

