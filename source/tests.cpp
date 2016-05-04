#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

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

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
