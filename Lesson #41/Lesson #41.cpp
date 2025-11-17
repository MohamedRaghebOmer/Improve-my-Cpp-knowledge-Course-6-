#include <iostream>
using namespace std;

struct stEmployee
{
	string Name;
	int Salary;
};

int main()
{
	stEmployee Employee1, *pointer; // عرفنا متغير من نوع stEmployee وبوينتر من نفس النوع

	Employee1.Name = "Mohamed Ragheb";
	Employee1.Salary = 5000;

	pointer = &Employee1; // pointer دلوقتي بيشاور على Employee1 (العنوان بتاعه)

	cout << "Name addreas  : " << pointer << endl; // عنوان بداية الـ struct كله
	cout << "Name addreas2 :  " << &(pointer->Salary) << endl; // عنوان المتغير Salary جوا struct
	cout << "Salary: " << pointer->Salary << endl;// قيمة Salary

	return 0;
}