/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:55:20 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 19:04:57 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_H__
#define _POINT_H__

 #include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(const float x_coord, const float y_coord);
		Point(const Point& other);
		Point& operator=(const Point& other);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
		~Point(void);

	private:
		const Fixed	x;
		const Fixed	y;
};

#endif
