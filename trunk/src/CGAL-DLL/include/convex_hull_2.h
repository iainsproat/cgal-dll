#ifndef CONVEXHULL_H
#define CONVEXHULL_H

#include "common.h"
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <vector>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::Point_2 Point_2;
typedef std::vector<Point_2> Points;


class CGALDLL_API convex_hull_2
{
public:
	convex_hull_2(void);
	Points calcConvexHull(const Points &points);
	~convex_hull_2(void);
};

#endif