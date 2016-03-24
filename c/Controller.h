//
// Created by tomas on 23.3.2016.
//

#ifndef DP_MVC_LEPSI_CONTROLLER_H
#define DP_MVC_LEPSI_CONTROLLER_H

#include "../Observer.hpp"
#include "../m/Model.h"
#include "../v/View.h"
#include "../Event.h"

class View;

class Controller : public Observer
{
public:
    Controller(View *v);

    virtual ~Controller()
    {
        myModel->detach(this);
    }

    virtual void handleEvent();

    virtual void update() override
    {
    }

protected:
    Model *myModel;
    View *myView;
};


#endif //DP_MVC_LEPSI_CONTROLLER_H
