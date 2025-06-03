#include <iostream>

using namespace std;

int main()
{
    int n;     // asking the user
    int a = 0; // variable for making the number
    int b = 1;
    int c = 1;

    cout << "================================================" << endl;
    cout << "Please type the number of digits you want to see" << endl;
    cout << "================================================" << endl;
    cout << "=> ";
    cin >> n; // the number the user type
    cout << "------------------------------------------------" << endl;
    cout << "| ";
    cout << 0 << " " << 1 << " ";    // Printing the two first numbers
    for (int i = 1; i <= n - 2; i++) // subtrac two to N cause we already print two numbers
    {
        c = a + b;
        cout << c << " ";
        a = b; // re-declaring the variables
        b = c;
    }
    cout << "|";
    return 0;
}