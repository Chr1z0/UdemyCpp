#pragma once

#include <cstdlib>

struct DynamicArray
{
    double* m_data;
    std::size_t m_length; // size_t immer unsigned int, welcher passende Länge für Betriebssystem hat
};

DynamicArray create_dynamic_array(const double &value, const std::size_t &length);

void push_back(DynamicArray &dynmaic_array, const int &value);

void pop_back(DynamicArray &dynmaic_array);
