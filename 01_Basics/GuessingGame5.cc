#include <iostream>
//User spielt bis er gewonnen hat
//Programm wird so lange ausgeführt, bis 4 eingegeben wird und has_won = true!

int main()
{
    bool hasWon = false;

    std::cout << "Welcome to my Guessing-Game!" << std::endl;

    do
    {
        int number;
        std::cout << "Please enter your number: ";
        std::cin >> number;

        if (number >= 0 && number <= 10)
        {
            if (number == 4)
            {
                std::cout << "You won!" << std::endl;
                hasWon = true;
            }
            else if (number % 2 == 0)
            {
                std::cout << "You won the wooden spoon!" << std::endl;
            }
            else
            {
                std::cout << "You lost!" << std::endl;
            }
        }
        else
        {
            std::cout << "You must enter a number between [0, 10]." << std::endl;
        }
    } while (hasWon == false);

    return 0;
}
