#include <iostream>

int main()
{
    int number = 5;
    int *pNumber = &number;

    std::cout << number << std::endl;

    // Referenzieren: "Gebe die Adresse aus, an welcher number sich befindet"
    std::cout << &number << std::endl;

    // Dereferenzieren: "Gebe aus, was an pNumber steht"
    std::cout << *pNumber << std::endl;

    return 0;
}
