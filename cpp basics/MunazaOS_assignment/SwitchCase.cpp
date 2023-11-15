#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation:\n";
    cout << "A. Addition\n";
    cout << "S. Subtraction\n";
    cout << "M. Multiplication\n";
    cout << "D. Division\n";
    cout << "Enter your choice (A, S, M, or D): ";
    cin >> operation;
    switch (operation)
    {
    case 'A':
    case 'a':
        cout << "Result: " << num1 + num2 << endl;
        break;

    case 'S':
    case 's':
        cout << "Result: " << num1 - num2 << endl;
        break;

    case 'M':
    case 'm':
        cout << "Result: " << num1 * num2 << endl;
        break;

    case 'D':
    case 'd':
        if (num2 != 0)
        {
            cout << "Result: " << num1 / num2 << endl;
        }
        else
        {
            cout << "Error! Division by zero." << endl;
        }
        break;

    default:
        cout << "Invalid choice. Please enter A, S, M, or D." << endl;
        break;
    }

    return 0;
}
