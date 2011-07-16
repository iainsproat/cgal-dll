#include "../include/convex_hull_2.h"
#include <CGAL/convex_hull_2.h>

template <class ForwardIterator, class OutputIterator>
CGALDLL_API OutputIterator  CGAL_DLL::convex_hull_2 (ForwardIterator first, ForwardIterator last, 
              OutputIterator  result)
{
	return CGAL::convex_hull_2<ForwardIterator, OutputIterator> ( first, last, result);
}
