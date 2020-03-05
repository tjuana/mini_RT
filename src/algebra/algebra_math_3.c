#include "doom.h"

/*
** **************************************************************************
**	t_vector3 ft_math_sum_vectors_xy(t_vector3 v0, t_vector3 v1)
** **************************************************************************
*/

t_vector3	ft_math_sum_vectors_xy(t_vector3 v0, t_vector3 v1)
{
	t_vector3 result;

	result.x = v0.x + v1.x;
	result.y = v0.y + v1.y;
	return (result);
}
