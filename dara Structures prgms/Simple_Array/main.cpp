#include <iostream>

using namespace std;

int main()
{
    int h;
cout<<"Enter the array size  : ";
cin>>h;
int num[h];

cout<<"Enter the numbers  : "<<endl;

for(int j=0; j<h; j++){

cin>>num[j];
}
cout<<"Thee numbers\n";
for(int i=0; i<h; i++){

    cout<<num[i]<<endl;
}

    return 0;
}
