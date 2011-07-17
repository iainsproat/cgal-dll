#include <convex_hull_2.h>
#include <CGAL/convex_hull_2.h>

int main(){
  Points points, result;

  points.push_back(Point_2(0,0));
  points.push_back(Point_2(10,0));
  points.push_back(Point_2(10,10));
  points.push_back(Point_2(6,5));
  points.push_back(Point_2(4,1));

  PointsBackIterator resultIterator = std::back_inserter(result);

  CGAL_DLL::convex_hull_2( points.begin(), points.end(), resultIterator);
  std::cout << result.size() << " points on the convex hull" << std::endl;
  return 0;
}
