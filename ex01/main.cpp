/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitchsa <ssitchsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 20:33:36 by ssitchsa          #+#    #+#             */
/*   Updated: 2024/12/30 04:54:09 by ssitchsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook iPhone;
	std::string line;
	int i = 0;

	while(1)
	{
		iPhone.setIndex(i);
		if (std::cin.eof())
			return (1);
		std::cout << "ADD? SEARCH? EXIT?" << std::endl;
		std::getline(std::cin, line);	
		if (std::cin.eof())
		{
			std::cerr << "End of input" << std::endl;
			std::cin.clear();
			return(1);
		}
		if (line == "ADD")
		{
			if(!iPhone.add())
				i++;
		}
		else if (line == "SEARCH")
			iPhone.search();
		else if (line == "EXIT")
			return (0);
	}
	return (0);
}