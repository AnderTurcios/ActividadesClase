#include <iostream>

using namespace std;

int main()
{

    int score = 0;
    cout << "---------------" << endl;
    cout << "Type your score" << endl;
    cout << "---------------" << endl;
    cin >> score;

    if (score >= 0 && score <= 50)
    {
        cout << "You've failed" << endl;
        cout << "You have a great potential, keep working on it";
    }

    if (score >= 51 && score <= 59)
    {
        cout << "barely passed" << endl;
        cout << "You can give more, keep training";
    }

    if (score >= 60 && score <= 74)
    {
        cout << "Approved" << endl;
        cout << "You've made a great efford";
    }

    if (score >= 75 && score <= 84)
    {
        cout << "Buena nota" << endl;
        cout << "Felicidades por ser un alumno integral";
    }

    if (score >= 85 && score <= 94)
    {
        cout << "Muy buena nota" << endl;
        cout << "Excelente, un logro mas en tu vida, sigue asi";
    }

    if (score >= 95 && score <= 100)
    {
        cout << "Excelente" << endl;
        cout << "Haz alcanzado la excelencia, continua por ese camino al exito";
    }

    if (score < 0 && score > 100)
    {
        cout << "Ha ingresado un valor que no es valido" << endl;
    }

    return 0;
}