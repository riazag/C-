#include <iostream>

using namespace std;

int main()
{
    // int marks[2][2] = {10, 20, 80, 90};

    // for (int i = 1; i < 3; i++)
    // {
    //     for (int j = 1; j <= 2; j++)
    //     {
    //         cout << marks[i][j] << " ";
    //     }
    //     cout << endl;
    // }



    // int j = 0;
    // // while (true)
    // // {
    // //     cout << marks[j] << endl;
    // //     j++;
    // // }

    // string name;
    // do
    // {
    //     cout << "Enter your name: " ;
    //     cin >> name;

    //     cout << "Your name is: " << name;
        
    // } while (j < 4);
    // //j++;
    
    char alphabets[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    for (int i = 0; i < 6; i++)
    {
        if (alphabets[i] == 'C' && alphabets[i] == 'D' && alphabets[i] == 'E')
        {
            cout << alphabets[i];
        }
        
    }
    



    return 0;
}