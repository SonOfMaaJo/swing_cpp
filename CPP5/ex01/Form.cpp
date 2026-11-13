/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaoussi <vnaoussi@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 20:44:44 by vnaoussi          #+#    #+#             */
/*   Updated: 2026/11/13 21:32:05 by vnaoussi         ###   ########.fr       */
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
