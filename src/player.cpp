#include "player.hpp"

Player::Player(double f_edgeLeft, double f_edgeRight)
    : m_edgeLeft(f_edgeLeft), m_edgeRight(f_edgeRight)
{
}

std::ostream& operator<<(std::ostream& os, const Player& player)
{
    os << "Player: " << player.m_edgeLeft << " " << player.m_edgeRight;
    return os;
}