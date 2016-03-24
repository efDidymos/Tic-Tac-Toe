//
// Created by tomas on 23.3.2016.
//

#include <iostream>
#include "View.h"

void View::draw()
{
    // drawing three row
    for (unsigned short int i = 0; i < 3; ++i)
    {
        std::cout << "+---+---+---+" << std::endl;

        // drawing three column
        for (unsigned short int j = 0; j < 3; ++j)
        {
            switch (myModel->getCell(i, j))
            {
                case cell::player:
                    std::cout << "| O ";
                    break;

                case cell::enemy:
                    std::cout << "| X ";
                    break;

                case cell::clear:
                default:
                    std::cout << "|   ";
                    break;
            }
        }
        std::cout << "|" << std::endl;
    }
    std::cout << "+---+---+---+" << std::endl;
}


View::~View()
{
    myModel->detach(this);
    delete myController;
}

Controller *View::makeController()
{
    return new Controller(this);
}



