/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:34:54 by rde-fari          #+#    #+#             */
/*   Updated: 2025/06/22 17:22:05 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static	std::string formatField(const std::string &field) {
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	return (std::string(10 - field.length(), ' ') + field);
}

void	Contact::setInfo() {
	std::cout << "First name: ";
	std::getline(std::cin, _firstName);
	std::cout << "Last name: ";
	std::getline(std::cin, _lastName);
	std::cout << "Nickname :";
	std::getline(std::cin, _nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, _phoneNumber);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, _darkestSecret);
}

void	Contact::displayFull() const {
	std::cout << "First name: " << _firstName << std::endl;
	std::cout << "Last name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phoneNumber << std::endl;
	std::cout << "Darkest secret: " << _darkestSecret << std::endl;
}

void	Contact::displayShort(int index) const {
	std::cout << std::setw(10) << formatField(_firstName)
		<< formatField(_lastName)
		<< formatField(_nickname)
		<< formatField(_phoneNumber)
		<< formatField(_darkestSecret) << std::endl;
		
}

bool	Contact::isEmpty() const {
	return (_firstName.empty()
		|| _lastName.empty()
		|| _nickname.empty()
		|| _phoneNumber.empty()
		|| _darkestSecret.empty());
}
