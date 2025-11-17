#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct stData
{
    string Name;
    int Age;
    string Job;
};

void ReadPersonData(stData& Data)
{
    cout << "What is your name? " << endl;
    getline(cin, Data.Name);

    cout << "How old are you? " << endl;
    cin >> Data.Age;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "What's your job? " << endl;
    getline(cin, Data.Job);
}

void ReadAllPersons(stData DataArr[], int Size)
{
    for (int i = 0; i < Size; i++)
    {
        cout << "\n================================= Person " << i + 1 << " ================================" << endl;
        ReadPersonData(DataArr[i]);
    }
}

void DisplayPersonsTable(stData DataArr[], int Size)
{
    cout << endl;
    cout << "|-------------------|---------|--------------|" << endl;
    cout << "|        Name       |    Age  |      Job     |" << endl;
    cout << "|-------------------|---------|--------------|" << endl;

    for (int i = 0; i < Size; i++)
    {
        cout << "|" << setw(19) << DataArr[i].Name
            << "|" << setw(9) << DataArr[i].Age
            << "|" << setw(14) << DataArr[i].Job
            << "|" << endl;
        cout << "|-------------------|---------|--------------|" << endl;
    }
}

int main()
{
    const int PersonsCount = 3;
    stData Data[PersonsCount];

    ReadAllPersons(Data, PersonsCount);
    DisplayPersonsTable(Data, PersonsCount);

    return 0;
}
