#include <iostream>
#include <ctime>
#include <thread>

using namespace std;
using namespace std::chrono;

int main()
{
    srand(time(NULL));

    int SIZE;

    cout << "Enter the size of your array -> ";
    cin >> SIZE;

    if (!cin || SIZE <= 0)
    {
        cout << "Invalid input or array size!" << endl;
        return 1;
    }

    int *first_arr = new int[SIZE];

    for (int *p_i = first_arr; p_i < first_arr + SIZE; p_i++)
    {
        cout << "Enter the " << (p_i - first_arr + 1) << " element of your array -> ";
        cin >> *p_i;
        cout << endl;
    }

    cout << "Your first array [  ";

    for (int *p_i = first_arr; p_i < first_arr + SIZE; p_i++)
    {
        cout << *p_i << "  ";
    }

    cout << "]" << endl;

    cout << "Your reversed array [  ";

    for (int *p_i = first_arr + SIZE - 1; p_i >= first_arr; p_i--)
    {
        cout << *p_i << "  ";
        this_thread::sleep_for(seconds(1));
    }

    cout << "]" << endl;

    delete[] first_arr;

    return 0;
}

/*for (int *p_start = first_arr, *p_end = first_arr + SIZE - 1; p_start < p_end; p_start++, p_end--)
{
int temp = *p_start;
*p_start = *p_end;
*p_end = temp;
}*/
