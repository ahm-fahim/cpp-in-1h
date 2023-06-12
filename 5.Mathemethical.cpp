#include <iostream>

int main()
{
    int a = 10;
    int b = 3;

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    std::cout << "Sum  = " << sum << std::endl;
    std::cout << "Sub  = " << sub << std::endl;
    std::cout << "Mul  = " << mul << std::endl;
    std::cout << "Div  = " << div << std::endl;
    std::cout << "Mod  = " << mod << std::endl;

    sum = sum + 10; // +-*/%
    std::cout << "Sum  = " << sum << std::endl;

    // increment prefix
    int inc = a++; // --  a=11 ,inc = 10

    std::cout << "a++ = " << a << std::endl;
    std::cout << "inc = " << inc << std::endl;

    // decrement postfix
    int dec = --b; // ++  b=2 , dec = 2

    std::cout << "--b =  " << b << std::endl;
    std::cout << "dec =  " << dec << std::endl;

    return 0;
}