#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "coordin.h"

using namespace std;

polar rect_to_polar(rect xypos)
{
	polar answer;

	answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}

void show_polar(polar dapos)
{
	const double Red_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Red_to_deg;
	cout << "degrees\n";
}