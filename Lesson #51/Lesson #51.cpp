#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    char x;
    char w;

    x = toupper('a');
    w = tolower('A');

    cout << "Converting a to A is " << x << endl;
    cout << "Converting A to a is " << w << endl;

    cout << "Is upper 'A': " << isupper('A') << endl;
    cout << "Is lower 'a': " << islower('a') << endl;

    cout << "Is digit '9': " << isdigit('9') << endl;
    cout << "Is digit 'a': " << isdigit('a') << endl;

    cout << "Is punctuation 'A': " << ispunct('A') << endl;
    cout << "Is punctuation '~': " << ispunct('~') << endl;
    
    return 0;
}
