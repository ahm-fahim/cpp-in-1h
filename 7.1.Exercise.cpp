#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    cout << "Enter Radius: ";
    double radius;
    cin >> radius;

    const double pi = 3.14;

    double area = pi * pow(radius, 2);

    cout << area << endl;

    return 0;
}