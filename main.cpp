#include <iostream>

using namespace std;

int main()
{
    int *p_1 = new int;
    int *p_2 = new int;
    int *p_temp = new int;

    cout << "Enter the first number -> ";
    cin >> *p_1;

    cout << "Enter the second number -> ";
    cin >> *p_2;

    *p_temp = *p_1;
    *p_1 = *p_2;
    *p_2 = *p_temp;

    cout << "\nNow your first number has become -> " << *p_1 << endl;
    cout << "Now your second number has become -> " << *p_2 << endl;

    delete p_1;
    delete p_2;
    delete p_temp;
    return 0;
}