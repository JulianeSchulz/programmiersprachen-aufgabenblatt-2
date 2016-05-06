#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include "mat2.hpp"
#include "color.hpp"
#include "circle.hpp"
#include "rectangle.hpp"

//Vektoren Testcase

TEST_CASE("describe_struct", "[struct]")
{
	Vec2 origin;
	REQUIRE(origin.x == 0.0f);
	REQUIRE(origin.y == 0.0f);
}

TEST_CASE("describe_user_constructor", "[user_constructor]")
{
	Vec2 user_constructor{5.0f, 7.0f};
	REQUIRE(user_constructor.x == Approx(5.0f));
	REQUIRE(user_constructor.y == Approx(7.0f));
}

TEST_CASE("describe_addition", "[addition]")
{
	Vec2 result{5.0f, 7.0f};
	Vec2 add{2.0f, 1.5f};
	result += add;
	REQUIRE(result.x == Approx(7.0f));
	REQUIRE(result.y == Approx(8.5f));
}

TEST_CASE("describe_subtraction", "[subtraction]")
{
	Vec2 result{6.0f, 15.0f};
	Vec2 add{2.7f, 4.0f};
	result -= add;
	REQUIRE(result.x == Approx(3.3f));
	REQUIRE(result.y == Approx(11.0f));
}

TEST_CASE("describe_multiplicate", "[multiplicate]")
{
	Vec2 result{8.6f, 2.4f};
	float v = 6.0;
	result *= v;
	REQUIRE(result.x == Approx(51.6f));
	REQUIRE(result.y == Approx(14.4f));
}

TEST_CASE("describe_divide", "[divide]")
{
	Vec2 result{40.0f, 27.4f};
	float v = 8.0;
	result / v;
	REQUIRE(result.x == Approx(5.0f));
	REQUIRE(result.y == Approx(3.425f));
}

TEST_CASE("describe_additiontwo", "[additiontwo]")
{
	Vec2 addfirst{5.0f, 7.0f};
	Vec2 addsecond{2.0f, 1.5f};
	Vec2 result = addfirst + addsecond;
	REQUIRE(result.x == Approx(7.0f));
	REQUIRE(result.y == Approx(8.5f));
}

TEST_CASE("describe_subtractiontwo", "[subtractiontwo]")
{
	Vec2 one{6.0f, 15.0f};
	Vec2 sub{2.7f, 4.0f};
	Vec2 result = one - sub;
	REQUIRE(result.x == Approx(3.3f));
	REQUIRE(result.y == Approx(11.0f));
}

TEST_CASE("describe_multiplicatetwo", "[multiplicatetwo]")
{
	Vec2 v{8.6f, 2.4f};
	float s = 6.0;
	Vec2 result = v*s;
	REQUIRE(result.x == Approx(51.6f));
	REQUIRE(result.y == Approx(14.4f));
}

TEST_CASE("describe_dividetwo", "[dividetwo]")
{
	Vec2 v{40.0f, 27.4f};
	float s = 8.0;
	Vec2 result = v/s;
	REQUIRE(result.x == Approx(5.0f));
	REQUIRE(result.y == Approx(3.425f));
}

TEST_CASE("describe_multiplicatethree", "[multiplicatethree]")
{
	Vec2 v{8.6f, 2.4f};
	float s = 6.0;
	Vec2 result = s*v;
	REQUIRE(result.x == Approx(51.6f));
	REQUIRE(result.y == Approx(14.4f));
}

//Matrizen-Testcase

TEST_CASE("describe_structmat2", "[structmat2]")
{
	Mat2 origin;
	REQUIRE(origin.x11 == 1.0f);
	REQUIRE(origin.x21 == 0.0f);
	REQUIRE(origin.x12 == 0.0f);
	REQUIRE(origin.x22 == 1.0f);
}

TEST_CASE("describe_user_constructormat2", "[user_constructormat2]")
{
	Mat2 user_constructormat2{5.0f, 7.0f, 6.0f, 8.0f};
	REQUIRE(user_constructormat2.x11 == Approx(5.0f));
	REQUIRE(user_constructormat2.x21 == Approx(7.0f));
	REQUIRE(user_constructormat2.x12 == Approx(6.0f));
	REQUIRE(user_constructormat2.x22 == Approx(8.0f));
}

TEST_CASE("describe_multmat2", "[multmat2]")
{
	Mat2 result{5.0f, 7.0f, 3.0f, 2.0f};
	Mat2 mult{2.0f, 5.0f, 4.0f, 9.0f};
	result *= mult;
	REQUIRE(result.x11 == Approx(25.0f));
	REQUIRE(result.x21 == Approx(24.0f));
	REQUIRE(result.x12 == Approx(47.0f));
	REQUIRE(result.x22 == Approx(46.0f));
}

TEST_CASE("describe_multmat2-two", "[multmat2-two]")
{
	Mat2 m1{5.0f, 7.0f, 3.0f, 2.0f};
	Mat2 m2{2.0f, 5.0f, 4.0f, 9.0f};
	Mat2 result;
	result = m1*m2;
	REQUIRE(result.x11 == Approx(25.0f));
	REQUIRE(result.x21 == Approx(24.0f));
	REQUIRE(result.x12 == Approx(47.0f));
	REQUIRE(result.x22 == Approx(46.0f));
}

TEST_CASE("describe_inverse", "[inverse]")
{
	Mat2 normal{1.0f, 3.0f, 2.0f, 4.0f};
	Mat2 invers;
	invers = inverse(normal);
	REQUIRE(invers.x11 == Approx(-2.0f));
	REQUIRE(invers.x21 == Approx(1.5f));
	REQUIRE(invers.x12 == Approx(1.0f));
	REQUIRE(invers.x22 == Approx(-0.5f));
}

TEST_CASE("describe_transpos", "[transpos]")
{
	Mat2 normal{1.0f, 3.0f, 2.0f, 4.0f};
	Mat2 trans;
	trans = transpose(normal);
	REQUIRE(trans.x11 == Approx(1.0f));
	REQUIRE(trans.x21 == Approx(2.0f));
	REQUIRE(trans.x12 == Approx(3.0f));
	REQUIRE(trans.x22 == Approx(4.0f));
}

TEST_CASE("describe_rotate", "[rotate]")
{
	Mat2 m{1.0f, 3.0f, 2.0f, 4.0f};
	Mat2 rotate= make_rotation_mat2 (180);
	m *= rotate;
	REQUIRE(m.x11 == Approx(-2.20077f));
	REQUIRE(m.x21 == Approx(-4.99999f));
	REQUIRE(m.x12 == Approx(-0.395768f));
	REQUIRE(m.x22 == Approx(0.009618));
}

TEST_CASE("describe_determinante", "[determinante]")
{
	Mat2 m{1.0f, 3.0f, 2.0f, 4.0f};
	float result;
	result = m.det();
	REQUIRE(result == Approx(-2.0f));
}



//Vektoren-Matrizen Operationen
TEST_CASE("describe_VecMatMult", "[VecMatMult]")//vek*mat
{
	Vec2 v{1.0f, 2.0f};
	Mat2 m{1.0f, 3.0f, 2.0f, 4.0f};
	Vec2 result;
	result = m*v;
	REQUIRE(result.x == Approx(5.0f));
	REQUIRE(result.y == Approx(11.0f));
}

TEST_CASE("describe_MatVecMult", "[MatVecMult]")//mat*vek
{
	Vec2 v{1.0f, 2.0f};
	Mat2 m{1.0f, 3.0f, 2.0f, 4.0f};
	Vec2 result;
	result = v*m;
	REQUIRE(result.x == Approx(5.0f));
	REQUIRE(result.y == Approx(11.0f));
}
//Circle-Testcase
TEST_CASE("describe_circlearea", "[circlearea]")
{
	float radius{2.0f};
	Vec2 center{0.0f, 0.0f};
	Color white = {1.0f};
	Circle test{center, radius, white};
	REQUIRE(test.area() == Approx(12.5664f));
}

TEST_CASE("describe_circleCENTERget", "[circleCENTERget]")
{
	float radius{2.0f};
	Vec2 center{1.0f, 2.0f};
	Color white = {1.0f};
	Circle test{center, radius, white};
	Vec2 v;
	v = test.center();
	REQUIRE(v.x == (center.x));
	REQUIRE(v.y == (center.y));
}

TEST_CASE("describe_circleCOLORget", "[circleCOLORget]")
{
	float radius{2.0f};
	Vec2 center{1.0f, 2.0f};
	Color white = {1.0f};
	Circle test{center, radius, white};
	Color a;
	a = test.color();
	REQUIRE(a.r == (white.r));
	REQUIRE(a.g == (white.g));
	REQUIRE(a.b == (white.b));
}

TEST_CASE("describe_circleRADIUSget", "[circleRADIUSget]")
{
	float radius{2.0f};
	Vec2 center{1.0f, 2.0f};
	Color white = {1.0f};
	Circle test{center, radius, white};
	float a;
	a = test.radius();
	REQUIRE(a == (radius));
}

TEST_CASE("describe_Bboxconstruct", "[Bboxconstruct]")
{
	float radius{2.0f};
	Vec2 center{1.0f, 2.0f};
	Bbox test{center, radius};
	REQUIRE(test.bcenter_.x == (center.x));
	REQUIRE(test.bcenter_.y == (center.y));
	REQUIRE(test.bradius_ == (radius));
}

TEST_CASE("describe_circleBBOXget", "[circleBBOXget]")
{
	float radius{2.0f};
	Vec2 center{1.0f, 2.0f};
	Color white = {1.0f};
	Circle test{center, radius, white};
	Bbox dest{center, radius};
	Bbox get = test.bounding_box();
	REQUIRE(get.bcenter_.x == (dest.bcenter_.x));
	REQUIRE(get.bcenter_.y == (dest.bcenter_.y));
	REQUIRE(get.bradius_ == (dest.bradius_));
}

TEST_CASE("describe_circleCOLORset", "[circleCOLORset]")
{
	float radius{2.0f};
	Vec2 center{1.0f, 2.0f};
	Color white = {1.0f};
	Circle test{center, radius, white};
	Color red{1.0f, 0.0f, 0.0f};
	test.color(red);
	REQUIRE(test.color().r == (1.0f));
	REQUIRE(test.color().g == (0.0f));
	REQUIRE(test.color().b == (0.0f));
}

TEST_CASE("describe_circleCENTERset", "[circleCENTERset]")
{
	float radius{2.0f};
	Vec2 center{1.0f, 2.0f};
	Color white = {1.0f};
	Circle test{center, radius, white};
	Vec2 v{1.5f, 2.3f};
	test.center(v);
	REQUIRE(test.center().x == (v.x));
	REQUIRE(test.center().y == (v.y));
}

TEST_CASE("describe_circleRADIUSset", "[circleRADIUSset]")
{
	float radius{2.0f};
	Vec2 center{1.0f, 2.0f};
	Color white = {1.0f};
	Circle test{center, radius, white};
	float a{10.0f};
	test.radius(a);
	REQUIRE(test.radius() == (a));
}

TEST_CASE("describe_const_REC", "[const_REC]")
{
	Vec2 cent{1.0f, 2.0f};
	float rechts{2.0f};
	float unten{5.0f};
	Color white = {1.0f};
	Rectangle test{cent, rechts, unten, white};
	REQUIRE(test.center_.x == (cent.x));
	REQUIRE(test.center_.y == (cent.y));
	REQUIRE(test.right_ == (rechts));
	REQUIRE(test.down_ == (unten));
	REQUIRE(test.color_.r==(white.r));
	REQUIRE(test.color_.g==(white.g));
	REQUIRE(test.color_.b==(white.b));
}

TEST_CASE("describe_Circle_Circum", "[Circle_Circum]")
{
	float radius{2.0f};
	Vec2 center{1.0f, 2.0f};
	Color white = {1.0f};
	Circle test{center, radius, white};
	REQUIRE(test.circumference() == Approx(12.5664f));
}

TEST_CASE("describe_Rectangle_Circum", "[Rectangle_Circum]")
{
	Vec2 cent{1.0f, 2.0f};
	float rechts{2.0f};
	float unten{5.0f};
	Color white = {1.0f};
	Rectangle test{cent, rechts, unten, white};
	REQUIRE(test.circumference() == Approx(14.0f));
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
