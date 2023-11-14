#include <iostream>
#include <cmath>
using namespace std;

int recursiveJumpSearch(int arr[], int low, int high, int x)
{
    int jump = sqrt(high - low + 1);

    if (arr[low] == x)
    {
        return low;
    }
    int prev = low;
    while (arr[min(jump, high)] < x)
    {
        prev = jump;
        jump += sqrt(high - low + 1);
        if (prev >= high)
        {
            return -1;
        }
    }

    if (arr[prev] == x)
    {
        return prev;
    }
    else if (arr[prev] > x)
    {
        return recursiveJumpSearch(arr, low, prev - 1, x);
    }
    else
    {
        return recursiveJumpSearch(arr, prev + 1, jump, x);
    }
}

int main()
{
    int arr[] = {13, 17, 12, 19, 9, 6, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 17;

    int index = recursiveJumpSearch(arr, 0, n - 1, x);
    if (index != -1)
        cout << "Element " << x << " found at index " << index << endl;
    else
        cout << "Element " << x << " not found in the array" << endl;
    return 0;
}