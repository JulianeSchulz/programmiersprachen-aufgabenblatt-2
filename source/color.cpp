#include "color.hpp"

Color::Color()
: r(1.0), g(1.0), b(1.0)
{}

Color::Color(float e)
: r(e), g(e), b(e)
{}

Color::Color(float a, float b, float c)
: r(a), g(b), b(c)
{}