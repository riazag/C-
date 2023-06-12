#include <iostream>
using namespace std;

int A[2][2]={1,2,3,4};
int B[2][2]={5,6,7,8};
int c[2][2];

int multiply()
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[2][2]=A[i][j]*B[i][j];
            cout<<c[i][j]<<" ";
        }
        
    }
    
}

int main()
{
    multiply();
    return 0;
}
