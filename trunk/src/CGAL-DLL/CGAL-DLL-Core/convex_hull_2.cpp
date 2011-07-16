#include "convex_hull_2.h"
#include <CGAL/convex_hull_2.h>

convex_hull_2::convex_hull_2(void)
{
}


Points convex_hull_2::calcConvexHull(const Points &points)
{
	Points result;
	CGAL::convex_hull_2( points.begin(), points.end(), std::back_inserter(result) );
	return result;
}


convex_hull_2::~convex_hull_2(void)
{
}
