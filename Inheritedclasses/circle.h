#ifndef CIRCLE_H
#define CIRCLE_H

#include "oval.h"

using namespace std;

class circle : public oval
{
    public:
    circle() = default;
    circle (double radius, string_view description);
    ~circle();

    virtual void draw ()
    {
        cout << "called draw from circle class, drawing " << m_description << " with radius: " << get_x_radius() << endl;
    }

};

    #endif