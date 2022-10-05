#include <iostream>
#include "exercise.h"

int main()
{
    const unsigned int length = 100;
    double* pArray = new double[length] {};

    for(int i = 0; i < 100; i++)
    {
        pArray[i] = i;
    }

    double sum = array_sum(pArray, length);

    std::cout << sum << std::endl;

    //Array hat Länge von 3 und alle 3 Einträge haben den Wert 5
    //int* pArray2 = array_constructor(5, 3);
    //array{5,5,5,};

    unsigned int inputArrayLength;
    int inputArrayValue;

    std::cout << "Enter the length of your Array: " << std::endl;
    std::cin >> inputArrayLength;
    std::cout << "Enter the value of your Array: " << std::endl;
    std::cin >> inputArrayValue;

    int* newArray = array_constructor(inputArrayValue,inputArrayLength);

    std::cout << *newArray << std::endl;


}
