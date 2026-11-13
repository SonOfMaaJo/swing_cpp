/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 20:44:54 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 21:31:27 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include <string>
#include <exception>

class	Bureaucrat;

class	Form {
	public:
		class	GradeTooLowException: public std::exception {
			private:
				std::string	_message;
			public:
				GradeTooLowException(void);
				~GradeTooLowException(void);
				const char*	what(void) const throw();
		};

		class GradeTooHighException: public std::exception {
			private:
				std::string _message;
			public:
				GradeTooHighException(void);
				~GradeTooHighException(void);
				const char* what(void) const throw();
		};

		Form(std::string const name,
				int gradForSign, int gradForExc);
		~Form(void);
		Form(const Form& other);
		Form&	operator=(const Form& other);
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

#endif
