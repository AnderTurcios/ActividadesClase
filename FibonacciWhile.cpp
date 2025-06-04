#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0, next;
    int a = 0, b = 1; // the first numbers of Fibonacci

    cout << "============================================" << endl;
    cout << "               Fibonacci Number             " << endl;
    cout << "Type the quantity of digits you want to see " << endl;
    cout << "============================================" << endl;
    cout << "=> ";
    cin >> n; // ingresar la cantidad de digitos

    // condition
    while (counter < n)
    {
        cout << a << " ";
        next = a + b;
        a = b; // passing the variable
        b = next;
        counter++;
    }

    cout << endl;

    return 0;
}