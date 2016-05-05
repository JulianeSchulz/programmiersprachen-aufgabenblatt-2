#include <iostream>
#include "mat2.hpp"
#include <cmath>

Mat2::Mat2()
 : x11(1.0), x21(0.0), x12(0.0), x22(1.0)
 {}

Mat2::Mat2(float a, float b, float c, float d)
 : x11(a), x21(b), x12(c), x22(d)
 {}

 Mat2& Mat2::operator*=(Mat2 const& m){
 	Mat2 temp = *this; //Zwischenvektor fuer korrekte Rechnung
 	this -> x11 = temp.x11*m.x11 + temp.x12*m.x21;
 	this -> x21 = temp.x21*m.x11 + temp.x22*m.x21;
 	this -> x12 = temp.x11*m.x12 + temp.x12*m.x22;
 	this -> x22 = temp.x21*m.x12 + temp.x22*m.x22;
 	return *this;
 }
 Mat2 operator*(Mat2 const& m1, Mat2 const& m2){
 	Mat2 result= m1;
 	result *= m2;
 	return result;
 }

Mat2 inverse (Mat2 const& m){
	Mat2 result;
	float fract = 1/((m.x11*m.x22)-(m.x12*m.x21));
	result.x11 = fract*m.x22;
	result.x21 = fract*(-m.x21);
	result.x12 = fract*(-m.x12);
	result.x22 = fract*m.x11;
	return result;
} 
Mat2 transpose (Mat2 const& m){
	Mat2 result;
	result.x11 = m.x11;
	result.x21 = m.x12;
	result.x12 = m.x21;
	result.x22 = m.x22;
	return result;
}
Mat2 make_rotation_mat2 (float phi){
	Mat2 result;
	result.x11 = cos(phi);
	result.x21 = sin(phi);
	result.x12 = -(sin(phi));
	result.x22 = cos(phi);
	return result;
}
