#include "exercise.h"
#include <iostream>

int main()
{
    PlayerData Player1;
    Player1.m_id = 1;
    Player1.m_Energy = 50;
    Player1.m_XPos = 12;
    Player1.m_YPos = 13;
    Player1.m_Health = 99;
    Player1.m_Status = Status::ALLIED;

    PlayerData Player2;
    Player1.m_id = 2;
    Player1.m_Energy = 59;
    Player1.m_XPos = 10;
    Player1.m_YPos = 111;
    Player1.m_Health = 69;
    Player1.m_Status = Status::ENEMY;

    print_player_pos(Player1);
    print_player_pos(Player2);
}
