#include <iostream>

using namespace std;

bool esPar(int n)
{
    return n % 2 == 0; //si el residuo de dividir entre 2 es 0
    //return si es 0
}

int main()
{
int numero = 3;
if (esPar(numero)) //dentro del prototipo , retornara un true
{
    cout << "el numero es par" << endl;
}
else 
{
    cout << "su numero es impar" << endl;
}
    return 0;
}