#ifndef CONVEXHULL_H
#define CONVEXHULL_H

#include "common.h"

namespace CGAL_DLL
{
	template <class ForwardIterator, class OutputIterator>
	CGALDLL_API OutputIterator convex_hull_2(ForwardIterator first, ForwardIterator last, 
		OutputIterator  result);

}

#endif //CONVEXHULL_H