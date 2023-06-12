#include <iostream>

using namespace std;

int main()
{
 int rw;
cout<<"Enter no.. Rows: ";

cin>>rw;
    for(int i=rw; i>=1;i--){

       for(int j=1 ;j<i;j++) {

        cout<<j<<" ";
       }

       cout<<endl;
    }

    return 0;
}
