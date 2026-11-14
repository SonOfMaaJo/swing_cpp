/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 20:44:54 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/14 18:47:44 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include <string>
#include <exception>

class	Bureaucrat;

class	AForm {
	public:
		class	GradeTooLowException: public std::exception {
			private:
				std::string	_message;
			public:
				GradeTooLowException(void);
				~GradeTooLowException(void) throw();
				const char*	what(void) const throw();
		};

		class GradeTooHighException: public std::exception {
			private:
				std::string _message;
			public:
				GradeTooHighException(void);
				~GradeTooHighException(void) throw();
				const char* what(void) const throw();
		};

		AForm(std::string const name,
				int gradForSign, int gradForExc);
		~AForm(void);
		AForm(const AForm& other);
		AForm&	operator=(const AForm& other);
		std::string const	getName(void) const;
		bool				getIsSign(void) const;
		int					getGradForSign(void) const;
		int					getGradForExc(void) const;
		void				beSigned(const Bureaucrat& b);

	private:
		std::string const	_name;
		bool				_isSign;
		int					_gradForSign;
		int					_gradForExc;
};

std::ostream&	operator<<(std::ostream& os, const AForm& form);

#endif
