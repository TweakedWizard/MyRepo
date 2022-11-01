#ifndef SHAPE_H
#define SHAPE_H

#include <string_view>
#include <string>
#include <iostream>

using namespace std;

class shape
{
    public: 
    shape() = default;
    shape (string_view description);
    ~shape();

    virtual void draw () const
    {
        cout << "called draw() from shape class. Drawing " << m_description << endl;
    }

    protected:
    string m_description = "";
}; 

#endif