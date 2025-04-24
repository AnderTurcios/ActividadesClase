#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    int Num, suma, res, mul, potencia;
    float div, respaldo;

    cout << "Ingrese un numero por favor ";
    cin >> Num;

    suma = Num + 10;
    res = Num - 5;
    mul = Num * 2;
    respaldo = Num;
    div = respaldo / 4;
    potencia = pow(Num, 2);

    cout << "Los resulados son los siguintes" << endl;
    cout << suma << endl;
    cout << res << endl;
    cout << mul << endl;
    cout << potencia << endl;
    cout << div << endl;

    bool NumberComp = (Num > 0 && Num % 2 == 0); // al usar bool se crea la nueva variable

    if (NumberComp == 0) // I can use 0 or false
    {
        cout << "El valor es falso" << endl;
    }
    else if (NumberComp == 1) // I can use 1 or True
    {
        cout << "El valor es verdadero" << endl;
    }

    string Select = "x";

    cout << '-----------------------------' << endl;
    cout << "Desea ingresar otro numero" << endl;
    cout << '-----------------------------' << endl;
    cout << "Y para si, N para no" << endl;

    cin >> Select;
    if (Select == "Y")
    {
    }

    return 0;
}