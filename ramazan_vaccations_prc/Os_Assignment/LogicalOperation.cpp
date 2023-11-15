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

    bool isEqual = (num1 == num2);
    bool isNotEqual = (num1 != num2);
    bool isGreater = (num1 > num2);
    bool isLess = (num1 < num2);
    bool isGreaterOrEqual = (num1 >= num2);
    bool isLessOrEqual = (num1 <= num2);

    cout << num1 << " is equal to " << num2 << ": " << isEqual << endl;
    cout << num1 << " is not equal to " << num2 << ": " << isNotEqual << endl;
    cout << num1 << " is greater than " << num2 << ": " << isGreater << endl;
    cout << num1 << " is less than " << num2 << ": " << isLess << endl;
    cout << num1 << " is greater than or equal to " << num2 << ": " << isGreaterOrEqual << endl;
    cout << num1 << " is less than or equal to " << num2 << ": " << isLessOrEqual << endl;

    return 0;
}
