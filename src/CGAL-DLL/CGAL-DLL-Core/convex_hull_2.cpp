#include "../include/convex_hull_2.h"
#include <CGAL/convex_hull_2.h>

CGALDLL_API OutputIterator CGAL_DLL::convex_hull_2(Points::iterator first, Points::iterator last, 
		OutputIterator result)
{
	return CGAL::convex_hull_2( first, last, result);
}
