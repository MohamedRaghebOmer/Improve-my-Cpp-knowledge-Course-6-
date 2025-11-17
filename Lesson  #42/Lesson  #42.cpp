#include <iostream>
using namespace std;

int main()
{
    int Number = 10;
    float fNumber = 10.53;
    void* pointer;

    pointer = &Number; // نخزن عنوان المتغير Number في البوينتر

    cout << pointer << endl; // يطبع عنوان Number

    // لازم نحول نوع البوينتر لـ int* علشان نقدر نطبع القيمة
    cout << *(static_cast<int*>(pointer)) << endl;

    pointer = &fNumber; // نخزن عنوان المتغير fNumber

    cout << "fNumber address: " << pointer << endl; // يطبع عنوان fNumber
    cout << "fNumber value: " << *(static_cast<float*>(pointer)) << endl; // يطبع قيمة fNumber
    return 0;
}

/*
ملاحظات هامة:
- الـ void* يقدر يخزن أي عنوان (Int, Float, Struct...) من غير مشكلة.
- لو عايز تطبع العنوان نفسه → النوع مش مهم.
- لو عايز توصل للقيمة → لازم تحول البوينتر لنوع مناسب قبل ما تعمل Dereference.
*/
