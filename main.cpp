#include <iostream>
#include <list>
#include "m/Model.h"
#include "v/View.h"

using namespace std;

int main()
{
    Model m;

//    TableView *v1 = new TableView(&m);
    View *v1 = new View(&m);
    v1->initialize();
    v1->getController()->handleEvent();

    /*
    while ()
    {

    }
    */

    delete v1;

    return 0;
}