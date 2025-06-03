#include <iostream>

using namespace std;

// Declarar varios valores en una variable
int main()
{

    int numbers[5] = {1, 2, 3, 4, 5}; // Grupo de los valores de la variable
    // En [] es la cantidad de espacios

    cout << "Contenido del arreglo" << endl;

    // Sirve para recorrer el arreglo y mostrar sus elementos
    for (int i = 0; i < 5; i++) // el i va en aumento bajo la condicion de i <= 5
    {
        cout << "Elemento en la posicion " << i + 1 << ": " << numbers[i] << endl;
    }
    cout << "Siguiente" << endl;
    // This is not working as it's supposed to
    for (int j = 4; j >= 0; j--)
    {
        cout << "Elemento en la posicion " << j + 1 << ": " << numbers[j] << endl;
    }
    return 0;
}