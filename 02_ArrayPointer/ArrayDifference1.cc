#include <iostream>

int main()
{
    char last_name[] = "Schaffranek"; //Vorteil: String kann ohne for-Schleife ausgegeben werden
    std::cout << last_name << std::endl;

    //= nicht nötig
    int values[]{1, 2, 3};
    for (int i = 0; i < 4; i++)
    {
        std::cout << values[i] << std::endl;
    }

    std::cout << values << std::endl;

    return 0;
}
