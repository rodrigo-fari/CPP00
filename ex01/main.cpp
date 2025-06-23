/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:40:40 by rde-fari          #+#    #+#             */
/*   Updated: 2025/06/23 01:09:33 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void wait_seconds(int sec) {
	time_t start = time(NULL);
	while (time(NULL) - start < sec)
		;
}

int main() {
	std::cout << "TA FALTANDO FIFO";
	wait_seconds(10);
	PhoneBook phoneBook;
	std::string command;

	while (true) {
		std::cout << CLEAR_SCREEN;
		std::cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
		std::cout << "┃      P   H   O   N   E   B   O   O   K     ┃" << std::endl;
		std::cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;
		std::cout << std::endl;
		std::cout << "[ 1 ] Add contact." << std::endl;
		std::cout << std::endl;
		std::cout << "[ 2 ] Search contact." << std::endl;
		std::cout << std::endl;
		std::cout << "[ 3 ] Exit PhoneBook." << std::endl;
		std::cout << std::endl;
		std::cout << "[Command]: ";
		if (!std::getline(std::cin, command)) {
			std::cout << CLEAR_SCREEN;
			std::cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
			std::cout << "┃      P   H   O   N   E   B   O   O   K     ┃" << std::endl;
			std::cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;
			std::cout << std::endl;
			std::cout << "( ͠° ͟ʖ ͡°) Do you like music? Listen to this:" << std::endl;
			wait_seconds(3);
			std::cout << std::endl;
			std::cout << "If the program you want to break," << std::endl;
			wait_seconds(3);
			std::cout << "1 minute you will have to wait!" << std::endl;
			std::cout << std::endl;
			wait_seconds(5);
			std::cout << CLEAR_SCREEN;
			std::cout << "( ͠° ͟ʖ ͡°)..." << std::endl;
			int i = 60;
			while (i != 0) {
				std::cout << CLEAR_SCREEN;
				std::cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << std::endl;
				std::cout << "┃      P   H   O   N   E   B   O   O   K     ┃" << std::endl;
				std::cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << std::endl;
				std::cout << std::endl;
				std::cout << "( ͠° ͟ʖ ͡°)..."<< i << std::endl;
				i--;
				wait_seconds(1);
			}
			break;
		}
		if (command == "1" || command == "add" || command == "ADD")
			phoneBook.addContact();
		else if (command == "2" || command == "search" || command ==  "SEARCH")
			phoneBook.searchContact();
		else if (command == "3" || command == "exit" || command == "EXIT")
			break;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	std::cout << CLEAR_SCREEN;
	return 0;
}
