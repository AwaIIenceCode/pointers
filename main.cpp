#include <iostream>

using namespace std;

int main()
{
    int *p_user_number = new int;

    cout << "Enter the number -> ";
    cin >> *p_user_number;

    if (!cin)
    {
        cout << "Invalid input. Please enter a number!" << endl;
        delete p_user_number;
        return 1;
    }

    if (*p_user_number > 0)
    {
        cout << "Number " << *p_user_number << " is positive" << endl;
    }

    else if (*p_user_number < 0)
    {
        cout << "Number " << *p_user_number << " is negative" << endl;
    }

    else
    {
        cout << " Number is equal zero" << endl;
    }

    delete p_user_number;
    return 0;
}