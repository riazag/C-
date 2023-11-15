#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the first number: ";
    int num1;
    cin >> num1;

    cout << "Enter the second number: ";
    int num2;
    cin >> num2;

    cout << "Enter the third number: ";
    int num3;
    cin >> num3;

    if (num1 == num2 && num2 == num3)
    {
        cout << "All three numbers are equal." << endl;
    }

    if (num1 == num2 || num1 == num3 || num2 == num3)
    {
        cout << "At least two of the three numbers are equal." << endl;
    }

    if (!(num1 == num2) && !(num1 == num3) && !(num2 == num3))
    {
        cout << "None of the three numbers are equal." << endl;
    }

    return 0;
}
