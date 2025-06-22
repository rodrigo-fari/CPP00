/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:35:06 by rde-fari          #+#    #+#             */
/*   Updated: 2025/06/22 18:47:46 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	_count = 0;
	_nextIndex = 0;
}

static int cppAtoi(const std::string& str) {
	std::istringstream iss(str);
	int num = 0;
	iss >> num;
	return (num);
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

void	PhoneBook::searchContact() {
	if (_count == 0) {
		std::cout << "PhoneBook is empty!" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "┃"
			<< std::setw(10) << "First Name" << "┃"
			<< std::setw(10) << "Last Name" << "┃"
			<< std::setw(10) << "Nickname" << std::endl;
	for( int i = 0; i < _count; i++) {
		_contacts[i].displayShort(i);
	}
	std::string input;
	std::cout << "Enter index to view: ";
	std::getline(std::cin, input);
	try {
		int	index = cppAtoi(input);
		if (index < 0 || index >= _count) {
			std::cout << "Invaid index!" << std::endl;
			return ;
		}
		_contacts[index].displayFull();
	} catch (const std::exception &e) {
		std::cout << "Invaid index!" << std::endl;
	}
}
