#include <iostream>
using namespace std;
int main()
{
    int size, x, loc, found = 0;
    cout << "Enter the size of array :";
    cin >> size;
    int arr[size];
    cout << "Enter the Elements of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Element to be Search: ";
    cin >> x;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            found++;
            loc = i;
        }
    }
    if (found == 1)
    {
        cout << "Search is Successful:" << endl;
        cout << "element is found at index : " << loc;
    }
    else
    {
        cout << "Search is UnSuccessful:" << endl;
    }
    return 0;
}
