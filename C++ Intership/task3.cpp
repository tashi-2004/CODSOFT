//Tashfeen Abbasi
//Task 3
//NUCES,ISLAMABAD
//Calculator
#include <iostream>
using namespace std;

int main()
{
    double t1;
    double t2;
    char input;

    cout << "Enter the first number: ";
    cin >> t1;
    cout << endl;
    cout << "Enter the second number: ";
    cin >> t2;
    cout << endl;
    cout << "Select from the list" << endl << endl;
    cout << "\t\t\t_____________________" << endl;
    cout << "\t\t\t| 1) Addition       |  " << endl;
    cout << "\t\t\t| 2) Subtraction    |" << endl;
    cout << "\t\t\t| 3) Multiplication |" << endl;
    cout << "\t\t\t| 4) Division       |" << endl;
    cout << "\t\t\t|___________________|" << endl;
    cout << endl;
    cin >> input;
    cout << endl;
    switch (input)
    {
    case '1':
        cout << "Result: " << t1 + t2 << endl;
        break;
    case '2':
        cout << "Result: " << t1 - t2 << endl;
        break;
    case '3':
        cout << "Result: " << t1 * t2 << endl;
        break;
    case '4':
        if (t2 != 0)
        {
            cout << "Result: " << t1 / t2 << endl;
        }
        else
        {
            cout << "Can not divide by 0" << endl;
        }
        break;
    default:
        cout << "Invalid operation." << endl;
    }

    return 0;
}
