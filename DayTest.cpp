#include <iostream>

using namespace std;

int main()
{

    int Day = 0;

    cout << "------------------------------------------------------------------" << endl;
    cout << "Please type a number between 1 and 7 (1 is Monday and 7 is Sunday)" << endl;
    cout << "------------------------------------------------------------------" << endl;

    cin >> Day;

    if (Day >= 1 && Day <= 5)
    {
        cout << "You inserted a business day" << endl;
    }
    else if (Day >= 6 && Day <= 7)
    {

        cout << "--------------------------" << endl;
        cout << "You inserted a weekend day" << endl;
        cout << "--------------------------" << endl;
    }
    else
    {
        cout << "------------------------------------------" << endl;
        cout << "You typed a invalid number, please try again" << endl;
        cout << "------------------------------------------" << endl;
    }

    return 0;
}