#pragma warning (disable : 4996)

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t t = time(0); // Get time now

    char* dt = ctime(&t); // Convert to string type
    cout << "Local date and time is: " << dt << endl;

    // Conveting now to tm struct for UTC date/time
    tm* gmtm = gmtime(&t);

    dt = asctime(gmtm);
    cout << "UTC date and time is: " << dt;

    return 0;
}
