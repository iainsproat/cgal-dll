#include <conio.h>
#include <convex_hull_2.h>

int main()
{
	Points points, result;
	points.push_back(Point_2(0,0));
	points.push_back(Point_2(10,0));
	points.push_back(Point_2(10,10));
	points.push_back(Point_2(6,5));
	points.push_back(Point_2(4,1));

	convex_hull_2 ch;
	result = ch.calcConvexHull(points);
	std::cout << result.size() << " points on the convex hull" << std::endl;
	_getch();
	return 0;
}