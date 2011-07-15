#include "ConvexHull.h"
#include <CGAL/convex_hull_2.h>

ConvexHull::ConvexHull(void)
{
}


Points ConvexHull::calcConvexHull(const Points &points)
{
	Points result;
	CGAL::convex_hull_2( points.begin(), points.end(), std::back_inserter(result) );
	return result;
}


ConvexHull::~ConvexHull(void)
{
}
