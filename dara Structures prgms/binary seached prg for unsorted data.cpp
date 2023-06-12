#include <iostream>
#include <stdlib.h>

using namespace std;

void sortArray()
{
    int n, i, arr[5], j, temp;
    
    cout << "Enter the size of array: ";
    cin>>n;

    cout << "Enter " << n << "numbers: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < (n - i - 1); j++)
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
    for (i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main(){
	
	sortArray();
	
	return 0;
}
