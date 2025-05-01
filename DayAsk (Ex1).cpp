#include <iostream>
using namespace std;

int main()
{
    int day = 0;
    cout << "------------------------------------------------" << endl;
    cout << "Please, insert a number according to the Weekday" << endl;
    cout << "------------------------------------------------" << endl;

    cout << "Monday = 1" << endl; // A menu in order to help the user
    cout << "Tuesday = 2" << endl;
    cout << "Wendesday = 3" << endl;
    cout << "Thursday = 4" << endl;
    cout << "Friday = 5" << endl;
    cout << "Saturday = 6" << endl;
    cout << "Sunday = 7" << endl;
    cout << "Option  -> ";
    cin >> day; // Here we ask for the number

    switch (day)
    {
    case 1: // MONDAY
        cout << "The day you insert is Monday" << endl;
        break;

    case 2: // TUESDAY
        cout << "The day you insert is Tuesday" << endl;
        break;
    case 3: // WEDNESDAY
        cout << "The day you insert is Wednesday" << endl;
        break;
    case 4: // THURSDAY
        cout << "The day you insert is Thursday" << endl;
        break;
    case 5: // FRIDAY
        cout << "The day you insert is Friday" << endl;
        break;
    case 6: // SATURDAY
        cout << "The day you insert is Saturday" << endl;
        break;
    case 7: // SUNDAY
        cout << "The day you insert is Sunday" << endl;
        break;
    default:
        cout << "You insert a wrong number" << endl;
        break;
    }

    return 0;
}