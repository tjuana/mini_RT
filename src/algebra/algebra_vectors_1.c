/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algebra_vectors_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:19:55 by tjuana            #+#    #+#             */
/*   Updated: 2020/03/07 15:41:43 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom.h"

t_vector3	ft_vec3_create(t_vector3 *orig, t_vector3 *dest)
{
	if (orig == NULL)
		return ((t_vector3){dest->x, dest->y, dest->z, 0.0});
	return ((t_vector3){dest->x - orig->x, dest->y - orig->y, dest->z - \
						orig->z, 0.0});
}

double		ft_vec3_magnitude(t_vector3 *this)
{
	return ((double)(sqrt(ft_vec3_dot_product(this, this))));
}

t_vector3	ft_vec3_add(t_vector3 *this, t_vector3 *rhs)
{
	return ((t_vector3){this->x + rhs->x, this->y + rhs->y, this->z + \
							rhs->z, 0.0});
}

t_vector3	ft_vec3_sub(t_vector3 *this, t_vector3 *rhs)
{
	return ((t_vector3){this->x - rhs->x, this->y - rhs->y, this->z - \
							rhs->z, 0.0});
}

t_vector3	ft_vec3_cross_product(t_vector3 *this, t_vector3 *rhs)
{
	return ((t_vector3){this->y * rhs->z - this->z * rhs->y, this->z * \
	rhs->x - this->x * rhs->z, this->x * rhs->y - this->y * rhs->x, 0.0});
}
