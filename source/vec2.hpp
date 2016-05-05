#ifndef VEC2_HPP
#define VEC2_HPP
#include "mat2.hpp"

// Vec2 class definition
class Vec2
{
public:
Vec2();
Vec2(float x, float y);

float x;
float y;

Vec2& operator+=(Vec2 const& v);
Vec2& operator-=(Vec2 const& v);
Vec2& operator*=(float v);
Vec2& operator/(float v);


};
# endif // VEC2_HPP

Vec2 operator+(Vec2 const& u, Vec2 const& v);
Vec2 operator-(Vec2 const& u, Vec2 const& v);
Vec2 operator*(Vec2 const& v, float s);
Vec2 operator/(Vec2 const& v, float s);
Vec2 operator*(float s, Vec2 const& v);
//Vektor und Matrizen Operationen
Vec2 operator*(Mat2 const& m, Vec2 const& v);
Vec2 operator*(Vec2 const& v, Mat2 const& m);
