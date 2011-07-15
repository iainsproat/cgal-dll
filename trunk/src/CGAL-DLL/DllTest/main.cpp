#include <conio.h>
#include <ConvexHull.h>

int main()
{
	Points points, result;
	points.push_back(Point_2(0,0));
	points.push_back(Point_2(10,0));
	points.push_back(Point_2(10,10));
	points.push_back(Point_2(6,5));
	points.push_back(Point_2(4,1));

	ConvexHull ch;
	result = ch.calcConvexHull(points);
	std::cout << result.size() << " points on the convex hull" << std::endl;
	getch();
	return 0;
}