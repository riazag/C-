#include <iostream>

using namespace std;

int main()
{
int rw;
cout<<"Enter no.. Rows: ";
cin>>rw;
    for(int i=1; i<=rw;i++){

       for(int j=0;j<i;j++) {

        cout<<"*";
       }

       cout<<endl;
    }
    return 0;
}
