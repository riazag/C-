#include<iostream>
using namespace std;

int main()
{
   int row,col;
    cout<<"enter the size of any square matrix: ";
    cin>>row>>col;
    int arr[row][col];
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i==j)
            {
            arr[i][j]=1;
            }else{
              arr[i][j]=0;  
            }
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
