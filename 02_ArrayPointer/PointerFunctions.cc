#include <iostream>

//call by Value - lokale Kopie wird angelegt
void function_f(int* pFunction)
{
    std::cout << "(FUNC): pFunction = " << pFunction << std::endl; // 810
    std::cout << "(FUNC): &pFunction = " << &pFunction << std::endl; // 388 - Adresse Pointer auf Stack d. func
}

//call by Reference - keine lokale Kopie
void function_g(int* &pFunction)
{
    std::cout << "(G): pFunction = " << pFunction << std::endl; //810
    std::cout << "(G): &pFunction = " << &pFunction << std::endl; //3c0
}



int main()
{
                    // 810
    int *pNumber = new int{4};

    std::cout << "(MAIN): pNumber = " << pNumber << std::endl; // 810
    std::cout << "(MAIN): &pNumber = " << &pNumber << std::endl; // 3c0 - Adresse Pointer auf Stack d. main

    function_f(pNumber);
    function_g(pNumber);



    return 0;
}
