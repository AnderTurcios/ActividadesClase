#include <iostream> //iostream es una libreria 
#include <cmath>

using namespace std;
int modongo = 0; //esta variable es global, puede manipularse en todo el codigo


int main () {                                   // variables locales, dentro del cuerpo
    double radio, areaCirculo;  //Circulo

    cout << "ingrese el radio" << endl;
    cin >> radio ;
    areaCirculo = 3.1416*radio*radio ;

    cout << "el area del circulo es " << areaCirculo << endl;

    cout << "__________________________";
    
    int lado , areaCuadrado ; //Cuadrado
    cout << "Ingrese el lado del cuadrado" << endl;
    cin >> lado ;
    areaCuadrado = lado*lado ;
    cout << "El area del cuadrado es " << areaCuadrado << endl; 



    int base, altura, areaTriangulo ;  //Triangulo
    cout << "ingrese la base del triangulo" ;
    cin >> base ;

    cout << "ingrese la altura del triangulo" ;
    cin >> altura ; 

    areaTriangulo = (base*altura)/2 ;
    cout << "El are del triangulo es " << areaTriangulo << endl;



    return 0;

}  //aqui se cierra el cuerpo
