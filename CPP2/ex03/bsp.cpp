/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:03:10 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 18:41:23 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1 = (b.getX().toFloat() - a.getX().toFloat()) * (point.getY().toFloat()
			- a.getY().toFloat()) - (b.getY().toFloat() - a.getY().toFloat()) * (point.getX().toFloat()
			- a.getX().toFloat());

	float	d2 = (c.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat()
			- b.getY().toFloat()) - (c.getY().toFloat() - b.getY().toFloat()) * (point.getX().toFloat()
			- b.getX().toFloat());

	float	d3 = (a.getX().toFloat() - c.getX().toFloat()) * (point.getY().toFloat()
			- c.getY().toFloat()) - (a.getY().toFloat() - c.getY().toFloat()) * (point.getX().toFloat()
			- c.getX().toFloat());

	bool	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	bool	has_zero = (d1 == 0) || (d2 == 0) || (d3 == 0);

	if (has_zero)
		return (false);

	return !(has_neg && has_pos);
}
