#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "color.hpp"
#include "vec2.hpp"
#include "circle.hpp"
class Rectangle {
public:
	Rectangle();
	Rectangle(Vec2 const& cntr, float r, float d, Color const& clr);
	float circumference() const;
	Color color() const;
	Vec2 center_;
	float right_;
	float down_;
	Color color_;


};
# endif // RECTANGLE_HPP