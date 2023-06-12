#include <iostream>
using namespace std;

int main()
{
    double sales = 95000;
    cout << "Sales : $" << sales << endl;

    const double stateTaxRate = 0.4;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax : $" << stateTax << endl;

    const double countyTaxRate = 0.2;
    double countyTax = sales * countyTaxRate;
    cout << "State Tax : $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "Total Tax : $" << totalTax << endl;

    return 0;
}