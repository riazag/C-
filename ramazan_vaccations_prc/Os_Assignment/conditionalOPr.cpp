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

    cout << num1 << (num1 == num2 ? " is equal to " : " is not equal to ") << num2 << endl;
    cout << num1 << (num1 > num2 ? " is greater than " : " is not greater than ") << num2 << endl;
    cout << num1 << (num1 < num2 ? " is less than " : " is not less than ") << num2 << endl;

    return 0;
}
