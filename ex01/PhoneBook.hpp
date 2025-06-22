/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:35:09 by rde-fari          #+#    #+#             */
/*   Updated: 2025/06/22 19:11:01 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include <limits>
# include <exception>
# include <cctype>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact _contacts[8];
		int		_count;
		int		_nextIndex;
	public:
		PhoneBook();
		void	addContact();
		void	searchContact();
};

#endif