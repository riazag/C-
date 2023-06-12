
#include <iostream>
#define N 20
using namespace std;

int main()
{
    int n,i,j;
    string arr[20],temp;
    cout<<"Enter the size (max.20): ";
    cin>>n; 

    cout<<"Enter "<<n<<"  Names : "; 
    for (i=0;i<n;i++)
    cin>>arr[i];
    cout<<"\n Sorting the array using Bubble sort technique....\n";

    for (i=0;i<(n-1);i++)
    {

        for (j=0;j<(n-i-1);j++)

        {

            if(arr[j]>arr[j+1])
            {

                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"\n Array sorted successfully! \n";
    cout<<"\n The New Array is : \n";
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";

    }
    cout<<endl;

    cout<<"*******************************************"<<endl;
    cout<<"Sorting array for descending order";

     for (i=0;i<(n-1);i++)
    {

        for (j=0;j<(n-i-1);j++)

        {

            if(arr[j]<arr[j+1])
            {

                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"\n Array sorted successfully! \n";
    cout<<"\n The New Array is : \n";
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";

    }
    cout<<endl;
    return 0;
}
