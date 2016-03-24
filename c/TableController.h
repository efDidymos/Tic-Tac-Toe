//
// Created by tomas on 23.3.2016.
//

#ifndef DP_MVC_LEPSI_TABLECONTROLLER_H
#define DP_MVC_LEPSI_TABLECONTROLLER_H

#include <iostream>
#include "Controller.h"

class TableController : public Controller
{
public:
    TableController(View *tv)
        : Controller(tv)
    { }

//    virtual void handleEvent(Event *event) override
    virtual void handleEvent() override
    {
        std::cout << "TableController::handleEvent" << std::endl;
    }

};


#endif //DP_MVC_LEPSI_TABLECONTROLLER_H
