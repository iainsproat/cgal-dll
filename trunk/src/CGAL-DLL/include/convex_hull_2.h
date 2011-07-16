#ifndef CONVEXHULL_H
#define CONVEXHULL_H

#include "common.h"

#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>

#include <vector>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::Point_2 Point_2;
typedef std::vector<Point_2> Points;
typedef std::back_insert_iterator<Points> PointsBackIterator;

namespace CGAL_DLL
{
	CGALDLL_API PointsBackIterator convex_hull_2(Points::iterator first, Points::iterator last,  PointsBackIterator result);

}

#endif //CONVEXHULL_H