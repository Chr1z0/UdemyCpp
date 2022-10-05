#include <iostream>
#include "exercise.h"

// Exercise 1
double array_sum(const double *p_array, const unsigned int &length)
{
    double sum = 0.0;

    for(int i = 0; i < length; i++)
    {
        sum += p_array[i];
    }

    return sum;

}

// Exercise 2
int *array_constructor(const int &value, const unsigned int &length)
{
    int* pTempArray = new int[length];

    for(int i = 0; i < length; i++)
    {
        pTempArray[i] = value;
    }

    return pTempArray;
}
