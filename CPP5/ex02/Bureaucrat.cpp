/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:48:41 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/14 18:47:12 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name) {
	std::cout << "Default Bureaucrat's constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;

}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {
	std::cout << "Default GradeTooLowException's constructor called" << std::endl;
	_message = "grade is too low";
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {
	std::cout << "Default GradeTooHighException's constructor called" << std::endl;
	_message = "grade is too High";
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {
	std::cout << "Default GradeTooHighException's destructor called" << std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
	std::cout << "Default GradeTooLowException's destructor called" << std::endl;
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw() {
	return (_message.c_str());
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
	return (_message.c_str());
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Default Bureaucrat's destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name) {
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
	_grade = other._grade;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
		_grade = other._grade;
	return (*this);
}

std::string const&	Bureaucrat::getName(void) const {
	return (_name);
}

int	Bureaucrat::getGrade(void) const {
	return (_grade);
}

void	Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

void	Bureaucrat::incrementGrade(void) {
	int	grade = _grade - 1;
	void				signAForm(AForm& form);

	if (grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
}

void	Bureaucrat::decrementGrade(void) {
	int	grade = _grade + 1;

	if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

void	Bureaucrat::signAForm(AForm& form) {
	try {
		if (form.getIsSign() == true) {
			std::cout << form.getName() << " is already sign." << std::endl;
			return ;
		}

		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << _name << " couldn't sign " << form.getName() <<  " " <<
			e.what() << std::endl;
	}
}


std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b) {
	os << b.getName() <<", bureaucrat grade " << b.getGrade();

	return (os);
}
