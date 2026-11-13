/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:48:47 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 19:42:42 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <string>
#include <exception>

class	Bureaucrat {
	private:
		std::string const&	_name;
		int					_grade;

	public:
		class	GradeTooHighException: public std::exception {
			private:
				std::string	_message;
			public:
				explicit GradeTooHighException(void);
				const char*	what() const throw();
				~GradeTooHighException(void) throw();
		};

		class	GradeTooLowException: public std::exception {
			private:
				std::string	_message;
			public:
				explicit GradeTooLowException(void);
				const char* what() const throw();
				~GradeTooLowException(void) throw();
		};

		Bureaucrat(std::string const& name, int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat&	operator=(const Bureaucrat& other);
		std::string const&	getName(void) const;
		int					getGrade(void) const;
		void				setGrade(int grade);
		void				incrementGrade(void);
		void				decrementGrade(void);
};


std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b);

#endif
