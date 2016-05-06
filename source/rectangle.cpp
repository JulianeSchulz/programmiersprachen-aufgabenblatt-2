#include <math.h>
#include "vec2.hpp"
#include "rectangle.hpp"

Rectangle::Rectangle()
: center_(Vec2{}), right_(1.0), down_(1.0), color_(Color{})
{}
Rectangle::Rectangle(Vec2 const& cntr, float r, float d, Color const& clr)
: center_(cntr), right_(r), down_(d), color_(clr)
{}
float Rectangle::circumference() const{
	Rectangle temp = *this;
	return 2*temp.right_ + 2*temp.down_; 
}
Color Rectangle::color() const{
	return this -> color_;
}