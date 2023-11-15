#include <iostream>
using namespace std;

void login(string name, string password)
{
    string UserName, UserPassword;

    cout << "Enter username\n";
    cin >> UserName;

    cout << "Enter password\n";
    cin >> UserPassword;

    if (UserName == name && UserPassword == password)
    {
        cout << "login successfully";
    }
    else
    {
        cout << "wrong username or password";
    }
}

void signup()
{
    string country, uname, upassword;
    int age;
    cout << "Enter your name\n";
    cin >> uname;
    cout << "Enter your country name\n";
    cin >> country;
    cout << "Enter your age\n";
    cin >> age;
    cout << "Create password\n";
    cin >> upassword;
    string choice;
    cout << "you want to sign in now yes/no\n";
    cin >> choice;
    if (choice == "yes")
    {
        login(uname, upassword);
    }
    else
    {
        exit(true);
    }
}

int main()
{
    string uname, upassword;
    int choice;
    cout << "1:- login \n";
    cout << "2:- sign up\n";
    cin >> choice;

    uname = "najeeb";
    upassword = "1234";

    if (choice == 1)
    {
        login(uname, upassword);
    }
    else if (choice == 2)
    {
        signup();
    }
    else
    {
        cout << "Enter 1 or 2";
    }
    return 0;
}