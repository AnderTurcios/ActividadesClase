#include <iostream>

using namespace std;

// using the Bubble Sort

void ordered_numbers(int array[], int size)
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

int main() // Showing in console
{
    int array[5] = {5, -9, 7, -17, 2};             // ordered 2,5,7,9,17
    int size = (sizeof(array) / sizeof(array[0])); // array elements
    ordered_numbers(array, size);
    cout << "Ordered numbers: ";
    
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ", "; // priting the numbers
    }
    cout << endl;
    return 0;
}
