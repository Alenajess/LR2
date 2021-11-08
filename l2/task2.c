#include <math.h>

double f(double x)
{
	return x <= 9 ? 4 * cos(2 * x) + 9 : -cos(x) / (x - 9);
}
