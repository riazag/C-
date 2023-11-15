#include <iostream>
using namespace std;

double Num1, Num2, result;
int operation;
double Addition()
{
    result = Num1 + Num2;
    return result;
}
double Subtraction()
{
    result = Num1 - Num2;
    return result;
}
double Multiplication()
{
    result = Num1 * Num2;
    return result;
}
double Division()
{
    result = Num1 / Num2;
    return result;
}

int main()
{
    while (true)
    {
        cout << "\nEnter the ist Number: ";
        cin >> Num1;
        cout << "Enter the 2nd Number: ";
        cin >> Num2;
        cout << "choose an Operation: " << endl;
        cout << "1) for Addition" << endl;
        cout << "2) for Subtarction" << endl;
        cout << "3) for Multiplication" << endl;
        cout << "4) for Division" << endl;
        cout << "5) To Exit" << endl;
        cin >> operation;
        switch (operation)
        {
        case 1:
            cout << "Result of SUM: " << Addition();
            break;
        case 2:
            cout << "Result of DIFFERENCE: " << Subtraction();
            break;
        case 3:
            cout << "Result of MULTIPLICATION: " << Multiplication();
            break;
        case 4:
            cout << "Result of DIVISION: " << Division();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "you have enter someting wrong!";
            break;
        }
    }
    return 0;
}
