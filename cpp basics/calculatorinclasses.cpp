#include <iostream>
using namespace std;

class Calculator
{
public:
    double Addition(double num1, double num2)
    {
        return num1 + num2;
    }
    double Subtraction(double num1, double num2)
    {
        return num1 - num2;
    }
    double Multiplication(double num1, double num2)
    {
        return num1 * num2;
    }
    double Division(double num1, double num2)
    {
        return num1 / num2;
    }
};

int main()
{
    Calculator calculator;

    double num1, num2;
    char operation;
    while (true)
    {
        cout << "\n_____________________________________" << endl;
        cout << "\nEnter the 1st Number: ";
        cin >> num1;
        cout << "Enter the 2nd Number: ";
        cin >> num2;
        cout << "choose an Operation (+ - * /) ";
        cout << "To exit press E or e: " << endl;
        cin >> operation;
        switch (operation)
        {
        case '+':
            cout << "Sum is: " << calculator.Addition(num1, num2);
            break;
        case '-':
            cout << "Difference is: " << calculator.Subtraction(num1, num2);
            break;
        case '*':
            cout << "Product is: " << calculator.Multiplication(num1, num2);
            break;
        case '/':
            cout << "Quotient is: " << calculator.Division(num1, num2);
            break;
        case 'E':
        case 'e':
            exit(0);
            break;
        default:
            cout << "You have enter someting wrong!";
            break;
        }
    }
    return 0;
}