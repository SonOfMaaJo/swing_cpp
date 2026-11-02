/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:25:25 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 19:20:34 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) {}

Point::~Point(void) {}

Point::Point(const float x_coord, const float y_coord) : x(x_coord), y(y_coord) {}

Point::Point(const Point& other) : x(other.getX()), y(other.getY()) {}

Point&	Point::operator=(const Point& other) {
	(void)other;
	return (*this);
}

Fixed	Point::getX(void) const {
	return (x);
}

Fixed	Point::getY(void) const {
	return (y);
}
