#include <iostream>
using namespace std;

int abc = 100; // Global variable

void increment(int num)
{
    num++;
    cout << "In function Num is: " << num << endl;
}
void incrementRef(int &num)
{
    num++;
    cout << "In function Num is: " << num << endl;
}
void getabc()
{
    int bc = 30;
    cout << "function: " << bc;
}
// local/global variables

int main()
{
    int number = 50;
    cout << "Before call: " << number << endl;
    increment(number);
    cout << "After call: " << number;
    cout << "*********by reference ****************<" << endl;
    cout << "Before call: " << number << endl;
    incrementRef(number);
    cout << "After call: " << number;

    return 0;
}