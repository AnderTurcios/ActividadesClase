#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    bool primo = true;

    cout << "ingresa un numero por favor" << endl;
    cin >> n;

    if (n <= 1)
    {
        primo = false;
    }
    else // es caso no sea <=1
    {
        for (int i = 2; i * i <= n; i++) // i*i debe ser menor o igual a n
        {
            cout << n << " and " << i << endl; // ver tanto n como i aumentando
            if (n % i == 0)
            {
                primo = false;
            }
        }
    }

    if (primo == true)
    {
        cout << "su numero " << n << " es primo" << endl;
    }
    else
    {
        cout << "su numero " << n << " NO es primo" << endl;
    }

    return 0;
}