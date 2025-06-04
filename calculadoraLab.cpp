#include <iostream>
using namespace std;
int main()
{
    int option = 0; // para la opcion del menu
    float Num1 = 0; // declarando variables
    float Num2 = 0;
    float answer = 0;

    cout << "CALCULADORA" << endl;
    cout << "Por favor seleccione la operacion que desea realizar" << endl;
    cout << "==================" << endl; // el menu en cuestion
    cout << "| 1. Suma        |" << endl;
    cout << "| 2. Restar      |" << endl;
    cout << "| 3. Multiplicar |" << endl;
    cout << "| 4. Division    |" << endl;
    cout << "| 5. Salir       |" << endl;
    cout << "==================" << endl;
    cout << "=> ";
    cin >> option;
    if (option >= 1 && option <= 4) //opciones de uno a cuatro
    {
        cout << "Por favor ingresar el primer numero" << endl;
        cout << "=> ";
        cin >> Num1;
        cout << "Por favor ingresar el segundo numero" << endl;
        cout << "=> ";
        cin >> Num2;

        switch (option)
        {
        case 1: // suma
        {
            answer = Num1 + Num2;
            cout << "Su respuesta es " << answer << endl;
            break;
        }
        case 2: // restar
        {
            answer = Num1 - Num2;
            cout << "Su respuesta es " << answer << endl;
            break;
        }
        case 3: // Multiplicar
        {
            answer = Num1 * Num2;
            cout << "Su respuesta es " << answer << endl;
            break;
        }
        case 4: // division
        {
            if (Num2 == 0)
            {
                // en caso que la division sea entre cero
                cout << "Su division es invalida" << endl;
            }
            else
            {
                answer = Num1 / Num2;
                cout << "Su respuesta es " << answer << endl;
            }
            break;
        }
        }
    }
    else if (option == 5) //si la opcion es cinco
    {
        cout << "Gracias por utilizar mi calculadora" << endl;
    }
    else //opcion diferente
    {
        cout << "Opcion invalida" << endl;
    }
    return 0;
}