#ifndef CH_GRAHAM_ANDREW_H
#define CH_GRAHAM_ANDREW_H

#include "common.h"

#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>

#include <vector>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::Point_2 Point_2;
typedef std::vector<Point_2> Points;
typedef std::back_insert_iterator<Points> OutputIterator;

namespace CGAL_DLL
{
	CGALDLL_API OutputIterator ch_graham_andrew(Points::iterator first, Points::iterator last,  OutputIterator result);
	CGALDLL_API std::ostream_iterator< Point_2 > ch_graham_andrew(std::istream_iterator< Point_2 > first, std::istream_iterator< Point_2 > last, std::ostream_iterator< Point_2 > result);
}
#endif //CH_GRAHAM_ANDREW