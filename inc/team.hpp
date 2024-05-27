#ifndef TEAM_HPP_INCLUDED
#define TEAM_HPP_INCLUDED

#include <vector>
#include <functional>
#include <iostream>
#include "player.hpp"

class Team
{
private:
    std::vector<std::reference_wrapper<const Player>> m_players;
public:
    Team();
    void addPlayer(const Player& player);
    friend std::ostream& operator<<(std::ostream& os, const Team& team);
};

std::ostream& operator<<(std::ostream& os, const Team& team);

#endif // TEAM_HPP_INCLUDED