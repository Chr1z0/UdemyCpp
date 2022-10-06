#include <iostream>
#include <vector>

int main()
{
    // vector von int Schreibweise
                           // 10 Elemente, welche alle Wert 0 haben
    std::vector<int> myVector(4, 0);

    // Handhabung wie Array
    std::cout << myVector[0] << std::endl;
    myVector[0] = 11;
    std::cout << myVector[0] << std::endl;

    // Standardfunktion, welche Vektor um einen Eintrag erweitert
    myVector.push_back(55);
    std::cout << myVector[4] << std::endl;

    // .size() -> Standardfunktion für Länge eines Vektors

    for(std::size_t i = 0; i < myVector.size(); i++)
    {
        std::cout << myVector[i] << std::endl;
    };

    // Standardfunktion, welche letzten Eintrag des Vektors entfernt
    myVector.pop_back();

    for(std::size_t i = 0; i < myVector.size(); i++)
    {
        std::cout << myVector[i] << std::endl;
    };



    return 0;
}
