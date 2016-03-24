//
// Created by tomas on 23.3.2016.
//

#ifndef DP_MVC_LEPSI_VIEW_H
#define DP_MVC_LEPSI_VIEW_H

#include "../Observer.hpp"
#include "../m/Model.h"
#include "../c/Controller.h"

class Controller;

class View : public Observer
{
public:

    View(Model *m)
        : myModel(m), myController(nullptr)
    {
        myModel->attach(this);
    }

    virtual ~View();

    virtual void update() override
    {
        this->draw();
    }

    virtual void initialize()
    {
        myController = makeController();
    }

    virtual Controller* makeController();

    virtual void draw();

    Model *getModel() const
    {
        return myModel;
    }
    Controller *getController() const
    {
        return myController;
    }
protected:
    Model *myModel;
    Controller *myController;
};


#endif //DP_MVC_LEPSI_VIEW_H
