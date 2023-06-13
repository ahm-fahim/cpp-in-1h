#include <iostream>
using namespace std;

int main()
{

    cout << "Fahrenheit to Celsius\n";

    double temp;
    cout << "Input temperature : ";
    cin >> temp;

    double toCelsius = (temp - 32) / 1.8;

    cout << "Current Temperature is " << toCelsius << "C" << endl;

    return 0;
}