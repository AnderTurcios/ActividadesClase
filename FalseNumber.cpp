#include <iostream>

using namespace std;

int main()
{

    int Number = 0;

    cout << "ingrese un numero por favor " << endl;
    cin >> Number;

    if (Number < 0)
    {
        cout << "su numero es negativo" << endl;
    }
    else if (Number == 0)
    {
        cout << "Su numero es 0" << endl;
    }

    else 
    {

        cout << "su numero es positivo" << endl;
    }

    return 0;
}
