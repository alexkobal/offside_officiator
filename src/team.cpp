#include "team.hpp"

Team::Team()
    : m_players{}
{
}

void Team::addPlayer(const Player& player)
{
    m_players.emplace_back(player);
}

std::ostream& operator<<(std::ostream& os, const Team& team)
{
    os << "Team: ";
    for (const Player& player : team.m_players)
    {
        os << player << std::endl;
    }
    return os;
}
