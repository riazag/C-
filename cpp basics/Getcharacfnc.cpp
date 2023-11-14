#include <iostream>
using namespace std;
void character(char ch, int repeatTimes)
{
    cout << " you have enter this character : ";
    for (int i = 0; i < repeatTimes; i++)
    {

        cout << ch << ", ";
    }
}
int main()
{
    int repeatTimes;
    char ch;
    cout << "Enter any special character : ";
    cin >> ch;
    cout << "how many times you wanna repeat this special character : ";
    cin >> repeatTimes;
    character(ch, repeatTimes);
    return 0;
}
