#include <iostream>

using namespace std;

int main()
{
    int arr1[2][2],arr2[2][2],sum[2][2],i,j;

    cout<<"Enter Element of ist array : "<<endl;

    for(i=0; i<2; i++){

        for(j=0; j<2; j++){

            cin>>arr1[i][j];

        }

        cout<<endl;
    }

    cout<<"Enter Element of 2nd array : "<<endl;

    for(i=0; i<2; i++){

        for(j=0; j<2; j++){

            cin>>arr2[i][j];

        }
    }

        cout<<"\nSum of arrays : "<<endl;

            for(i=0; i<2; i++){

        for(j=0; j<2; j++){

        sum[i][j]= arr1[i][j]+ arr2[i][j];

        cout<<sum[i][j]<<" ";

        }

        cout<<endl;

    }

    return 0;
}
