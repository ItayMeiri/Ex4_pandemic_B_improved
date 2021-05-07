//
// Created by ischelle on 05/05/2021.
//
#include "OperationsExpert.hpp"

namespace pandemic{

    OperationsExpert::OperationsExpert(Board &board, City city) : Player(board, city)
    {
        //nothing
    }
    //can build without throwing card
    Player& OperationsExpert::build()
    {
        if(board.has_center(current_city))
        {
            //already has center
            return *this;
        }
        board.set_center(current_city, true);
        return *this;
    }
    std::string OperationsExpert::role()
    {
        return "OperationsExpert";
    }

}