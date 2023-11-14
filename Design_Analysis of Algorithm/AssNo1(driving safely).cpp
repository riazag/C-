#include <iostream>
using namespace std;
int Total_time = 60;

void HurdelsList()
{
    cout << "*********************************************" << endl;
    cout << "1: Voilation of Rules" << endl;
    cout << "2: Hit a Rikshaw " << endl;
    cout << "3: Traffic jam" << endl;
    cout << "4: stop for fuel " << endl;
    cout << "5: slow down for police Checkup" << endl;
    cout << "6: slow down due Environmental issue" << endl;
    cout << "7: Arriving at chowk" << endl;
    cout << "8: Allow to attend Class or Not " << endl;
    // cout << "9:  Exit" << endl;
    int choice;
    cout << "*********************************************" << endl;

    cout << "Enter any choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "you have voilate the rules pay fine Rs : 500." << endl;
        Total_time = Total_time - 5;
        cout << "*********************************************" << endl;

        break;
    case 2:
        cout << "you have hit the rikshaw,Take a U_turn and go to workshop." << endl;
        Total_time = Total_time - 30;
        cout << "*********************************************" << endl;

        break;
    case 3:
        cout << "there is a traffic jam you have to slow down your Speed" << endl;
        Total_time = Total_time - 5;
        cout << "*********************************************" << endl;
        break;
    case 4:
        cout << "Your fuel is over you have to stop for fuel." << endl;
        Total_time = Total_time - 10;
        cout << "*********************************************" << endl;
        break;
    case 5:
        cout << "There is a police choki you have to stop there. " << endl;
        Total_time = Total_time - 10;
        cout << "*********************************************" << endl;
        break;
    case 6:
        cout << " there is some environmental issue you have slow down " << endl;
        Total_time = Total_time - 5;
        cout << "*********************************************" << endl;

        break;
    case 7:
        cout << " At chowk you have to slow down to 20km/h" << endl;
        break;
    case 8:
        if (Total_time >= 10)
        {
            cout << "YOU are Allowed to attend class.." << endl;
            cout << "*********************************************" << endl;
        }
        else
        {
            cout << " YOU are late .pay Rs: 350 and attend class" << endl;
            cout << "*********************************************" << endl;
        }
        exit(0);
        break;
    // case 9:
    //     exit(0);
    default:
        cout << "you have select wrong choice: " << endl;
        cout << "*********************************************" << endl;
        break;
    }
}
int main()
{
    while (true)
    {
        HurdelsList();
    }
    return 0;
}
