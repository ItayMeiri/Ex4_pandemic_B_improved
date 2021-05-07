//
// Created by ischelle on 05/05/2021.
//

#pragma once

#include "Player.hpp"
namespace pandemic {
    class Virologist : public Player

{
    public:
    Virologist(Board &board, City city);
    virtual std::string role();
    virtual Player &treat(City c);
    // void treat(); // Can treat anywhere in the world by throwing a card.
};
}
