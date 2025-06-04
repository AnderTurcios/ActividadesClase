#include <iostream>

using namespace std;

int main()
{
    // The variables used during the code
    string chose1 = " ";

    // Explaining the situation before going out
    cout << "=====================================================================================" << endl;
    cout << "| Me and my parents were thinking about where to go during the sunday due to my dad |" << endl;
    cout << "| plays soccer every sunday in 'Quezaltepeque', we had to decided between eating in |" << endl;
    cout << "| a near mall or going to a closer restaurant from the soccer park.                 |" << endl;
    cout << "=====================================================================================" << endl;
    cout << endl;
    cout << "_________________________________" << endl;
    cout << "a) Eating near to home" << endl; // The two options
    cout << "b) Going close to the soccer park" << endl;
    cout << "---------------------------------" << endl;
    cout << "||Try to guess which one we decided||" << endl;
    cout << "=> ";
    cin >> chose1;                                                            // Two options in order to use the If funtion
    cout << "======================================================" << endl; // this is to divide the options and answers

    // The first option
    if (chose1 == "a")
    {
        cout << "INCORRECT" << endl;
        cout << "Because the time, we decided to going to a restaurant" << endl;
        cout << "close to the soccer park" << endl;
    }
    else if (chose1 == "b")
    {
        cout << "That's correct! We choosed going to eat in a restaurant " << endl;
        cout << "close to the soccer park" << endl;
    }
    else // if the user do not select any of the options
    {
        cout << "So, you decided not to guess, didn't you?" << endl;
        cout << "No worries, let's continue :)" << endl;
    }
    cout << endl; // a simple space

    // continuing with the story
    cout << "===============================================================" << endl;
    cout << "| Then, we decided to begin our trip, aroun 10 A.M.           |" << endl;
    cout << "| Our original idea was to arrive before the 11 A.M.,         |" << endl;
    cout << "| eating between 11 and 11:30 A.M, then go to the soccer park |" << endl;
    cout << "===============================================================" << endl;

    cout << "===============================================================" << endl;
    cout << "| But there was a problem, the traffic jam. One of the main   |" << endl;
    cout << "| highways was closed, then the traffic was harder than other |" << endl;
    cout << "| times, so our original schedule was  modified.              |" << endl;
    cout << "| And, guess what hapenned                                    |" << endl;
    cout << "===============================================================" << endl;
    cout << endl; // space
    cout << "_________________________________" << endl;
    cout << "a) We arrived late" << endl; // The two options again
    cout << "b) There was an accident" << endl;
    cout << "---------------------------------" << endl;

    chose1 = " "; // cleninig the variable, to not have any problem
    if (chose1 == "a")
    {
        cout << "You're right!" << endl;
        cout << "We arrived late to the restaurant" << endl;
        cout << "and that was a problem :(" << endl;
    }
    else if (chose1 == "b")
    {
        cout << "negative. There wasn't any accident in the highway, at  " << endl;
        cout << "least no one that affected us. The real problem, is that" << endl;
        cout << "We arrived late to the restaurant" << endl;
    }
    else // if the user do not select any of the options
    {
        cout << "So, you decided not to guess, didn't you?" << endl;
        cout << "No worries, let's continue :)" << endl;
        // This's basically the same thant the option b
        cout << "Negative. There wasn't any accident in the highway, at  " << endl;
        cout << "least no one that affected us. The real problem, is that" << endl;
        cout << "We arrived late to the restaurant" << endl;

        cout << "There were about 2 or 3 families waiting for a table," << endl;
        cout << "the time was against us, so we had to decided between" << endl;
        cout << "take the risk and wait or eating our lunch after the " << endl;
        cout << "soccer match." << endl;
        cout << "What should we do?" << endl;
        cout << endl; // space
        cout << "_________________________________" << endl;
        cout << "a) Take the risk" << endl; // The two options again
        cout << "b) Eating after the soccer match" << endl;
        cout << "---------------------------------" << endl;

    }

    return 0;
}