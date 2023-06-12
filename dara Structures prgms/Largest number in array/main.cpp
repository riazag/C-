#include <iostream>

using namespace std;

int main()
{

    // n is the largest in array

    int n,largest,smallest;

    int num[10];

    cout<<"Enter the number of elements you want to  enter; ";

    cin>>n;

    for(int i=0; i<n ; i++){

        cout<<"Enter element "<<(i+1)<<": ";
        cin>>num[i];
    }

    // storing first array element in largest variable

    largest = num[0];

    for(int i=1; i<n; i++){

        if(largest <num[i])
            largest= num[i];
    }
    cout<<"Largest element in array is : "<<largest<<endl ;

smallest =num[0];
    for(int i=1; i<n; i++){

        if(smallest >num[i])
            smallest= num[i];
    }
    cout<<"smallest element in array is : "<<smallest;
    return 0; 
}
