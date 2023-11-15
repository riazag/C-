#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;

    // Use conditional operator to determine if the number is positive, negative, or zero
    cout << "The number entered is " << (number > 0 ? "positive" : (number < 0 ? "negative" : "zero")) << endl;

    return 0;
}
