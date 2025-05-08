#include <iostream>

using namespace std;

int main()
{
    // Variables
    int score = 0;
    char letter = 'R'; // The letter variable

    // Start the program with explication
    cout << "===============================================================" << endl;
    cout << "|             Welcome to the American Scores System            |" << endl;
    cout << "| Here you can convert your number score to a letter score     |" << endl;
    cout << "| Please type your score, It must to be a number between 0-100 |" << endl;
    cout << "|                      ONLY NUMBERS, NO TEXT                   |" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "=> "; // to indicate where the score appears
    cin >> score;
    // The if funtion with the score variable

    if (score > 90 && score <= 100) // A score
    {
        letter = 'A';
    }
    if (score < 90 && score >= 85) // B score
    {
        letter = 'B';
    }
    if (score < 85 && score >= 80) // C score
    {
        letter = 'C';
    }
    if (score < 80 && score >= 70) // D score
    {
        letter = 'D';
    }
    if (score < 70 && score >= 69) // E score
    {
        letter = 'E';
    }
    if (score >= 0 && score < 69) // F score
    {
        letter = 'F';
    }

    // Messages to print depending on the letter
    switch (letter)
    {
    case 'A':

    {
        cout << "=================================================" << endl;
        cout << "Congratulations!, you got A" << endl;
        cout << "Feel glad of yourself, you've made a great efford" << endl;
        cout << "=================================================" << endl;
        break;
    }
    case 'B':

    {
        cout << "=================================================" << endl;
        cout << "Congratulations!, you got B" << endl;
        cout << "I can see talent inside you, keep getting better" << endl;
        cout << "=================================================" << endl;
        break;
    }
    case 'C':

    {
        cout << "=======================================================" << endl;
        cout << "Good!, you got C" << endl;
        cout << "You made a great efford, keep working in your knowledge" << endl;
        cout << "=======================================================" << endl;
        break;
    }
    case 'D':

    {
        cout << "==================================" << endl;
        cout << "You got D, not bad" << endl;
        cout << "but do not conform with that score" << endl;
        cout << "==================================" << endl;
        break;
    }
    case 'E':

    {
        cout << "=================================" << endl;
        cout << "You got a E" << endl;
        cout << "You didn't fail, but keep working" << endl;
        cout << "=================================" << endl;

        break;
    }
    case 'F':

    {

        cout << "===================================================" << endl;
        cout << "You got a F, it's just a bad day" << endl;
        cout << "you can get better in the future if you keep trying" << endl;
        cout << "===================================================" << endl;

        break;
    }
    default:
    {
        // The user inserted a wrong value, it finishes

        cout << "=============================================" << endl;
        cout << "Sorry, but you have entered an invalid number" << endl;
        cout << "=============================================" << endl;

        break;
    }
    } // closing the switch
    return 0;
}