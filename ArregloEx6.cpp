#include <iostream>

using namespace std;

int main()
{
    int number[6] = {3, 5, 7, 8, 9, 11}; // the array
    cout << "=====================" << endl;
    cout << "The ordered list is: " << endl;

    for (int i = 0; i <= 5; i++) // 5 is the limit in the array
    {
        cout << "Number " << i + 1 << ": " << number[i] << endl;
    }
    cout << "----------------------" << endl;

    // inverted order
    cout << "The inverted order is: " << endl;
    for (int i = 5; i >= 0; i--) // 0 is the first position in the array
    {
        cout << "Number " << i + 1 << ": " << number[i] << endl;
    }
    cout << "=======================" << endl;
    cout << endl;
    return 0;
}