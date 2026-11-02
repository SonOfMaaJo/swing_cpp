/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:05:55 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/02 18:54:19 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

static void test(const char* name, Point const& p, bool expected)
{
    Point a(0.0f, 0.0f), b(10.0f, 0.0f), c(0.0f, 10.0f);
    bool r = bsp(a, b, c, p);
    std::cout << (r == expected ? "[OK] " : "[KO] ") << name << std::endl;
}

int main(void)
{
    test("dedans (1, 1)",              Point(1.0f, 1.0f),        true);
    test("dehors (6, 6)",              Point(6.0f, 6.0f),        false);
    test("sommet (0, 0)",              Point(0.0f, 0.0f),        false);
    test("arete (5, 0)",               Point(5.0f, 0.0f),        false);
    test("hypotenuse (5, 5)",          Point(5.0f, 5.0f),        false);
    test("juste dedans (5 - eps, 5)",  Point(4.99609375f, 5.0f), true);
    test("juste dehors (5 + eps, 5)",  Point(5.00390625f, 5.0f), false);
    return (0);
}

