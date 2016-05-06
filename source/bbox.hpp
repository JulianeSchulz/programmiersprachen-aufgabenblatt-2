#ifndef BBOX_HPP
#define BBOX_HPP
#include "vec2.hpp"
class Bbox {
public:
	Bbox(Vec2 const& cntr, float r);

	Vec2 bcenter_;
	float bradius_;

};
# endif // BBOX_HPP