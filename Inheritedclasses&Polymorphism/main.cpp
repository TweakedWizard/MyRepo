#include "shape.h"
#include "oval.h"
#include "circle.h"

#include <memory>
#include <iostream>

using namespace std; 

void draw_shape const(shape *s)
{
    s->draw();
}

int main ()
{
    shape shape1 ("Shape 1");
    oval oval1 (2.0, 3.5, "Oval 1");
    circle circle1 (3.3, "Circle 1");

     draw_shape (&oval1);
     draw_shape (&circle1);
     draw_shape (&shape1);

return 0;
}
