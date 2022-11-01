#ifndef OVAL_H
#define OVAL_H

#include "shape.h"

using namespace std;

class oval : public shape
{
    public:
    oval() = default;
    oval (double x_radius, double y_radius, string_view description);
    ~oval();

    virtual void draw () const 
    {
        cout << "called draw from oval class, drawing " << m_description << "with m_x_radius: " << m_x_radius << " and m_y_radius; " << m_y_radius << endl;
    }

    protected:
    double get_x_radius () const 
    {
        return m_x_radius;
    }
    double get_y_radius () const 
    {
        return m_y_radius;
    }

    private:
    double m_x_radius = 0.0;
    double m_y_radius = 0.0;
};

#endif