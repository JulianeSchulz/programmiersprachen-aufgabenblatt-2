#include <iostream>
#include "vec2.hpp"

Vec2::Vec2()
 : x(0.0), y(0.0)
 {}

Vec2::Vec2(float a, float b)
 : x(a), y(b)
 {}

Vec2& Vec2::operator+=(Vec2 const& v){
 	this -> x += v.x;
 	this -> y += v.y;
 	return *this;
 }

Vec2& Vec2::operator-=(Vec2 const& v){
 	this -> x -= v.x;
 	this -> y -= v.y;
 	return *this;
 }

Vec2& Vec2::operator*=(float v){
 	this -> x *= v;
 	this -> y *= v;
 	return *this;
 }

Vec2& Vec2::operator/(float v){
 	this -> x /= v;
 	this -> y /= v;
 	return *this;
 }

Vec2 operator+(Vec2 const& u, Vec2 const& v){
	Vec2 result = u;
	result += v;
	return result;
}

Vec2 operator-(Vec2 const& u, Vec2 const& v){
	Vec2 result = u;
	result -= v;
	return result;
}

Vec2 operator*(Vec2 const& v, float s){
	Vec2 result = v;
	result *= s;
	return result;
}

Vec2 operator/(Vec2 const& v, float s){
	Vec2 result = v;
	result = result/s;
	return result;
}

Vec2 operator*(float s, Vec2 const& v){
	Vec2 result = v;
	result *= s;
	return result;
}
