
#include <iostream>
using namespace std;

int main()
{
    int sz;
    cout << "Enter the Size of array: ";
    cin >> sz;
    double num[sz][sz][sz];

    cout << "Enter " << sz * sz * sz << " Double Numbers:" << endl;
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            for (int k = 0; k < sz; k++)
            {
                cout << "Enter element at position :[" << i << "][" << j << "][" << k << "] : ";
                cin >> num[i][j][k];
            }
        }
    }
    cout << "You have entered these Double Numbers:" << endl;
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            for (int k = 0; k < sz; k++)
            {
                cout << "Element at position :[" << i << "][" << j << "][" << k << "] : ";
                cout << num[i][j][k] << "   ";
            }
            cout << endl;
        }
    }
    return 0;
}
