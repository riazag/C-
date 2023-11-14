#include <iostream>
using namespace std;

int count = 0;

int evenOddSearch(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i += 2) // even search
    {
        count++;
        if (arr[i] == x)
        {
            return i;
        }
    }
    for (int i = 1; i < N; i += 2) // odd search
    {
        count++;
        if (arr[i] == x)
        {
            return i;
        }
    }
}
void evenOddSort(int arr[], int N)
{
    for (int i = 0; i < N; i += 2)
    {
        if (arr[i] % 2 != 0) // Check if even index contains odd data
        {
            for (int j = i + 1; j < N; j += 2)
            {
                if (arr[j] % 2 == 0) // Check if odd index contains even data
                {
                    // Swap elements at even and odd indices
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

    cout << "Enter " << size << " elemets of array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> x;

    int index = evenOddSearch(arr, size, x);

    cout << "Index is: " << index << endl;

    cout << "Count: " << count;

    return 0;
}