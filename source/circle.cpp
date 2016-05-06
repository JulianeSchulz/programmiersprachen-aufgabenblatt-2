#include "circle.hpp"
#include <math.h>
#include "vec2.hpp"
#include "bbox.hpp"


Circle::Circle(Vec2 const& ctr, float r, Color const& clr)
 : center_(ctr), radius_(r), color_(clr)
{}
//GETTER
float Circle::area()const{
	Circle temp = *this;
	return pow(temp.radius_,2)*M_PI;
}

float Circle::circumference() const{
	Circle temp = *this;
	return 2*temp.radius_*M_PI;
}

float Circle::radius()const{
	return this -> radius_;
}

Vec2 Circle::center()const{
	return this -> center_;
}

Color Circle::color()const{
	return this -> color_;
}

Bbox Circle::bounding_box()const{
	Circle temp = *this;
	Bbox schmox{temp.center(), temp.radius()};
	return schmox;
}
//SETTER
void Circle::color(Color const& clr){
	this -> color_ = clr;
}

void Circle::center(Vec2 const& ctr){
	this -> center_ = ctr;

}
void Circle::radius(float r){
	this -> radius_ = r;
}