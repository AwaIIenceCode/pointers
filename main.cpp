#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    srand(time(NULL));

    int SIZE;

    cout << "Enter the size of the array -> ";
    cin >> SIZE;

    if (!cin || SIZE <= 0)
    {
        cout << "Invalid input or array size!" << endl;
        return 1;
    }

    int *arr_1 = new int[SIZE];
    int *arr_2 = new int[SIZE];

    cout << "Your first array: [   ";

    for (int *ptr = arr_1; ptr < arr_1 + SIZE; ptr++)
    {
        *ptr = rand() % 20 - 10;
        cout << *ptr << "   ";
    }

    cout << "]" << endl;

    cout << "\nCopying first array to the second array...\n" << endl;
    this_thread::sleep_for(chrono::seconds(2));


    cout << "Your second array: [   ";

    for (int *first_ptr = arr_1, *second_ptr = arr_2; second_ptr < arr_2 + SIZE; first_ptr++, second_ptr++)
    {
        *second_ptr = *first_ptr;
        cout << *second_ptr << "   ";
    }

    cout << "]" << endl;

    delete[] arr_1;
    delete[] arr_2;

    return 0;
}
