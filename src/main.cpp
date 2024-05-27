#include <iostream>
#include "team.hpp"

int main(int, char**){
    Player player1{1.0, 2.0};
    Player player2{3.0, 4.0};
    Team team{};
    team.addPlayer(player1);
    team.addPlayer(player2);
    std::cout << "Hello, from offside_officiator!\n";
    std::cout << team;
}
