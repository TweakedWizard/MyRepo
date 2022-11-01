#include "circle.h"

using namespace std;

circle :: circle (double radius, string_view description) : oval (radius, radius, description) {}
circle :: ~circle (){}