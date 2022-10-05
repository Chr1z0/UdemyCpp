#include <iostream>

int main()
{
    int age1 = 28;
    int age2 = 56;

    int olderAge1;

    //1.) if:
    if (age1 > age2)
    {
        olderAge1 = age1;
    }
    else
    {
        olderAge1 = age2;
    }

    //2.) Ternary:
    //               if-Abfrage ? True : False;
    int olderAge2 = age1 > age2 ? age1 : age2;

    return 0;
}
