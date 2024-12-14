//Используя указатели и оператор разименования, определить большеe всего из двух чисел.

#include <iostream>

using namespace std;

int main()
{
    int *p_1 = new int;
    int *p_2 = new int;

    cout << "\nEnter the first number -> ";
    cin >> *p_1;
    cout << "\nEnter the second number -> ";
    cin >> *p_2;

    if (*p_1 < *p_2)
    {
        cout << "Number two " << *p_2 << " is more\n" << endl;
    }

    else if (*p_1 > *p_2)
    {
        cout << "Number one " << *p_1 << " is more\n" << endl;
    }

    else
    {
        cout << "Numbers are equal" << endl;
    }

    delete p_1;
    delete p_2;
    return 0;
}

