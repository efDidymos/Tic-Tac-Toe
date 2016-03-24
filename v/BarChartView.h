//
// Created by tomas on 23.3.2016.
//

#ifndef DP_MVC_LEPSI_BARCHARTVIEW_H
#define DP_MVC_LEPSI_BARCHARTVIEW_H


#include "View.h"

class BarChartView : public View
{
public:

    BarChartView(Model *m)
        : View(m)
    { }

    virtual void draw() override;
};


#endif //DP_MVC_LEPSI_BARCHARTVIEW_H
