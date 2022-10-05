#include <iostream>

int main()
{
    unsigned int length = 10;
    unsigned int player = 0;
    unsigned int start = 0;
    unsigned int goal = 9;

    char left = 'a';
    char right = 'd';
    char move = 0;
    bool reachedGoal = false;

    do
    {
        for (int i = start; i < length; i++)
        {
            if (i == player)
            {
                std::cout << "P";
            }
            else if (i == goal || i == start)
            {
                std::cout << "|";
            }
            else
            {
                std::cout << ".";
            }
        }

        std::cin >> move;

        if (left == move && player > start)
        {
            player--;
        }
        else if (right == move && player < goal)
        {
            player++;
        }
        else
        {
            std::cout << "Invalid Input" << std::endl;
        }

        if (player == goal)
        {
            reachedGoal = true;
            std::cout << "Player has reached the goal!" << std::endl;
        }
    } while (reachedGoal == false);

    return 0;
}
