//
// Created by tomas on 23.3.2016.
//

#include "Controller.h"
Controller::Controller(View *v)
    : myView(v)
{
    myModel = myView->getModel();
    myModel->attach(this);
}
void Controller::handleEvent()
{
    std::cout << "Controller::handleEvent" << std::endl;
    myView->draw();
}