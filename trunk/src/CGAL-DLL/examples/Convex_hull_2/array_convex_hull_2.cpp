#include <convex_hull_2.h>
#include <CGAL/convex_hull_2.h>

int main(){
	Point_2 points[5] = { Point_2(0,0), Point_2(10,0), Point_2(10,10), Point_2(6,5), Point_2(4,1) };
    Point_2 result[5];

    Point_2 *ptr = CGAL::convex_hull_2( points, points+5, result );
    std::cout <<  ptr - result << " points on the convex hull" << std::endl;

  return 0;
}
