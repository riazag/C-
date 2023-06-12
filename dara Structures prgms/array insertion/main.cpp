#include <iostream>

using namespace std;

int main()
{
    // program for insertion of element into an array

    int arr[10], i,elem,pos,tot;

    cout<<"Enter the array size : ";

    cin>>tot;

    cout<<"Enter "<<tot<<" Array element: ";

    for(i=0; i<tot; i++){

        cin>>arr[i];
    }



    cout<<"Enter element to insert: ";

    cin>>elem;

    cout<<"at what position ? ";

    cin>>pos;

    for(i=tot; i>=pos; i--){

        arr[i+1]=arr[i];
    }
    arr[i]=elem;

    tot++;

    cout<<" the new array is: \n ";

    for(i=0; i<tot; i++){

        cout<<arr[i]<<"  ";
    }

    cout<<endl;

    return 0;
}
