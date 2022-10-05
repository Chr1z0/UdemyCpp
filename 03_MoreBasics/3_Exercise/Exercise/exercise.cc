#include <iostream>

#include "exercise.h"

namespace computation
{

// Exercise 1
double mean_array_value(int* array, const unsigned int &length)
{
    double count = 0;

    for(int i = 0; i < length; i++)
    {
        count += array[i];
    }

    double mean_value = count / length;

    return mean_value;
}

double mean_array_value(double* array, const unsigned int &length)
{
    double count = 0;

    for(int i = 0; i < length; i++)
    {
        count += array[i];
    }

    double mean_value = count / length;

    return mean_value;
}

} // namespace computation
