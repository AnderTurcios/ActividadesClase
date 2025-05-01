#include <iostream>
using namespace std;
int main()
{
    int speed = 0;
    int kind = 0;

    cout << "-----------------------------------------------------------" << endl;
    cout << "Please type a number according to the class of your vehicle" << endl;
    cout << "1 = Bike, 2 = Kia Soul, 3 = 44 Bus" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cin >> kind;

    cout << "-------------------------------" << endl;
    cout << "Please type the speed (in Km/h)" << endl;
    cout << "-------------------------------" << endl;
    cin >> speed;

    if (kind == 1) // moto
    {
        if (speed <= 60)
        {
            cout << kind << endl;
            cout << "You are not going to pay anything" << endl;
        }
        else if (speed > 60 && speed < 80)
        {
            cout << "Your fine is $100" << endl;
        }
        else if (speed > 80)
        {
            cout << "Your fine is $1000" << endl;
        }

        return 0;
    }



    else if (kind == 2) // Kia Soul
    {
        if (speed <= 70)
        {
            cout << "You are not going to pay anything" << endl;
        }
        else if (speed > 70 && speed < 90 )
        {
            cout << "Your fine is $200" << endl;
        }
        else if (speed > 90)
        {
            cout << "Your fine is $1111" << endl;
        }
        return 0;
    }

    else if (kind == 3) // La 44

    {
        if (speed <= 80)
        {
            cout << "You are not going to pay anything" << endl;
        }
        else if (speed > 80 && speed < 100)
        {
            cout << "Your fine is $1500" << endl;
        }
        else if (speed > 100)
        {
            cout << "Your fine is $30,000" << endl;
        }
        return 0;
    }


    else
    {
        cout << "You typed a wrong number" << endl;
    }

    return 0;
}