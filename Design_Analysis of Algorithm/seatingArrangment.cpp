#include <iostream>
using namespace std;

int main()
{

    cout << "1: STUDENT " << endl;
    cout << "2: TEACHER " << endl;
    cout << "3: PARENT " << endl;
    cout << "4: OFFICIALS " << endl;
    int choice;
    cout << "Enter your chice" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        char gender, medalist;
        cout << "Enter your Gender: F for female & M for male: " << endl;
        cin >> gender;
        if (gender == 'M')
        {
            cout << "Enter G,S & B for Gold ,Silver And Bronze medalist:" << endl;
            cin >> medalist;
            if (medalist == 'G')
            {
                cout << "Sit in the ist row :" << endl;
            }
            else if (medalist == 'S')
            {
                cout << "Sit in the 2nd row :" << endl;
            }
            else if (medalist == 'G')
            {
                cout << "Sit in the 3rd row :" << endl;
            }
            else
            {
                cout << "sit anywhere after 3rd row in male section:" << endl;
            }
        }
        else if (gender == 'F')
        {
            cout << "Enter G,S & B for Gold ,Silver And Bronze medalist:" << endl;
            cin >> medalist;
            if (medalist == 'G')
            {
                cout << "Sit in the ist row :" << endl;
            }
            else if (medalist == 'S')
            {
                cout << "Sit in the 2nd row :" << endl;
            }
            else if (medalist == 'B')
            {
                cout << "Sit in the 3rd row :" << endl;
            }
            else
            {
                cout << "sit anywhere after 3rd row in male section:" << endl;
            }
        }
        else
        {
            cout << "Enter the correct Gender:" << endl;
        }
        break;
    case 2:
        cout << "Enter your Gender: F for female & M for male: " << endl;
        cin >> gender;
        if (gender == 'M')
        {
            cout << "Enter G,S & B for Gold ,Silver And Bronze medalist:" << endl;
            cin >> medalist;
            if (medalist == 'G')
            {
                cout << "Sit in the ist row :" << endl;
            }
            else if (medalist == 'S')
            {
                cout << "Sit in the 2nd row :" << endl;
            }
            else if (medalist == 'B')
            {
                cout << "Sit in the 3rd row :" << endl;
            }
            else
            {
                cout << "sit anywhere after 3rd row in male section:" << endl;
            }
        }
        else if (gender == 'F')
        {
            cout << "Enter G,S & B for Gold ,Silver And Bronze medalist:" << endl;
            cin >> medalist;
            if (medalist == 'G')
            {
                cout << "Sit in the ist row :" << endl;
            }
            else if (medalist == 'S')
            {
                cout << "Sit in the 2nd row :" << endl;
            }
            else if (medalist == 'G')
            {
                cout << "Sit in the 3rd row :" << endl;
            }
            else
            {
                cout << "sit anywhere after 3rd row in male section:" << endl;
            }
        }
        else
        {
            cout << "Enter the correct Gender:" << endl;
        }
        break;
    case 3:
        cout << "Enter your Gender: F for female & M for male: " << endl;
        cin >> gender;
        if (gender == 'M')
        {
            cout << "sit in the Parent male section :" << endl;
        }
        else if (gender == 'F')
        {
            cout << "sit in the parent female section :" << endl;
        }
        else
        {
            cout << "Enter the correct Gender:" << endl;
        }
        break;
    case 4:
        cout << "Enter your Gender: F for female & M for male: " << endl;
        cin >> gender;
        if (gender == 'M')
        {
            cout << "sit in the officials male section :" << endl;
        }
        else if (gender == 'F')
        {
            cout << "sit in the officials female section :" << endl;
        }
        else
        {
            cout << "Enter the correct Gender:" << endl;
        }
        break;
 
    default:
        break;
    }
    return 0;
}
