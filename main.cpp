//Написати примітивний калькулятор, користуючись тільки покажчиками.

#include <iostream>

using namespace std;

int main()
{
    double *p_user_number_1 = new double;
    double *p_user_number_2 = new double;
    int *choice = new int;

    cout << "Enter the first number -> ";
    cin >> *p_user_number_1;

    cout << "Enter the second number -> ";
    cin >> *p_user_number_2;

    cout << "Enter \"1\" for sum\nEnter \"2\" for subtraction\nEnter \"3\" for division\nEnter \"4\" for multiplication" << endl;
    cin >> *choice;

    if(!cin)
    {
        cout << "Invalid input. Please enter a number!" << endl;
        delete p_user_number_1;
        delete p_user_number_2;
        delete choice;
        return 1;
    }

    switch (*choice)
    {
        case 1:
        {
            cout << *p_user_number_1 + *p_user_number_2;
            break;
        }

        case 2:
        {
            cout << *p_user_number_1 - *p_user_number_2;
            break;
        }

        case 3:
        {
            if (*p_user_number_2 == 0)
            {
                cout << "Error: Division by zero!" << endl;
            }

            else
            {
                cout << *p_user_number_1 / *p_user_number_2;
            }
            break;
        }

        case 4:
        {
            cout << *p_user_number_1 * *p_user_number_2;
            break;
        }

        default:
        {
            cout << "Invalid input. Please enter a number 1 - 4" << endl;
        }
    }

    delete p_user_number_1;
    delete p_user_number_2;
    delete choice;
    return 0;
}