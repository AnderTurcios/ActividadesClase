#include <iostream>

using namespace std;

int main()
{
    int score = 0; // we create the variable
    cout << "----------------------------------------" << endl;
    cout << "Please insert your score from 1-5 starts" << endl; // we ask for the score
    cout << "----------------------------------------" << endl;
    cout << "-> ";
    cin >> score;

    switch (score)
    case 1:
    {
        cout << "----------------------------------------------------" << endl;
        cout << "I notice probably you still are new, but don't worry," << endl;
        cout << "you can improve your performance :D" << endl;
        cout << "----------------------------------------------------" << endl;
        break;

    case 2:
        cout << "---------------------------------------------" << endl;
        cout << "Keep trying, I can assure you will give more " << endl;
        cout << "in the next one :D" << endl;
        cout << "---------------------------------------------" << endl;
        break;
    case 3:
        cout << "----------------------------------" << endl;
        cout << "You are a good player, aren't you?" << endl;
        cout << "Keep practicing, you'll get more" << endl;
        cout << "----------------------------------" << endl;
        break;
    case 4:
        cout << "---------------------------------------------" << endl;
        cout << "You are closest to be the first one " << endl;
        cout << "keep going" << endl;
        cout << "---------------------------------------------" << endl;
        break;
    case 5:
        cout << "-------------------------------" << endl;
        cout << "Perfection, nothing more to say" << endl;
        cout << "-------------------------------" << endl;
        break;
    }

        return 0;
}