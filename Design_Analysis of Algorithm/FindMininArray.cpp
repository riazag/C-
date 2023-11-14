#include <iostream>
using namespace std;
int FindMin(int size, int arr[])
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cout << "enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "manimum number in array is : " << FindMin(size, arr) << endl;
    return 0;
}
