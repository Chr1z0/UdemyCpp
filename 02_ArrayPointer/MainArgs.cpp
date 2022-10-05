#include <iostream>

//argc: argument counter -> Bsp.: clang --verion => argc = 2 (clang und version)
//argv: argument values
int main(int argc, char** argv) //oder char* argv[], 2D-Array, welche als Pointer übergeben werden
{
    for(int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }

    if(argc > 1)
    {
        int arg_value = std::atoi(argv[1]);  //argv an Stelle 0 = Name der .exe
        std::cout << arg_value << std::endl;
    }


    return 0;
}
