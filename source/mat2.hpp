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

	float det()const{
		float result;
		result = (x11*x22)-(x21*x12);
		return result;
	}

};
# endif // MAT2_HPP

Mat2 operator*(Mat2 const& m1, Mat2 const& m2);
Mat2 inverse (Mat2 const& m);
Mat2 transpose (Mat2 const& m);
Mat2 make_rotation_mat2 (float phi);
