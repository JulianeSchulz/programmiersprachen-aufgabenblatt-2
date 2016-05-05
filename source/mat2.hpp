#ifndef MAT2_HPP
#define MAT2_HPP
//Mat2 class definition

class Mat2
{
public:
Mat2 ();
Mat2 (float x11, float x21, float x12, float x22);

float x11;
float x21;
float x12;
float x22;

Mat2& operator*=(Mat2 const& m);

};
# endif // MAT2_HPP

Mat2 operator*(Mat2 const& m1, Mat2 const& m2);