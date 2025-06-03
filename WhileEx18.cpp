#include <iostream>

using namespace std;

int main()
{
    int number = 37;
    int trying;
    int round = 1;
    cout << "=======================" << endl;
    cout << "Guess the secret number" << endl;
    cout << "=======================" << endl;

    do
    {

        cout << "Attempts: " << round << " of 5" << endl;
        cout << "Type a number between 1 and 50: "; // Asking the number
        cin >> trying;

        if (trying > number)
        {
            cout << "------------------------" << endl;
            cout << "You are above the number" << endl;
            cout << "------------------------" << endl;
            cout << endl;
        }
        else if (trying < number)
        {
            cout << "------------------------" << endl;
            cout << "You are under the number" << endl;
            cout << "------------------------" << endl;
            cout << endl;
        }
        else if (trying == number) // if the user guesses the numebr
        {
            cout << "----------------------------------------------------" << endl;
            cout << "Congratulations, you've discovered the secret number" << endl;
            cout << "----------------------------------------------------" << endl;

            return 0; // ends the code
        }
        round = round + 1; // increase 1 each loop

    } while (round <= 5); // until the 5 attempt

    cout << "==============================================" << endl; // not guessed
    cout << "Sorry but you have reached the limit of attempts" << endl;
    cout << "==============================================" << endl;

    return 0;
}