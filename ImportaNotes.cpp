#include <iostream>

using namespace std;

// prototipo
int suma(int a, int b) // declarando variables dentro de otra
{
    return a + b; // como funciona
}
int resta(int a, int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}

int main()
{
    int num1 = 5, num2 = 7, num3 = 4, num4 = 2;
    cout << "La suma es " << suma(num1, num4) << endl;
    cout << "la resta es " << resta(num2, num3) << endl;
    cout << multi(num2, num2) << endl;
    // llamamos suma y sus parametros

    return 0;
}

/*
Usar librerias .h
la logica va dentro de las librerias .h, por ejemplo la de un heroe dentro de un RPG
estas pueden verse como hijos que pueden usarse dentro del cuerpo del codigo o el padre (.cpp)
similar a la programacion orientada a objetos

podemos tener una libreria para un heroe y para un villano, y en una batalla importar a un archivo .h
battle = hijo mayor
-donde esta la logica de heroe y villano
    -heroe y villanos son los hijos del hijo mayor y toda su logica estara dentro de la logica de battle



CONCATENAR: no se guarda en una variable
RETURN: se guarda y lo devuelve
VOID: imprimir algo que no se guarda en ningun espacio de memoria
*/