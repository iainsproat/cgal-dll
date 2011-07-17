#include "../include/ch_graham_andrew.h"
#include <CGAL/ch_graham_andrew.h>

CGALDLL_API OutputIterator CGAL_DLL::ch_graham_andrew(Points::iterator first, Points::iterator last, 
		OutputIterator result)
{
	return CGAL::ch_graham_andrew( first, last, result );
}

CGALDLL_API std::ostream_iterator< Point_2 > CGAL_DLL::ch_graham_andrew(std::istream_iterator< Point_2 > first, std::istream_iterator< Point_2 > last, 
	std::ostream_iterator< Point_2 > result)
{
	return CGAL::ch_graham_andrew( first, last, result );
}
