#include <iostream>
using namespace std;
class Doctor
{
public:
    string name, age, specailization, ContactNo, LicienceNo, Education, Experience, Emails;

public:
    void SetNameAge(string Name, string Age)
    {
        name = Name;
        age = Age;
    }
    void GetNameAge()
    {
        cout << "Doctor Name: " << name << endl;
        cout << "Doctor Age: " << age << endl;
    }
    void Set_Spclztn_Edu_Exp(string splztn, string Edu, string Exp)
    {
        specailization = splztn;
        Education = Edu;
        Experience = Exp;
    }
    void Get_Spclztn_Edu_Exp()
    {
        cout << "Doctor Specialization: " << specailization << endl;
        cout << "Doctor Education: " << Education << endl;
        cout << "Doctor Experience: " << Experience << endl;
        ;
    }
    void SetContacts(string contactNo, string emails)
    {
        ContactNo = contactNo;
        Emails = emails;
    }
    void GetContacts()
    {
        cout << "contactNO: " << ContactNo << endl;
        cout << "Emails: " << Emails << endl;
    }
    void SetLicenceNo(string licienceNo)
    {
        LicienceNo = licienceNo;
    }
    void GetLicenceNo()
    {
        cout << "LicenceNo:" << LicienceNo << endl;
    }
};

int main()
{
    Doctor d1;
    d1.SetNameAge("ALi", "34");
    d1.GetNameAge();
    d1.Set_Spclztn_Edu_Exp("cardiologist", "MBBS", "12 yrs");
    d1.Get_Spclztn_Edu_Exp();
    d1.SetContacts("03319876376", "rohailriaz16@gmail.com");
    d1.GetContacts();
    d1.SetLicenceNo("pk120A");
    d1.GetLicenceNo();
    return 0;
}
