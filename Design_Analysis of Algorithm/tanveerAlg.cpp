#include <iostream>
#define NN 6
using namespace std;

int count = 0;

pair<int, string> evenOddSearch(int arr[], int N, int x)
{
    for (int i = 0; i < N; i += 2)
    {
        count++;
        if (arr[i] == x)
            return make_pair(i, "even");

        if (i + 1 < N && arr[i + 1] == x)
            return make_pair(i + 1, "odd");
    }

    return make_pair(-1, "");
}

void evenOddSort(int arr[], int N)
{
    for (int i = 0; i < N; i += 2)
    {
        if (arr[i] % 2 != 0)
        {
            for (int j = i + 1; j < N; j += 2)
            {
                if (arr[j] % 2 == 0)
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main()
{
    int size, x;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements of array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    evenOddSort(arr, size);

    cout << "Enter element to search: ";
    cin >> x;

    pair<int, string> searchResult = evenOddSearch(arr, size, x);

    if (searchResult.first != -1)
    {
        cout << "Index is: " << searchResult.first << endl;
        cout << "Parity: " << searchResult.second << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    cout << "Count: " << count << endl;

    return 0;
}