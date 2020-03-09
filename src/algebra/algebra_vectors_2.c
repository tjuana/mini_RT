/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algebra_vectors_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <tjuana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:19:34 by tjuana            #+#    #+#             */
/*   Updated: 2020/03/08 20:10:31 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom.h"

double		ft_vec3_dot_product(t_vector3 *this, t_vector3 *rhs)
{
	return (this->x * rhs->x + this->y * rhs->y + this->z * rhs->z);
}

double		ft_vec3_cosinus(t_vector3 *this, t_vector3 *rhs)
{
	return (ft_vec3_dot_product(this, rhs) / (ft_vec3_magnitude(this) * \
	sqrt(ft_vec3_dot_product(rhs, rhs))));
}

/*
** **************************************************************************
**	t_vector3 ft_vec3_scalar_product(t_vector3 this, double k)
**	Function that return opposite vector.
** **************************************************************************
*/

t_vector3	ft_vec3_opposite(t_vector3 *this)
{
	return ((t_vector3){-this->x, -this->y, -this->z, this->w});
}

/*
** **************************************************************************
**	t_vector3 ft_vec3_scalar_product(t_vector3 this, double k)
**	Function that return scale vector.
** **************************************************************************
*/

t_vector3	ft_vec3_scalar_product(t_vector3 *this, double k)
{
	return ((t_vector3){this->x * k, this->y * k, this->z * k, this->w});
}

/*
** **************************************************************************
**	t_vector3 ft_vec3_normalize(t_vector3 vtc)
**	Function that normalize vector.
** **************************************************************************
*/

t_vector3	ft_vec3_normalize(t_vector3 *vtc)
{
	double		v_len;

	v_len = ft_vec3_magnitude(vtc);
	if (v_len == 1)
		return (*vtc);
	return ((t_vector3){vtc->x / v_len, vtc->y / v_len, vtc->z / v_len, 0.0});
}
