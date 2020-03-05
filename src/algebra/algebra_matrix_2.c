#include "doom.h"

double	ft_math_deg_to_rad(double angle_degrees)
{
	return ((angle_degrees) * M_PI / 180.0);
}

double	ft_math_rad_to_deg(double angle_radians)
{
	return ((angle_radians) * 180.0 / M_PI);
}
