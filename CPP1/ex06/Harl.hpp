/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 23:23:02 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/10/28 23:23:23 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_H__
#define _HARL_H__

#include <string>

class Harl {

public :
	void	complain(std::string level);

private :
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif
