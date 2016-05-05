#include <iostream>
#include "mat2.hpp"

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

    /*result.x11 = m1.x11*m2.x11 + m1.x12*m2.x21;
 	result.x21 = m1.x21*m2.x11 + m1.x22*m2.x21;
 	result.x12 = m1.x11*m2.x12 + m1.x12*m2.x22;
 	result.x22 = m1.x21*m2.x12 + m1.x22*m2.x22;*/