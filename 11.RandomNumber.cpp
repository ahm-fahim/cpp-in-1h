#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // long elapsedTime = time(0);

    srand(time(0));
    int num1 = rand() % 10;

    cout << num1 << endl;

    const short maxValue = 6;
    const short minValue = 1;

    int num2 = rand() % (maxValue - minValue + minValue);
    cout << num2 << endl;
}