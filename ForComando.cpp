#include <iostream>

using namespace std;

int main()
{
    //las variables
    int limit = 0; //sera el limite
    int number = 0;
    int suma = 0; //el intervalo

    //inicia
    cout << "Por favor ingrese un numero hasta donde desea contar" << endl;
    cin >> limit;
    cout << "Ingrese de cuanto en cuanto desea contar" << endl;
    cin >> suma;
    cout << "La lista de numero es: " << endl;

    for (number; number < (limit + 1); number= number + suma)
    {
        cout << "Number: " << number << endl;
    }

    return 0;
}
