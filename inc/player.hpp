#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED

#include <iostream>

class Player
{
private:
    double m_edgeLeft;
    double m_edgeRight;
public:
    Player(double f_edgeLeft = 0.0, double f_edgeRight = 0.0);
    friend std::ostream& operator<<(std::ostream& os, const Player& player);
};

std::ostream& operator<<(std::ostream& os, const Player& player);

#endif // PLAYER_HPP_INCLUDED