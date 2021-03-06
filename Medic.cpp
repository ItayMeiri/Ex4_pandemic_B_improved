//
// Created by ischelle on 05/05/2021.
//

#include "Medic.hpp"

namespace pandemic
{

    Medic::Medic(Board &board, City city) : Player(board, city)
    {
        Color clr = board.get_color(current_city);
        if(board.cured(clr))
        {
            //treat this city
            board.data_map.at(city).level = 0;
        }
    }
    Player &Medic::treat(City city)
    {
        std::cout<<"the level is " << board.get_level(city) << " \n";

        if(city != current_city)
        {
            throw std::invalid_argument("You're not in this city");
        }

        if(board.get_level(current_city) <= 0)
        {
            throw std::invalid_argument("The level is already 0");
        }
        board.data_map.at(current_city).level = 0;
        return *this;
    }
    std::string Medic::role()
    {
        return "Medic";
    }
}