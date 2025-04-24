#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a = 0, b = 0, c = 0;
    float AnswerPos, AnswerNeg;
    float FirstF = 0;

    cout << "---------------------------" << endl;
    cout << "please type the value for a" << endl;
    cout << "---------------------------" << endl;
    cin >> a;

    cout << "---------------------------" << endl;
    cout << "please type the value for b" << endl;
    cout << "---------------------------" << endl;
    cin >> b;

    cout << "---------------------------" << endl;
    cout << "please type the value for c" << endl;
    cout << "---------------------------" << endl;
    cin >> c;

    FirstF = (b * b) - (4 * a * c);

    AnswerPos = (-b + pow(FirstF, 0.5)) / (2 * a);
    AnswerNeg = (-b - pow(FirstF, 0.5)) / (2 * a);

        if (FirstF < 0)
    {
        cout << "We were unable to resolve the formula due to a complex root" << endl;
    }
    else
    {
        cout << "The answers are " << AnswerPos << endl;
        cout << "and " << AnswerNeg << endl;
    }

    return 0;
}