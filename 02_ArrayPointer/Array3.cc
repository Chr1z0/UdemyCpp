#include <iostream>

int main()
{
    float vector1[3] = {}; //{} sorgt dafür, dass Array mit 0 initialisiert ist
    float vector2[3] = {};
    float vector_add[3] = {};

    std::cout << "Enter values for vector 1: " << std::endl;

    for (unsigned int i = 0; i < 3; i++)
    {
        std::cin >> vector1[i];
    }

    for (unsigned int i = 0; i < 3; i++)
    {
        std::cin >> vector2[i];
    }

    vector_add[0] = vector1[0] + vector2[0];
    vector_add[1] = vector1[1] + vector2[1];
    vector_add[2] = vector1[2] + vector2[2];

    std::cout << "New Vector: " << vector_add[0] << ", " << vector_add[1] << ", " << vector_add[2] << std::endl;


    return 0;
}
