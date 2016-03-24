//
// Created by tomas on 23.3.2016.
//

#include "Model.h"

void Model::notify()
{
    for (auto e : registry)
        e->update();
}