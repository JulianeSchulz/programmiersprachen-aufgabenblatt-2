#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include "mat2.hpp"

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

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
