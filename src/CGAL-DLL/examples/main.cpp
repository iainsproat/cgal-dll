#include <convex_hull_2.h>
#include <CGAL/convex_hull_2.h>

void vector_convex_hull_2(){
  Points points, result;

  points.push_back(Point_2(0,0));
  points.push_back(Point_2(10,0));
  points.push_back(Point_2(10,10));
  points.push_back(Point_2(6,5));
  points.push_back(Point_2(4,1));

  PointsBackIterator resultIterator = std::back_inserter(result);

  CGAL_DLL::convex_hull_2( points.begin(), points.end(), resultIterator);
  std::cout << result.size() << " points on the convex hull from a vector" << std::endl;
}

void array_convex_hull_2(){
	Point_2 points[5] = { Point_2(0,0), Point_2(10,0), Point_2(10,10), Point_2(6,5), Point_2(4,1) };
    Point_2 result[5];

    Point_2 *ptr = CGAL::convex_hull_2( points, points+5, result );
    std::cout <<  ptr - result << " points on the convex hull from an array" << std::endl;

}

int main()
{
  vector_convex_hull_2();
  array_convex_hull_2();
  return 0;
}
