#include <iostream>

int main()
{
    char firstName[] = {'C', 'h', 'r', 'i', 's'};
    std::cout << firstName << std::endl;

    //\0 (Null-Terminator) sorgt dafür, dass Array weiß, wo Schluss ist
    char firstName1[] = {'C', 'h', 'r', 'i', 's', '\0'};
    std::cout << firstName1 << std::endl;

    //Doppelte Anführungszeichen speichern komplette Zeichenkette, einzelne nur separate Buchstaben
    char lastName[] = "Dreysse"; //\0 wird automatisch vom Compiler ergänzt
    std::cout << lastName << std::endl;

    int sizeLastName = sizeof(lastName);
    std::cout << sizeLastName << std::endl;

    const char *lastNamerino = "Wentzlaff";
    std::cout << sizeof(lastNamerino) << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << lastName[i] << std::endl;
    }

    return 0;
}
