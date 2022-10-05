#include <algorithm>
#include <iostream>

/*
Nicht verwenden, da Funktion aus library (z.B. algorithm) möglicherweise gleiche Deklaration hat
und dann std:: sowieso verwendet werden muss, da sonst möglicherweise falsche Funktion verwendet (da gleicher Name + Argumente
+ Rückgabetyp) wird.
*/
using namespace std;

int min(int a, int b) //eigen definierte Funktion
{
    return a > 0 && a < b;
}

int main()
{
    int a = 2;
    int b = 3;

    int res = std::min(a, b); //Standardfunktion
    cout << res << endl;

    return 0;
}
