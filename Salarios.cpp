#include <iostream>
using namespace std;

int main()
{
    float salario = 0; // Variables
    int option = 0;
    // impuesto
    float ISSS = 0;
    float AFP = 0;
    float renta = 0;
    float liquido = 0;

    cout << "=================================================" << endl;
    cout << "Bienvenido, por favor ingrese su salario (en usd)" << endl; // pidiendo salario
    cout << "=================================================" << endl;
    cout << "=> $ ";
    cin >> salario; // pidiendo el salario

    if (salario > 0) // comprobando salario positivo y continuar
    {
        ISSS = salario * 0.03;  // calculando el 3%
        AFP = salario * 0.0725; // calculando el 7.25%

        if (ISSS > 30)
        {
            ISSS = 30; // Limite de ISSS de $30
        }
        cout << ISSS;

        cout << endl;
        cout << "==============================================" << endl;
        cout << "Por favor, ingrese el monto que desea calcular" << endl; // monto que desea calcular
        cout << "==============================================" << endl;
        cout << "------MENU-------" << endl;
        cout << "| 1. ISSS       |" << endl;
        cout << "| 2. AFP        |" << endl;
        cout << "| 3. Renta      |" << endl;
        cout << "| 4. TOTAL      |" << endl;
        cout << "| 5. Salir      |" << endl;
        cout << "-----------------" << endl;
        cout << "=> ";
        cin >> option; // option del menu

        // condicional del salario mayor que cero

        switch (option)
        {
        case 1:                       // ISSS
            salario = salario - ISSS; // calculando el salario restante
            cout << "Calculadora de impuesto del ISSS" << endl;
            cout << "El impuesto de ISSS sobre su salario es $ " << ISSS << endl;
            cout << "Su remanente es de $ " << salario << endl;

            break;

        case 2:                      // AFP
            salario = salario - AFP; // nuevo valor del salario
            cout << "Calculadora de impuesto del AFP" << endl;
            cout << "El impuesto de AFP sobre su salario es $ " << AFP << endl;
            cout << "Su remanente es de $ " << salario << endl;
            break;

        case 3:                             // Renta
            liquido = salario - ISSS - AFP; // restando ISSS and AFP al salario

            // calculando la tabla de renta
            if (liquido <= 472.00) // caso 1
            {
                cout << "Usted esta exento de renta" << endl;
                cout << "Su salario liquido es $ " << liquido << endl;
            }
            if (liquido >= 472.01 && liquido <= 895.24) // caso 2
            {
                renta = salario * 0.1; // el 10%
                cout << "Su renta es " << renta << endl;
                cout << "Su salario liquido es $ " << liquido - renta << endl;
            }
            if (liquido >= 895.25 && liquido <= 2098.10) // caso 3
            {
                renta = salario * 0.2;
                cout << "Su renta es " << renta << endl;
                cout << "Su salario liquido es $ " << liquido - renta << endl;
            }
            if (liquido > 2098.10) // caso 4
            {
                renta = salario * 0.3;
                cout << "Su renta es " << renta << endl;
                cout << "Su salario liquido es $ " << liquido - renta << endl;
            }
            break;
        case 4: // Total

            liquido = salario - ISSS - AFP - renta; // realizando restas en la variable 'liquido'

            cout << "Calculadora de todos los impuestos" << endl;
            cout << "Sus descuentos de salario bruto" << endl;
            cout << "Su salario bruto es $ " << salario << endl;
            cout << "ISSS: " << ISSS << endl;
            cout << "AFP: " << AFP << endl;
            cout << "Renta: " << renta << endl;
            cout << "Su salario liquido es $ " << liquido << endl;
            break;

        case 5: // Salir
            cout << "Gracias por utilizar la calculadora de impuesto" << endl;
            break;

        default: // en caso no se ingrese una opcion valida
            cout << "Ha ingresado una opcion invalida, intente de nuevo" << endl;
            break;
        }
    }
    else if (salario < 0) // en caso se ingrese un salario en negativo
    {
        cout << "Ha ingresado un salario negativo no se puede operar" << endl;
    }
    return 0;
}