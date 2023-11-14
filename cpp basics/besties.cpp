#include <iostream>
#include <string>

using namespace std;

bool isBestie(char a, char b)
{
    return abs(a - b) >= 2;
}

int countBestiesBetween(int N1, int N2)
{
    int count = 0;
    for (int num = N1; num <= N2; num++)
    {
        string numStr = to_string(num);
        bool isBestieNum = true;
        for (int i = 1; i < numStr.length(); i++)
        {
            if (!isBestie(numStr[i - 1], numStr[i]))
            {
                isBestieNum = false;
                break;
            }
        }
        if (isBestieNum)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N1, N2;
        cin >> N1 >> N2;

        int bestieCount = countBestiesBetween(N1, N2);
        cout << bestieCount << endl;
    }

    return 0;
}
