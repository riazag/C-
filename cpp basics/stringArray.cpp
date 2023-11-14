
#include <iostream>
using namespace std;
int main()
{
  char arr[3][6];
  cout << "Enter the names of MRH group Friends:" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << "The names of MRH group friends:" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      cout << arr[i][j];
    }
    cout << endl;
  }
  return 0;
}
