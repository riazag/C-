#include <iostream>
#define Pi 3.14
using namespace std;
double Circumference(double rad)
{
    double circumference;
    return circumference = 2 * Pi * rad;
}
int main()
{
    double r;
    cout << "Enter the radius of a circle : ";
    cin >> r;
    cout << "The circumference  of a circle : " << Circumference(r);
    return 0;
}
