#include <iostream>
#include <string>

using namespace std;

int main()
{
    string palabra, palabraInv; // variables string

    cout << "Por favor ingrese su palabra: ";
    getline(cin, palabra, '\n');

    int tamano = palabra.length();

    int par = palabra.length() % 2;

    if (par == 0) // comparando si es par
    {
        cout << "Es par" << endl;
    }
    else
    {
        cout << "Es impar" << endl;
    }

    for (int i = 0; i <= tamano; i++)
    {
        palabraInv[i + tamano] = palabra[i];
        cout << palabra[i];
    }

    cout << "Hola mundo" << endl;

    return 0;
}