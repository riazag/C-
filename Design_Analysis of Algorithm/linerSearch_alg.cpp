#include <iostream>
using namespace std;

int main()
{
    int arr[8]={2,4,13,6,8,10,12,14};
     int x=8;
     int found =0,loc;
     for (int i = 0; i < 8; i++)
     {
        if(arr[i]==x)
        {

            found++;
            loc=i;
        }
     }
     if(found==1)
     {
        cout<<"Search is Successful:"<<endl;
        cout<<"element is found at index : "<<loc;
     }else
     {
        cout<<"Search is UnSuccessful:"<<endl;
     }
     
    return 0;
}
