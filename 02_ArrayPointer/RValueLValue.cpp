#include <iostream>
//RValue hat keine Speicheradresse (hardcoded zahlen)

void f(const int &v) //ohne const dürfen nur V übergeben werden, welche veränderbar sind
{
    std::cout << v << std::endl;
}

int main()
{
    int a = 3; //LValue
    const int b = 3; //const LValue
    int& c = a; //LValue Referenz
    const int &d = a; //const LValue Referenz


    std::cout << &c << std::endl;
    std::cout << &a << std::endl;
    std::cout << d << std::endl;

    f(a);
    f(b);
    f(c);
    f(d);

    f(3); //const RValue


    return 0;
}
