#include <iostream>

int main()
{
    //Heap-Allocation

    int *p = new int;

    //Das was an p steht, wird zu 4
    *p = 4;

    std::cout << "Speicheradresse von p: " << p << std::endl;
    std::cout << "Wert, welcher an p gespeichert ist: " << *p << std::endl;
    std::cout << "Adresse des Pointers, an welchem Speicheradresse von p steht: " << &p << std::endl;

    //Ändert sich Wert von p, ändert sicht NICHT die Speicheradresse von p!
    //Wert von p liegt auf Heap, Pointer auf den Wert von p liegt auf dem Stack
    //Heap-Speicher wird nach beenden des Programms auch ohne delete freigegeben, aber während des Porgrammablaufs,
    //-> nur mittels delete.

    //Heap-Dealocation

    //delete p, löscht nicht den Pointer (dieser zeigt weiterhin auf die selbe Adresse), jedoch gibt es den reservierten Speicherplatz
    //-> für andere Programme wieder frei & der pointer p zeigt Möglicherweise auf falsche Werte, oder das Programm stürtzt ab

    delete p;

    return 0;
}
