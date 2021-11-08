#include <math.h>
#include <stdbool.h>


_Bool isInArea(double x, double y)
{
	if ((x >= -1 && x <= 0 && y >= -1 && y <= 0)||(x >=0 && y >=0 && x + y <= 1))
		return true;
	else
		return false;
}