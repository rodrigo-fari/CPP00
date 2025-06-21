/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:40:40 by rde-fari          #+#    #+#             */
/*   Updated: 2025/06/20 21:09:59 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(int ac, char **av) {
	(void)ac;
	(void)av;
	int age = 0;

	while (true){
		std::cout << "Type ur age: ";
		std::cin >> age;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "Please type a valid age!" << std::endl;
			continue;
		} else {
			break;
		}
	}
	std::cout << "Ur agr is : " << age << std::endl;
	return (0);
}