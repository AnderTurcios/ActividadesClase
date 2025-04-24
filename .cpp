#include <iostream>
#include <cmath>

using namespace std ;
int main () {

float Num1, Num2, Sum ;
int Option ;

cout << "------------------------------------------" << endl;
cout << "Seleccione la operacion que desea realizar" << endl;
cout << "------------------------------------------" << endl;
cin >> Option ;


switch (Option)
{
case 1: 
{
    cout << "Ingrese el primer numero" <<endl ;
    cin >> Num1 ;
    cout << "Ingrese el segundo numero" <<endl ;
    cin >> Num2 ;
    Sum= Num1 + Num2 ;
    cout << "El resultado es " << Sum << endl;

break;
}

}

return 0 ;
}

/*
switch (expression)
{
case constant expression:
    // code 
    break;

default:
    break;
}
*/