#include <iostream>

int main()
{
    // Heap allocation
    int *p_zahl = new int{4}; //{4} ist Größe des Integers

    std::cout << p_zahl << std::endl;

    // Heap de-allocation
    //  delete p_zahl;

    // The memory adress of the heap variable, where the pointer points to
    std::cout << p_zahl << std::endl;

    // löscht vorherige Speicheradresse & setzt diese auf 0
    // p_zahl = nullptr;

    // The memory adress of the heap variable, where the pointer points to
    //  std::cout << p_zahl << std::endl;

    if (p_zahl != nullptr)
    {
        std::cout << *p_zahl << std::endl;
    }

    return 0;
}
