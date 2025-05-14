#include <iostream>

using namespace std;

int main()
{
    float wallet = 100, remaining;                // How many money we got
    int age = 0, globalMenu = 0, InsideMenu = 0; // This is for the menus chosen


    // Starting
    cout << "Welcome to the McDonals Menu, it's a pleassure assist you" << endl;
    cout << "But before continue, we need to know your age" << endl;
    cin >> age;

    if (age < 0 || age > 81) // validating age
    {
        cout << "Sorry, you've typed an invalid age" << endl;
    }
    else
    {
        // Main menu
        cout << "===================MENU=====================" << endl;
        cout << "| 1. Morning Menu                          |" << endl;
        cout << "| 2. Lunch Menu                            |" << endl;
        cout << "| 3. Night Menu                            |" << endl;
        cout << "| 4. Exit                                  |" << endl;
        cout << "| Hi!, What menu would you like to see?    |" << endl;
        cout << "============================================" << endl;
        cout << "=> ";
        cin >> globalMenu; // The main menu selection, Categorie

        switch (globalMenu)
        {
        case 1:
        {

            cout << "===============MORNING MENU=================" << endl;
            cout << "Good Morning!, What can I serve you?       |" << endl;
            cout << "| 1. McMoffin ($3)                         |" << endl;
            cout << "| 2. HotCake ($4.75)                       |" << endl;
            cout << "| 3. Juice ($1.25)                         |" << endl;
            cout << "| 4. Fries ($2)                            |" << endl;
            cout << "| 5. Happy Meal ($40)                      |" << endl;
            cout << "============================================" << endl;
            cout << "=> ";
            cin >> InsideMenu; // Variable for option

            switch (InsideMenu)
            { // inside switch
            case 1:
            {
                remaining = wallet - 3;
                cout << "You've selected the McMoffin" << endl;
                cout << "Your remining balance is $ " << remaining << endl;
                break;
            }
            case 2:
            {
                remaining = wallet - 4.75;
                cout << "You've selected the HotCake" << endl;
                cout << "Your remining balance is " << remaining << endl;
                break;
            }
            case 3:
            {
                remaining = wallet - 1.25;
                cout << "You've selected the Juice" << endl;
                cout << "Your remining balance is " << remaining << endl;
                break;
            }
            case 4:
            {
                remaining = wallet - 2;
                cout << "You've selected the Fries" << endl;
                cout << "Your remining balance is " << remaining << endl;
                break;
            }
            case 5:
            {
                if (age >= 0 && age < 7) // Normal
                {
                    remaining = wallet - 40;
                    cout << "You can buy the Happy meal" << endl;
                    cout << "The price is $40" << endl;
                    cout << "Your remining balance is " << remaining << endl;
                }
                if (age >= 7 && age < 14) // Double
                {
                    remaining = wallet - 80;
                    cout << "You can buy the Happy meal" << endl;
                    cout << "But it's gonna cost the double" << endl;
                    cout << "The price is $80" << endl;
                    cout << "Your remining balance is " << remaining << endl;
                }
                if (age >= 14 && age < 18) // Triple, the user CANNOT buy it
                {
                    cout << "Sorry, but you cannot buy the Happy meal" << endl;
                    cout << "the price is the triple, that means $120" << endl;
                    cout << "and your current balance is " << wallet << endl;
                } // Finishing the if
                if (age >= 18)
                {
                    cout << "Sorry, but you're too old to buy a Happy Meal XD" << endl;
                }
                break;
            }
            default:
            {
                cout << "Sorry, but you've selected a invalid option" << endl;
                break;
            }

            break;
            } // inside switch finished
            break;
        } // <== case 1 finished

        case 2:
        {
            cout << "Lunch Menu" << endl;
            cout << "=================LUNCH MENU=================" << endl;
            cout << "Good Morning!, What can I serve you?       |" << endl;
            cout << "| 1. McLunch ($3)                          |" << endl;
            cout << "| 2. PanQueso ($4.75)                      |" << endl;
            cout << "| 3. Orange Juice ($1.25)                  |" << endl;
            cout << "| 4. Fries ($2)                            |" << endl;
            cout << "| 5. Happy Meal ($40)                      |" << endl;
            cout << "============================================" << endl;
            cout << "=> ";
            cin >> InsideMenu; // Variable for option

            switch (InsideMenu)
            { // inside switch
            case 1:
            {
                remaining = wallet - 3;
                cout << "You've selected the McLunch" << endl;
                cout << "Your remining balance is $ " << remaining << endl;
                break;
            }
            case 2:
            {
                remaining = wallet - 4.75;
                cout << "You've selected the PanQueso" << endl;
                cout << "Your remining balance is " << remaining << endl;
                break;
            }
            case 3:
            {
                remaining = wallet - 1.25;
                cout << "You've selected the Orange Juice" << endl;
                cout << "Your remining balance is " << remaining << endl;
                break;
            }
            case 4:
            {
                remaining = wallet - 2;
                cout << "You've selected the Fries" << endl;
                cout << "Your remining balance is " << remaining << endl;
                break;
            }
            case 5:
            {
                if (age >= 0 && age < 7) // Normal
                {
                    remaining = wallet - 40;
                    cout << "You can buy the Happy meal" << endl;
                    cout << "The price is $40" << endl;
                    cout << "Your remining balance is " << remaining << endl;
                }
                if (age >= 7 && age < 14) // Double
                {
                    remaining = wallet - 80;
                    cout << "You can buy the Happy meal" << endl;
                    cout << "But it's gonna cost the double" << endl;
                    cout << "The price is $80" << endl;
                    cout << "Your remining balance is " << remaining << endl;
                }
                if (age >= 14 && age < 18) // Triple, the user CANNOT buy it
                {
                    cout << "Sorry, but you cannot buy the Happy meal" << endl;
                    cout << "the price is the triple, that means $120" << endl;
                    cout << "and your available balance is " << wallet << endl;
                } // Finishing the if
                if (age >= 18)
                {
                    cout << "Sorry, but you're too old to buy a Happy Meal XD" << endl;
                }
                break;
                break;
            }
            default:
            {
                cout << "Sorry, but you've selected a invalid option" << endl;
                break;
            }

            break;
                break;
            }

        case 4: // Not buying
        {
            cout << "Thanks for using McDonals Menu, come back soon!" << endl;
            break;
        }

        default:
        {
            cout << "You made an invalid selection" << endl;
            break;
        }
        }
        } //<== finished the age validation 'if'

        return 0;
    } // age if finished
}
