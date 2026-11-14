/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 20:44:44 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/14 18:28:50 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const name, int gradForSign, int gradForExc):
	_name(name) {
	std::cout << "Default Form's constructor called" << std::endl;
	if (gradForSign < 1 || gradForExc < 1)
		throw GradeTooHighException();
	else if (gradForSign > 150 || gradForExc > 150)
		throw GradeTooLowException();
	else {
		_isSign = false;
		_gradForSign = gradForSign;
		_gradForExc = gradForExc;
	}
}

Form::GradeTooLowException::GradeTooLowException(void) {
	std::cout << "Default GradeTooLowException's constructor called" << std::endl;
	_message = "grade is too low";
}

Form::GradeTooHighException::GradeTooHighException(void) {
	std::cout << "Default GradeTooHighException's constructor called" << std::endl;
	_message = "grade is too High";
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {
	std::cout << "Default GradeTooHighException's destructor called" << std::endl;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {
	std::cout << "Default GradeTooLowException's destructor called" << std::endl;
}

const char*	Form::GradeTooLowException::what(void) const throw() {
	return (_message.c_str());
}

const char* Form::GradeTooHighException::what(void) const throw() {
	return (_message.c_str());
}

Form::~Form(void) {
	std::cout << "Default Form's destructor called" << std::endl;
}

Form::Form(const Form& other): _name(other._name) {
	std::cout << "Copy form's constructor called" << std::endl;
	_isSign = other._isSign;
	_gradForSign = other._gradForSign;
	_gradForExc = other._gradForExc;
}

Form&	Form::operator=(const Form& other) {
	if (this != &other) {
		_isSign = other._isSign;
		_gradForSign = other._gradForSign;
		_gradForExc = other._gradForExc;
	}

	return (*this);
		Bureaucrat john("john", 150);
}

std::string const	Form::getName(void) const {
	return (_name);
}

bool	Form::getIsSign(void) const {
	return (_isSign);
}

int	Form::getGradForSign(void) const {
	return (_gradForSign);
}

int	Form::getGradForExc(void) const {
	return (_gradForExc);
}

void	Form::beSigned(const Bureaucrat& b) {
	if (b.getGrade() <= _gradForSign)
		_isSign = true;
	else
		throw GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& os, const Form& form) {
	os << form.getName();
	if (form.getIsSign())
		os << ", is signed";
	else
		os << ", is not signed";
	os << ", require grade " << form.getGradForSign() << " to sign it and grade "
	<< form.getGradForExc() << " to execute it";
	return (os);
}
