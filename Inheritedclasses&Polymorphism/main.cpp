#include "shape.h"
#include "oval.h"
#include "circle.h"

// to set up smart poinnters
#include <memory>
#include <iostream>

using namespace std; 

// DRAW ALL - single function to draw all kinds of shape - dynamic binding syntax. - WITH ARRAYS/COLLECTIONN
// give any shape
// takes pointer parameter, can also have reference parameter 

/*
void draw_shape const(shape *s)
{
    s->draw();
}

// OVERRIDE, OVERLOAD AND HIDING A VIRTUAL METHOD - from child class OR FROM DOWNSTREAM CALSSES
// use override keyword before declaring the method to override 

virtual void draw_shapes const overrirde()
{
    whatever you want thr rmethod to do forr this class.
}

//oveerloading the virrtual draw func
// func with same name but different parameters
virtual void draw_shapes const() {} // draw func with no parameters

// if a VIRTUAL method is overridden, all other overloads of that method are HIDDEN 
// for the child or downstream class until you
// explicitly override it in evey class or stage.

*/

void draw_shape const(shape *s)
{
    s->draw();
}

int main ()
{
    
/*    shape shape1 ("Shape 1");
   // shape1.draw();

    oval oval1 (2.0, 3.5, "Oval 1");
   // oval1.draw();

    circle circle1 (3.3, "Circle 1");
   // circle1.draw();
   

// STATIC BINDING BY DEFAULT FOR INHERITENCE
    //BASE POINTERS
    
    shape *shape_ptr = &shape1;
    shape_ptr -> draw(); 

   shape_ptr = &oval1; // TYPE PF POINTER- shape_ptr if static
   shape_ptr->draw(); // dosen't draw oval if static

    //BASE REFERENCES
    shape& shape_ref = oval1;
    shape_ref.draw(); // will nnot draw oval - same reason - static func
    

    // POLYMORPHISM - DYNAMIC BINNDING
    // creastes larger objeects than static binding 
    // do not use if u want to sve memory
    // modify draw function with VIRTUAL keyword in classes - allows compiler to know which object to draw when func called from another class.
    // for shape class - simillar for all classses inherited
    virtual void draw ()
    {
        cout << "drawing shape using shape calss, drrawing " << m_description << endl;
    }

    // DRAW ALL- calling the draw_shape func to draw diff types of shapes
    // with pointer use &shape , with references use shapae.
     draw_shape (&oval1);
     draw_shape (&circle1);
     draw_shape (&shape1);
 
*/

// if you store raw objects in array set up to store base class
// the data is going to be sliced off
/*
shape shape1;
oval oval1;
circle circle1;


shape shapes1[] = {shape1, oval1, circle1}; 

// array cant store references, but pointers work
shape* shapes2[] = {&shape1, &oval1, &circle1}; // work fine

/*
// for reeference array
for (shape& s : shapes1)
{
    s.draw(); // displays onnly shape data for eveery object
}

// for pointer array
for (shape* shape_ptr : shapes2)
{
    shape_ptr -> draw(); // displays onnly shape data for eveery object
}

// SMART POINTERS   

//shared pointers
shared_ptr <shape> shapes2[] {make_shared<circle>(12.2, "circle3"), make_shared <oval> (10.0, 20.0, "oval3") };
// range based loopp
for (auto &s : shapes2 )
{
    s -> draw();
}
*/

    shape shape1 ("Shape 1");
    oval oval1 (2.0, 3.5, "Oval 1");
    circle circle1 (3.3, "Circle 1");

     draw_shape (&oval1);
     draw_shape (&circle1);
     draw_shape (&shape1);

return 0;
}