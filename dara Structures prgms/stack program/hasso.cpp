
#include <iostream>
using namespace std;

int main()
{
    double num[2][2][2];

    cout<<"Enter the Double Numbers:"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; i++)
            {
                cout<<"Enter element at position :["<<i<<"]["<<j<<"]["<<k<<"] : ";
                cin>>num[i][j][k];
            }
        }
    }
    cout<<"You have entered these Double Numbers:"<<endl;
    for (int l = 0; l< 2; l++)
    {
        for (int m = 0; m < 2; m++)
        {
            for (int n = 0; n < 2; n++)
            {
                cout<<"Element at position :["<<l<<"]["<<m<<"]["<<n<<"] : " ;
                cout<<num[l][m][n]<<" "; 
            }
            cout<<endl;
        }
    }
    return 0;
}

