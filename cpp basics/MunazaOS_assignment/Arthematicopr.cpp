#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter the length of the rectangle: ";
    double lengthRectangle;
    cin >> lengthRectangle;

    cout << "Enter the width of the rectangle: ";
    double widthRectangle;
    cin >> widthRectangle;

    cout << "Enter the radius of the circle: ";
    double radiusCircle;
    cin >> radiusCircle;

    double areaRectangle = lengthRectangle * widthRectangle;
    double perimeterRectangle = 2 * (lengthRectangle + widthRectangle);

    double areaCircle = M_PI * pow(radiusCircle, 2);
    double circumferenceCircle = 2 * M_PI * radiusCircle;

    cout << "\nRectangle:\n";
    cout << "Area: " << areaRectangle << endl;
    cout << "Perimeter: " << perimeterRectangle << endl;

    cout << "\nCircle:\n";
    cout << "Area: " << areaCircle << endl;
    cout << "Circumference: " << circumferenceCircle << endl;

    return 0;
}
