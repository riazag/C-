#include <iostream>

using namespace std;

int main()
{
    int a[2][2];
     cout<<"enter elements of array "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
        
         
    }
      cout<<"elements you have entered:  ";
      for(int i=0;i<2;i++)
      {
        for(int j=0;j<2;j++)
        {
            cout<<a[i][j] << " ";
        }
        cout << endl;
      }

    // cout<<"program using for loop"<<endl;

    // int answer = a[0];
    // for (int i = 1; i < 4; i++)
    // {
    //     answer += a[i];
    // }
    // cout<<"answer is = "<<answer<<endl;
    // cout<<"*************************************"<<endl;
    // cout<<"program using while loop"<<endl;
    // int j=1,answer2=0;
    // while (j<=10)
    // {
    //     answer2 = answer2+j;
    //     j++;
    // }
    //     cout<<"answer is = "<<answer2<<endl;
    // cout<<"*************************************"<<endl;
    //  cout<<"program using do while loop"<<endl;
    // int answer3=0,k=1;
    // do
    // {
    //      answer3 = answer3+k;
    //      k++;
    // } while (k<=10);
    //  cout<<"answer is = "<<answer3<<endl;
    return 0;
}