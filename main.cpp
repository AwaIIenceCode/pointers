#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int SIZE;
    int *sum_elements = new int(0);

    cout << "Enter the size of the array -> ";
    cin >> SIZE;

    if (SIZE <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int *arr = new int[SIZE];

    cout << "Your array [  ";

    for (int *ptr = arr; ptr < arr + SIZE; ptr++)
    {
        *ptr = rand() % 10;
        *sum_elements += *ptr;
        cout << *ptr << "  ";
    }

    cout << "]" << endl;
    cout << "Sum elements in your array = " << *sum_elements << endl;

    delete sum_elements;
    delete [] arr;

    return 0;
}
