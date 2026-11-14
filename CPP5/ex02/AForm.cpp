/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 20:44:44 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/14 18:47:48 by vnaoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string const name, int gradForSign, int gradForExc):
	_name(name) {
	std::cout << "Default AForm's constructor called" << std::endl;
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

AForm::GradeTooLowException::GradeTooLowException(void) {
	std::cout << "Default GradeTooLowException's constructor called" << std::endl;
	_message = "grade is too low";
}

AForm::GradeTooHighException::GradeTooHighException(void) {
	std::cout << "Default GradeTooHighException's constructor called" << std::endl;
	_message = "grade is too High";
}

AForm::GradeTooHighException::~GradeTooHighException(void) throw() {
	std::cout << "Default GradeTooHighException's destructor called" << std::endl;
}

AForm::GradeTooLowException::~GradeTooLowException(void) throw() {
	std::cout << "Default GradeTooLowException's destructor called" << std::endl;
}

const char*	AForm::GradeTooLowException::what(void) const throw() {
	return (_message.c_str());
}

const char* AForm::GradeTooHighException::what(void) const throw() {
	return (_message.c_str());
}

AForm::~AForm(void) {
	std::cout << "Default AForm's destructor called" << std::endl;
}

AForm::AForm(const AForm& other): _name(other._name) {
	std::cout << "Copy form's constructor called" << std::endl;
	_isSign = other._isSign;
	_gradForSign = other._gradForSign;
	_gradForExc = other._gradForExc;
}

AForm&	AForm::operator=(const AForm& other) {
	if (this != &other) {
		_isSign = other._isSign;
		_gradForSign = other._gradForSign;
		_gradForExc = other._gradForExc;
	}

	return (*this);
		Bureaucrat john("john", 150);
}

std::string const	AForm::getName(void) const {
	return (_name);
}

bool	AForm::getIsSign(void) const {
	return (_isSign);
}

int	AForm::getGradForSign(void) const {
	return (_gradForSign);
}

int	AForm::getGradForExc(void) const {
	return (_gradForExc);
}

void	AForm::beSigned(const Bureaucrat& b) {
	if (b.getGrade() <= _gradForSign)
		_isSign = true;
	else
		throw GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& os, const AForm& form) {
	os << form.getName();
	if (form.getIsSign())
		os << ", is signed";
	else
		os << ", is not signed";
	os << ", require grade " << form.getGradForSign() << " to sign it and grade "
	<< form.getGradForExc() << " to execute it";
	return (os);
}
