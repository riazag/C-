#include <iostream>
using namespace std;

void suituations()
{
    cout << "1:DARk Night." << endl;
    cout << "2:while taking overtake at night." << endl;
    cout << "3:Emergency." << endl;
    cout << "4:while taking overtake at day time." << endl;
    cout << "5:Turns towards left." << endl;
    cout << "6:Turns towars Right." << endl;
    cout << "7:Some problem in car." << endl;
    cout << "8:Take reverse." << endl;
    cout << "9:U_turn." << endl;
    cout << "10:Break" << endl;
    cout << "11:Trafic signal" << endl;
    cout << "12:Breaker" << endl;
    cout << "13:Police check_point " << endl;
    cout << "14:Roundabout" << endl;
    cout << "15:  Exit" << endl;
    int choice;
    cout << "**************************************************************" << endl;
    cout << "Enter any choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Its Dark Night turn ON HighBeam Lights" << endl;
        cout << "**************************************************************" << endl;
        break;
    case 2:
        cout << "You are Taking Overtake at night turns ON LowBeam lights" << endl;
        cout << "**************************************************************" << endl;
        break;
    case 3:
        cout << "There is Emergency turns ON HighBeam Lights" << endl;
        cout << "**************************************************************" << endl;
        break;
    case 4:
        cout << "You are Taking Overtake at day time  turns ON HighBeam lights" << endl;
        cout << "**************************************************************" << endl;
        break;
    case 5:
        cout << "you are taking turns towrds Left turns ON left Indicator" << endl;
        cout << "**************************************************************" << endl;
        break;
    case 6:
        cout << "you are taking turns towrds Right turns ON Right Indicator" << endl;
        cout << "**************************************************************" << endl;
        break;
    case 7:
        cout << "YOu Have problem in your car Turns ON both Indicators with blinking" << endl;
        cout << "**************************************************************" << endl;
        break;
    case 8:
        cout << "YOU are taking reverse Turns ON reverse Light" << endl;
        cout << "**************************************************************" << endl;
        break;
    case 9:
        cout << "you are Taking U_turns  Turns On Right Indicators.";
        cout << "**************************************************************" << endl;
        break;
    case 10:
        cout << "you are Applying break turns On Break Lights.";
        cout << "**************************************************************" << endl;
        break;
    case 11:
        cout << "Applying break to stop for signal , turns On Break Lights.";
        cout << "**************************************************************" << endl;
        break;
    case 12:
        cout << "you are Applying break to stop for breaker turns On Break Lights.";
        cout << "**************************************************************" << endl;
    case 13:
        cout << "you are Applying break to stop for check_point turns On Break Lights.";
        cout << "**************************************************************" << endl;
    case 14:
        cout << "you are Applying break to slow_down for roundAbout turns On right indicator.";
        cout << "**************************************************************" << endl;
    case 15:
        exit(1);
    default:
        cout << "you have select wrong choice: " << endl;
        cout << "**************************************************************" << endl;
        break;
    }
}
int main()
{
    while (true)
    {
        suituations();
    }
    return 0;
}
S