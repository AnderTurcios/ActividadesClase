#include <iostream>

using namespace std;

int main()
{
    int password = 1234;
    int trying;
    cout << "=========================" << endl;
    cout << "Please type your password" << endl;
    cout << "=========================" << endl;

    do
    {
        cout << "Pasword: ";
        cin >> trying;
        if (trying != password)
        {
            cout << "Incorrect pasword try again" << endl;
        }

    } while (trying != password);

    cout << "Correct password" << endl;

    return 0;
}