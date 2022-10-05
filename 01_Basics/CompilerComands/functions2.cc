#include <iostream>
// erstellen einer Objects-Datein => clang++ -c functions2.cc -o functions2.o (enthält code in Maschinensprache - binär)
// erstellen einer ausführbaren Datei => clang++ functions2.o -o functions2(.exe)
// ausführen dieser Datei => ./functions2

bool isEven(int Number)
{
    if (Number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Number = 3;
    bool check = isEven(Number);

    return 0;
}
