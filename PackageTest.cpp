#include <iostream>

using namespace std;

int main()
{
    int weight = 0;

    cout << "-------------------------------" << endl;
    cout << "Please type your package weight (in Kg please)" << endl;
    cout << "-------------------------------" << endl;
    cin >> weight ;

    if (weight >= 1 && weight <= 5)
    {
        cout << "--------------------------" << endl;
        cout << "You are going to pay $5 usd" << endl;
        cout << "--------------------------" << endl;
    }
    else if (weight >= 6 && weight <= 10)
    {
        cout << "---------------------------" <<endl; 
        cout << "You are going to pay $10 usd" <<endl;
        cout << "---------------------------" <<endl; 
    }
    else if (weight > 10)
    {
        cout <<"----------------------------" <<endl;
        cout <<"You are going to pay $15 usd" <<endl;
        cout <<"----------------------------" <<endl;
    }
    else
    {
        cout <<"---------------------------" <<endl;
        cout <<"You typed a invalid weight" << endl;
        cout <<"---------------------------" <<endl;
    }

    return 0;
}