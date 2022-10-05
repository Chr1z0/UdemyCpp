#include <iostream>

int main()
{
    unsigned int arraySize = 10;

    //Heap allocation
    int* pArray = new int[arraySize];

    for(int i = 0; i < arraySize; i++)
    {
        pArray[i] = i;
        std::cout << "Array an Stelle: " << i << " = " << i << std::endl;
    }

    //Heap de-allocation für Pointer-Array
    //![]
    delete[] pArray;

    return 0;
}
