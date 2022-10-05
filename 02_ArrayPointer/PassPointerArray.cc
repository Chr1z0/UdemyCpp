#include <iostream>

int array_maximum(int* array, unsigned int length)
{
    int maxValue = array[0];

    for(unsigned int i = 1; i < length; i++)
    {
        if(i > maxValue)
        {
            maxValue = array[i];
        }
    }

    return maxValue;
}


int main()
{
    unsigned int array_size = 10;

    // Heap allocation
    int* p = new int[array_size];

    for (unsigned int i = 0; i < array_size; ++i)
    {
        p[i] = i;
        if(i == array_size -1)
        {
            p[i] = 100;
        }
    }

    int maximum = array_maximum(p, array_size);

    std::cout << maximum << std::endl;

    // Heap de-allocation
    delete[] p;

    return 0;
}
