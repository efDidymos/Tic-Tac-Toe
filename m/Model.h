//
// Created by tomas on 23.3.2016.
//

#ifndef DP_MVC_LEPSI_MODEL_H
#define DP_MVC_LEPSI_MODEL_H

#include <list>
#include <string>
#include <set>
#include <iostream>
#include "../Observer.hpp"

enum cell {
    player, enemy, clear
};

class Model
{
public:

    Model()
    {
        board[1][1] = cell::player;
        board[0][0] = cell::enemy;
    }

    virtual ~Model()
    {
        if (!registry.empty())
            registry.clear();
    }

    const cell & getCell(unsigned short int x, unsigned short int y) const
    {
        return board[x][y];
    }

    inline void attach(Observer *s) { registry.insert(s); }

    inline void detach(Observer *s) { registry.erase(s); }

protected:
    virtual void notify();

private:
    cell    board[3][3] = {{cell::clear, cell::clear, cell::clear},
                            {cell::clear, cell::clear, cell::clear},
                            {cell::clear, cell::clear, cell::clear}};
    std::set<Observer *>    registry;
};

#endif //DP_MVC_LEPSI_MODEL_H
