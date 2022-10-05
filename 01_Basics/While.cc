#include <iostream>
/*
int main()
{
    int sum = 0;

    while (sum < 10)
    {
        std::cout << "\n Current sum: " << sum << " Enter the next value: ";
        int input;
        std::cin >> input;

        sum += input;
    }

    return 0;
}
*/

//do-while:
//Unterschied: - wird min. 1x ausgeführt, da 'do' vor 'while' steht
//egal welchen Wert sum zunächst hat, wird Zahl >= 0 eingegeben, bricht Schleife ab
//while-Schleife würd garnicht ausgeführt werden mit sum = 10

int main()
{
    int sum = 10;

    do
    {
        std::cout << "\n Current sum: " << sum << " Enter the next value: ";
        int input;
        std::cin >> input;

        sum += input;
    } while (sum < 10);

    return 0;
}
