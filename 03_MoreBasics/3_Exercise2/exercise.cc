#include "exercise.h"
#include <iostream>

void print_player_pos(const PlayerData &Status)
{
    int _X = Status.m_XPos;
    int _Y = Status.m_XPos;

    std::cout << "The Players Position is: "
              << "X - " << _X << " and Y - " << _Y << std::endl;
}
