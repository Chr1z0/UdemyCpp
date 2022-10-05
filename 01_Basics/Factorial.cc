#include <iostream>

unsigned int faculty(unsigned int n)
{
    if (n > 1)
    {   //da zuerst rechte Seite ausgeführt wird, ruft sich faculty so oft selber auf, bis Bedingung nicht mehr passt
        //pass Bedingung nicht mehr: gibt faculty 1 zurück
        //5 * (5-1) * ((5-1) - 1)) * (...)
        return n * faculty(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    unsigned int n = 5;
    unsigned int n_fac = faculty(n);

    std::cout << n << "! = " << n_fac << std::endl;
}
