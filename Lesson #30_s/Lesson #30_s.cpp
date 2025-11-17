#include <iostream>
#include <vector>
using namespace std;

struct stStudent
{
    string FristName;
    string LastName;
    float Mark;
};

int main()
{
    vector <stStudent> vStudents;
    stStudent TempStudent;

    TempStudent.FristName = "Mohamed";
    TempStudent.LastName = "Ragheb";
    TempStudent.Mark = 100;
    vStudents.push_back(TempStudent);

    TempStudent.FristName = "Nesma";
    TempStudent.LastName = "Ragheb";
    TempStudent.Mark = 90;
    vStudents.push_back(TempStudent);

    TempStudent.FristName = "Basma";
    TempStudent.LastName = "Ragheb";
    TempStudent.Mark = 80;
    vStudents.push_back(TempStudent);

    int Counter = 1;
    
    // Print Students data
    for (stStudent &Student : vStudents)
    {

        cout << "Student #" << Counter << endl;
        cout << "First Name: " << Student.FristName << endl;
        cout << "Last Name : " << Student.LastName << endl;
        cout << "Mark      : " << Student.Mark << endl;
        cout << endl;
        Counter++;
    }
    
    return 0;
}
