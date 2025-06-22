/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:35:06 by rde-fari          #+#    #+#             */
/*   Updated: 2025/06/22 17:27:36 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	_count = 0;
	_nextIndex = 0;
}

void	PhoneBook::addContact() {
	Contact	newContact;
	newContact.setInfo();
	if (newContact.isEmpty()) {
		std::cout << "All fields are required!" << std::endl;
		return ;
	}
	_contacts[_nextIndex] = newContact;
	_nextIndex = (_nextIndex + 1) % 8;
	if (_count < 8)
		_count++;
	std::cout << "Contact added!" << std::endl;
}

