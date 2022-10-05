#include <iostream>

void print_int_pointer(int *x)
{
    std::cout << "Deref: " << *x << "Ref: " << x << "Pointer Address: " << &x << std::endl;
}

void print_double_pointer(double *x)
{
    std::cout << "Deref: " << *x << "Ref: " << x << "Pointer Address: " << &x << std::endl;
}

int main()
{
    int a = 1337; //
    double b = 4.20;

    int *c = &a;
    print_int_pointer(c);

    *c -= 10;
    print_int_pointer(c);

    int *d = &a;
    print_int_pointer(d);

    return 0;
}
