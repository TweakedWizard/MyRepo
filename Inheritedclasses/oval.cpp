#include "oval.h"

using namespace std;

oval :: oval (double x_radius, double y_radius, string_view description) : shape (description), m_x_radius (x_radius), m_y_radius (y_radius) {}
oval :: ~oval () {} 