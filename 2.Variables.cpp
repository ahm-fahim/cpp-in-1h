#include <iostream>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 3;

    // swap 2 numbers
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a = " << a << " b = " << b << std::endl;

    return 0;
}
