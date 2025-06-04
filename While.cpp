#include <iostream>

using namespace std;

int main()
{

    int contador;

    cout << "Ingrese un numero" << endl;
    cin >> contador;

    while (contador <= 5 ) //si no se cumple no lo procesa
    {
        cout << "Contador en while " << contador << endl;
        contador++; // incrementa el valor
    }

    return 0;
}