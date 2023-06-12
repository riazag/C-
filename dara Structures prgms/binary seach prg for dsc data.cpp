#include <iostream>
#include<stdlib.h>

using namespace std;

void binarySearchDsc()
{
    int arr[9], beg, end, mid, i, n, num, temp;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the values in Descending order: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array sorted Successfully\n";
    cout << "The new array is: \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    beg = 0;
    end = n - 1;

    cout << "Enter a value to be searched: ";
    cin >> num;

    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (arr[mid] == num)
        {
            cout << "\nItem found at position " << (mid + 1);
            exit(1);
        }
        else if (num > arr[mid])
        {
            beg = mid + 1;
        }
        else if (num < arr[mid])
        {
            end = mid - 1;
        }
    }

    cout << "Number not found" << endl;
}

int main(){
	
	binarySearchDsc();
}

