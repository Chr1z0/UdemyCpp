#include <iostream>
#include <vector>

// size = 10
// capacity = 10
// pusback() -> anstatt capacity++ wird capacity z.B. auf 20 gesetzt, da somit die nächste
// pusback's schneller gehen -> heap alloc = langsam

int main()
{
    std::vector<int> myVector;

    for(std::size_t i = 0; i < 10; i++)
    {
        myVector.push_back(i);
    }

    // wenn myVector = 10 Elemente, dann Capacity 16
    // wenn myVector = 14 Elemente, dann Capacity 16
    // Capacity wird erhöht, wenn size fast capacity ist
    std::cout << "Size: " << myVector.size() << std::endl;
    std::cout << "Capactiy: " << myVector.capacity() << std::endl;


    return 0;
}
