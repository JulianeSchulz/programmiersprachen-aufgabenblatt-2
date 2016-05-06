#include <math.h>
#include "vec2.hpp"
#include "bbox.hpp"

Bbox::Bbox(Vec2 const& cntr, float r)
: bcenter_(cntr), bradius_(r)
{}
