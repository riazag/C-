#include <iostream>
using namespace std;

void previus_Method()
{
    cout << "Max_speed = 40" << endl;
    cout << "Chowk_speed = 20" << endl;
    cout << "voilation of Rule fine is 500" << endl;
    cout << "late to class fine is 350" << endl;
    cout << "Accident will waste 30 min" << endl;

    int Max_speed = 40, chowk_speed = 20, Total_time = 60, ET = 30, initialSpeed; // minutes

    cout << "Start driving at Max_Speed from Gt_road" << endl;

    cout << "Enter your initial_Speed : ";
    cin >> initialSpeed;

    if (initialSpeed <= Max_speed)
    {
        cout << "Continue Driving until the chowk arrive " << endl;
    }
    else
    {
        cout << "Reduce Speed to 40 " << endl;
        cout << "Enter your speed again : ";
        cin >> initialSpeed;
    }
    cout << "Now you have Arrived to chowk " << endl;

    if (initialSpeed == chowk_speed)
    {
        cout << "Continue Driving " << endl;
    }
    else if (initialSpeed > chowk_speed)
    {
        cout << "reduce Speed to 20 " << endl;
        cout << "Enter your speed again : ";
        cin >> initialSpeed;
    }
    if (initialSpeed > chowk_speed)
    {
        cout << " You have voilate the Rule Pay fine RS : 500 and then continue driving " << endl;
        Total_time = Total_time - 5;
    }
    string option;
    cout << "if accident happen Enter yes else enter No " << endl;

    cout << "Enter the option :";
    cin >> option;

    if (option == "No")
    {
        cout << "Continue driving ." << endl;
    }
    else if (option == "Yes")
    {
        cout << "Take a U_turn and go to workshop. " << endl;
        Total_time = Total_time - 30;
    }
    cout << "\n Continue drive towars uni..." << endl;
    Total_time = Total_time - ET;
    if (Total_time > 10)
    {
        cout << " you have reached on time and can attend Class " << endl;
        cout << Total_time;
    }
    else
    {
        cout << "You are " << Total_time << " mins";
        cout << " you  are late . you have to pay  fine Rs: 350 and then you can attend class" << endl;
    }
}

void HurdelsList()
{
    int Total_time = 60, ETA; // ETA : estimate time arrival
    cout << "1: Voilation of Rules" << endl;
    cout << "2: Hit a Rikshaw " << endl;
    cout << "3: Traffic jam" << endl;
    cout << "4: stop for fuel " << endl;
    cout << "5: slow down for police Checkup" << endl;
    cout << "6: slow down due Environmental issue" << endl;
    cout << "7: Arriving at chowk" << endl;
    cout << "8:DARk Night." << endl;
    cout << "9:while taking overtake at night." << endl;
    cout << "10:Emergency." << endl;
    cout << "11:while taking overtake at day time." << endl;
    cout << "12:turns towards left." << endl;
    cout << "13:Turns towars Right." << endl;
    cout << "14:Some problem in car." << endl;
    cout << "15:Take reverse." << endl;
    cout << "16:U_turn." << endl;
    cout << "17:Break" << endl;
    cout << "18: Allow to attend Class or Not " << endl;
    cout << "19:  Exit" << endl;
    int choice;
    cout << "Enter any choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "you have voilate the rules pay fine Rs : 500." << endl;
        cout << " 5 mins will be wasted there " << endl;
        break;
    case 2:
        cout << "you have hit the rikshaw,Take a U_turn and go to workshop." << endl;
        cout << "30 min will be wasted in repairing." << endl;
        break;
    case 3:
        cout << "there is a traffic jam you have to slow down your Speed" << endl;
        cout << "10 mins will wasted there " << endl;
        break;
    case 4:
        cout << "Your fuel is over you have to stop for fuel. 10 min will be wasted there " << endl;
        break;
    case 5:
        cout << "There is a police choki you have to stop there.5 mins will be wasted there " << endl;
        break;
    case 6:
        cout << " there is some environmental issue you have slow down " << endl;
        break;
    case 7:
        cout << " At chowk you have to slow down to 20km/h" << endl;
        break;
    case 8:
        cout << "Its Dark Night turn ON HighBeam Lights" << endl;
        break;
    case 9:
        cout << "You are Taking Overtake at night turns ON LowBeam lights" << endl;
        break;
    case 10:
        cout << "There is Emergency turns ON HighBeam Lights" << endl;
        break;
    case 11:
        cout << "You are Taking Overtake at day time  turns ON HighBeam lights" << endl;
        ;
        break;
    case 12:
        cout << "you are taking turns towrds Left turns ON left Indicator" << endl;
        break;
    case 13:
        cout << "you are taking turns towrds Right turns ON Right Indicator" << endl;
        break;
    case 14:
        cout << "YOu Have problem in your car Turns ON both Indicators with blinking" << endl;
        break;
    case 15:
        cout << "YOU are taking reverse Turns ON reverse Light" << endl;
        break;
         case 16:
        cout << "you are Taking U_turns  Turns On Right Indicators.";
        break;
    case 17:
        cout << "you are Applying break turns On Break Lights.";
        break;
    case 18:
        cout << "Enter your estimate time of Arrival : ";
        cin >> ETA;
        if (Total_time - ETA >= 10) // ETA : estimate time arrival
        {
            cout << "YOU are Allowed to attend class.." << endl;
        }
        else
        {
            cout << " YOU are late .pay Rs: 350 and attend class" << endl;
        }
        break;
    case 19:
        exit(1);
    default:
        cout << "you have select wrong choice: " << endl;
        break;
    }
}
int main()
{
    do
    {
        HurdelsList();
    } while (true);
    
    // while (true)
    // {
    //     HurdelsList();
    // }
    return 0;
}
