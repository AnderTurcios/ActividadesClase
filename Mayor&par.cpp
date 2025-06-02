#include <iostream>

using namespace std;

// cual numero es mayor
int MayorDeTres(int a, int b, int c)
{
    // valida los tres casos de mayor que
    if (a > b && a > c) // dos condiciones
        return a;
    else if (b > c)
        return b;
    else
        return c;
    // realiza un filro en cada linea
}

bool esPar(int n) // si es par o impar
{
    return n % 2 == 0;
}
int main()
{
    // variables
    int num1 = 25, num2 = 9, num3 = 18, n;

    cout << "el numero mayor es " << MayorDeTres(num1, num2, num3) << endl;

    n = MayorDeTres(num1, num2, num3); // Variable en que se guarda la funcion

    // verifica si es par
    if (esPar(n) == 1)
    {
        cout << "El numero es par" << endl;
    }
    else
    {
        cout << "El numer es impar" << endl;
    }

    return 0;
}