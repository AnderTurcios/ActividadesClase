#include <iostream>

using namespace std;

int main()
{
    int n; // declarando la variable
    int multi;
    char wait = ' ';

    // empezando
    cout << "===================================" << endl;
    cout << "| Mostrador de tabla del 1 al 10  |" << endl;
    cout << "| Ingrese un numero positivo      |" << endl;
    cout << "===================================" << endl;
    cout << "=> ";
    cin >> n; // pidiendo el numero

    if (n < 0)
    {
        cout << "Ha ingresado un numero negativo" << endl;
    }
    else
    {

        cout << "==========================" << endl;
        cout << "La tabla de " << n << " es:" << endl;
        for (int i = 1; i <= 10; i++) // en este caso el limite es n*10 que es final
        {
            multi = n * i; // multiplicamos la base por cada numero de i que aumenta

            cout << n << "*" << i << "= " << multi << endl;
        }
        cout << "==========================" << endl;
    }

    cout << "Gracias por usar la calculadora :D" << endl;
    cin >> wait ;


    return 0;
}
