#include <iostream>

using namespace std;

int main()
{
    int option = 0;
    double value = 0;      // The Money value
    double convertion = 0; // the converted value

    // First explain what is this programm
    cout << "------------------------------------------------------------" << endl;
    cout << "               This is a Coin Value Converter" << endl;
    cout << "Please insert the option in base the convertion you want to " << endl;
    cout << "1 = USD to EUR" << endl; // Euro
    cout << "2 = USD to JPY" << endl; // Japanese Yen
    cout << "3 = USD to GBP" << endl; // Grand Britain Pound
    cout << "------------------------------------------------------------" << endl;
    cin >> option; // we ask for the option

    switch (option)
    {
    case 1:

        cout << "--------------------" << endl;
        cout << "USD to EUR Converter" << endl;
        cout << "--------------------" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "Please insert the value you want to convert" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "-> ";
        cin >> value;

        convertion = value * 0.88; // This is the convertion formula

        cout << "The convertion from " << value << " USD to EUR is " << convertion << " EUR" << endl;
        break;

    case 2:

        cout << "--------------------" << endl;
        cout << "USD to JPY Converter" << endl;
        cout << "--------------------" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "Please insert the value you want to convert" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "-> ";
        cin >> value;

        convertion = value * 142.92; // This is the convertion formula

        cout << "The convertion from " << value << " USD to JPY is " << convertion << " JPY" << endl;
        break;

    case 3:

        cout << "--------------------" << endl;
        cout << "USD to GBP Converter" << endl;
        cout << "--------------------" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "Please insert the value you want to convert" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "-> ";
        cin >> value;

        convertion = value * 0.75; // This is the convertion formula

        cout << "The convertion from " << value << " USD to GBP is " << convertion << " GBP" << endl;
        break;

    default: // This is for a invalid option
        cout << "------------------------------------------" << endl;
        cout << "You select a wrong option. Please try again" << endl;
        cout << "------------------------------------------" << endl;
    }

    return 0;
}
