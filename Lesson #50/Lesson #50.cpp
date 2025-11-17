#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S1 = "My name is Mohamed Rahgeb, I love programming ";

    // Prints String length
    cout << "String lingth: " << S1.length() << endl;

    // Returns the letter at positoin 3
    cout << "\nThe letter at position 3 is: " << S1.at(3) << endl;

    // Add @Programing advices at the end of stirng
    S1.append("@Progamming advices");
    cout << "\nMy string after apnding: " << S1 << endl;

    cout << endl;

    // Insenrt 'Ali' in Position 7
    S1.insert(7, " Ali");
    cout << S1 << endl;

    // Prints all the next 8 letters from position 16
    cout << "\nNext 8 letters from position 16 are: " << S1.substr(16, 8) << endl;

    // Adds one character to the end of string
    S1.push_back('X');
    cout << "\nMy stirng after push back letter 'X' is: " << S1 << endl;

    // Removes the last charcter
    S1.pop_back();
    cout << "\nMy string after pop back the last letter is : " << S1 << endl;

    // Finds Ali in the string
    cout << "\nAli is exsited in position : " << S1.find("Ali") << endl;

    // Finds alli in the string 
    cout << "\nali is existed in position : " << S1.find("ali") << endl;

    if (S1.find("ali") == S1.npos)
    {
        cout << "\nAli is not found" << endl;
    }

    // Clear all letters
    S1.clear();
    cout << "\nMy string after clearing is: " << S1 << endl;

    return 0;
}
