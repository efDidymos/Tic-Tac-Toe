//
// Created by tomas on 23.3.2016.
//

#ifndef DP_MVC_LEPSI_TABLEVIEW_H
#define DP_MVC_LEPSI_TABLEVIEW_H

#include "View.h"
#include "../c/TableController.h"

class TableView : public View
{
public:

    TableView(Model *m)
        : View(m)
    { }

    virtual Controller *makeController() override
    {
        return new TableController(this);
    }
    virtual void draw() override
    {
        std::cout << "TableView is drawing" << std::endl;
    }

};


#endif //DP_MVC_LEPSI_TABLEVIEW_H
