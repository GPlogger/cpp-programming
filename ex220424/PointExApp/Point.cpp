#include "Point.h"
#include <iostream>
Point::Point(int _x, int _y) :x(_x), y(_y) {}
void Point::Print()const { std::cout << x << ',' << y << std::endl; }