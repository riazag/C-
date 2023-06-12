#include <iostream>

using namespace std;

int main()
{
    int h;
    int result =0;
cout<<"Enter the array size  : ";
cin>>h;
int num[h];

cout<<"Enter the numbers  : "<<endl;

for(int j=0; j<h; j++){

cin>>num[j];
}
cout<<"The result is : \n";
for(int i=0; i<h; i++){


     result+= num[i];
}

cout<<result;

    return 0;
}
