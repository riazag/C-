#include <iostream>

using namespace std;

int main()
{

    int arr[3],arra[3],n,j,sum[3];

    cout<<"Enter the Number of elements in the array : "<<endl;

    cin>>n;

    cout<<"Enter elements of ist array : "<<endl;

    for( j=0; j<n; j++){

        cin>>arr[j];

    }
    cout<<endl;

    cout<<"Your ist array is :"<<endl;

    for( j=0; j<n; j++){

        cout<<arr[j]<<endl;

    }

        cout<<"\nEnter elements of 2nd array : "<<endl;

    for( j=0; j<n; j++){

        cin>>arra[j];

    }
    cout<<endl;

    cout<<"Your 2nd array is :"<<endl;

    for( j=0; j<n; j++){

        cout<<arra[j]<<endl;

    }

    cout<<"Sum of array elements : "<<endl;

    for(int j=0 ;j<n; j++){

        sum[j]=arr[j]+arra[j];

        cout<<sum[j]<<" ";

    }
    cout<<endl;
    return 0;
}
