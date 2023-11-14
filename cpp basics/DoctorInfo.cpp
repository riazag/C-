#include <iostream>
using namespace std;

class Doctor
{
private:
    string Name;
    int Age;
    string Qualification;
    string Experience;

protected:
    int CNIC;
    string PhoneNo;

public:
    Doctor(string name, int age, string qualification, string experience, int cnic, string phoneNO)
    {
        Name = name;
        Age = age;
        Qualification = qualification;
        Experience = experience;
        CNIC = cnic;
        PhoneNo = phoneNO;
    }
    void Display()
    {
        cout << "Doctor Name is : " << Name << endl;
        cout << "Doctor Age is : " << Age << endl;
        cout << "Doctor Qualificatio is : " << Qualification << endl;
        cout << "Doctor Experience is : " << Experience << endl;
        cout << "Doctor CNIC Number is : " << CNIC << endl;
        cout << "Doctor Phone Number  is : " << PhoneNo << endl;
    }
};
int main()
{
    // Doctor doctor1 = Doctor("Riaz", 21, "MBBs", "2 years");
    // doctor1.Display();
    Doctor d1("Riaz", 21, "MBBs", "2 years", 14101156, "033167867");
    d1.Display();
    cout << "**********************************(*******" << endl;
    Doctor doctor2 = Doctor("Hassan", 24, "BDS", "4 years", 1703678, "03136878");
    doctor2.Display();
}