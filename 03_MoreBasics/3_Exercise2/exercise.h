#include <iostream>

// Exercise 1
enum class Status
{
    ALLIED,
    ENEMY
};

struct PlayerData
{
    std::uint32_t m_id;
    float m_XPos;
    float m_YPos;
    std::uint32_t m_Health;
    std::uint32_t m_Energy;
    Status m_Status;
};

void print_player_pos(const PlayerData &Status);
