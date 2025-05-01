#include <iostream>

using namespace std;

int main()
{
    int NumberA = 0; // variables de entrada
    int NumberB = 0;

    int NumberA2 = 0; // resultados de la resta
    int NumberB2 = 0;

    cout << "-----------------------------------------------------------" << endl;
    cout << "Please type two number between 0 and 100 (not decimal numbers)" << endl;
    cout << "Type your first number" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cin >> NumberA;

    cout << "-----------------------------------------------------------" << endl;
    cout << "Type your second number" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cin >> NumberB;

    // NumberA2 = (100 - NumberA);
    // NumberB2 = (100 - NumberB);

    if (NumberA > 100)
    {
        NumberA2 = NumberA - 100;
    }
    else
    {
        NumberA2 = 100 - NumberA;
    }

    if (NumberB > 100)
    {
        NumberB2 = NumberB - 100;
    }
    else
    {
        NumberB2 = 100 - NumberB;
    }

    if (NumberA2 > NumberB2)
    {
        cout << "The closest number to 100 is " << NumberB << endl;
    }
    else if (NumberB2 > NumberA2)
    {
        cout << "The closest number to 100 is " << NumberA << endl;
    }
    else if (NumberA2 = NumberB2)
    {
        cout << "Both numbers are equaly close to 100" << endl;
    }
    else
    {
        cout << "You typed a invalid value" << endl;
    }
    

        return 0;
}