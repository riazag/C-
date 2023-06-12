#include<iostream>
#include<stdlib.h>

using namespace std;

void binarySearchAsc()
{
    int arr[9], beg, end, mid, i, n, num;
    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter "<<n<<" values in sorted order: "<<endl;
    for (i = 0; i < n; i++)
    {
    	cout<<i+1<<")";
    	
        cin >> arr[i];
    }
    
    cout<<"Your array : ";
    
    for(i=0;i<n;i++){
    	
    	cout<<arr[i]<<" ";
    	
	}
    
    beg = 0;
    end = n - 1;

    cout << "\n Enter a value to be searched: ";
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

    cout << "Number not found";
}
int main(){
	
	binarySearchAsc();
	
}
