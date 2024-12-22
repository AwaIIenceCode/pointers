#include <iostream>

using namespace std;

void reverseCopyArray(int *source, int *destination, int size)
{
    int *end = source + size - 1;

    for (int i = 0; i < size; i++)
    {
        *(destination + i) = *end;
        end--;к
    }
}

int main()
{
    int size;

    cout << "Enter the size of the array -> ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid size. Exiting." << endl;
        return 1;
    }

    int* array1 = new int[size];
    int* array2 = new int[size];

    cout << "Enter elements of the array -> " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> *(array1 + i);
    }

    reverseCopyArray(array1, array2, size);

    cout << "Reversed array -> ";

    for (int i = 0; i < size; i++)
    {
        cout << *(array2 + i) << " ";
    }
    cout << endl;

    delete[] array1;
    delete[] array2;

    return 0;
}