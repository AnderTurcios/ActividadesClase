#include <iostream>

using namespace std;

int input[4] = {}; // user input (global)

void ask_numbers() // Asking numbers
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Please type number " << i + 1 << ": " << endl;
        cin >> input[i];
    }
}

void ordered_numbers(int array[], int size) //in Bubble Sort
{
    for (int i = 0; i < size - 1; i++) // the quantity of loops
    {
        for (int j = 0; j < size - i - 1; j++) // compare the pairs
        {
            if (array[j] > array[j + 1]) // if "i" is major that the next element , "j+1", is changed
            {
                int changer = array[j]; // new variable (charger) to storage temporally
                array[j] = array[j + 1];
                array[j + 1] = changer;
            }
        }
    }
}

void print_numbers()
{
    for (int j = 0; j < 4; j++)
    {
        cout << input[j] << " ";
    }
}

int main()
{

    int size = sizeof(input) / sizeof(input[0]);
    ask_numbers();

    ordered_numbers(input, size);

    cout << "Ordered numbers: ";
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << ", "; // priting the numbers
    }
    cout << endl;

    return 0;
}