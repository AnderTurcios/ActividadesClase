#include <iostream>

using namespace std;

int main()
{
    int number[6] = {2, 4, 5, 8, 9, 17};
    int n;             // number typed by the user
    bool find = false; // To find the N number, starting in false
    int position = 0;

    // starts
    cout << "----------------------" << endl;
    cout << "Please insert a number" << endl;
    cout << "----------------------" << endl;
    cout << "=> ";
    cin >> n;
    cout << "======================" << endl;
    cout << "Our numbers are: " << endl;
    for (int i = 0; i < 6; i++) // six is the limit in the array
    {
        cout << "number " << i + 1 << ": " << number[i] << endl; // the position of the number with i+1 to start

        if (n == number[i])
        {
            find = true; // when the number appears
            position = i + 1; // the position i plus 1
        }
    }
    cout << "======================" << endl;

    // checking
    if (find == true) // if the number is
    {
        cout << "--------------------------------------------" << endl;
        cout << "Your number is in the list => | " << n << " |" << endl;
        cout << "In the position number " << position << endl;
        cout << "--------------------------------------------" << endl;
    }
    else // keeping in mind that "find" is false by default (check line 9)
    {
        cout << "--------------------------------------------" << endl;
        cout << "Sorry, but your number is not in the list" << endl;
        cout << "--------------------------------------------" << endl;
    }
    cout << endl; // just to separate
    return 0;
}