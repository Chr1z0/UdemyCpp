#include <cmath>
#include <cstdlib>

#include "AlgoArray.h"
#include "DynArray.h"

double mean(DynamicArray &Dynary)
{
    double sum = 0;

    for (int i = 0; i < Dynary.m_length; i++)
    {
        sum += Dynary.m_data[i];
    }

    sum /= Dynary.m_length;

    return sum;
}

double median(DynamicArray &Dynary)
{
    double sum = 0.0;
    const bool hasEvenLength = Dynary.m_length % 2 == 0;

    if(hasEvenLength)
    {
        const std::size_t index1 = Dynary.m_length / 2;
        const std::size_t index2 = (Dynary.m_length / 2) - 1;
        sum = (Dynary.m_data[index1] + Dynary.m_data[index2]) / 2;
    }
    else
    {
        const std::size_t index = Dynary.m_length / 2;
        sum = Dynary.m_data[index];
    }

    return sum;

}
