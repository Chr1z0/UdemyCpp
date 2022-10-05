#include <iostream>

// CallByValue
void f1(int number)
{
    number++;
}

// CallByReference
void f2(int &number)
{
    number++;
}

// CallByValue
int f3(int number)
{
    number++;

    return number;
}

int main()
{
    int num = 0;

    f1(num);
    std::cout << num << std::endl;

    f2(num);
    std::cout << num << std::endl;

    std::cout << f3(num) << std::endl;

    return 0;
}
