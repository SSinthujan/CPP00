/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitchsa <ssitchsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 20:36:32 by ssitchsa          #+#    #+#             */
/*   Updated: 2024/12/30 04:37:45 by ssitchsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string name){_firstName = name;}
void Contact::setLastName(std::string lastname){_lastName = lastname;}
void Contact::setNickName(std::string nickname){_nickName = nickname;}
void Contact::setPhoneNumber(std::string phonenumber){_phoneNumber = phonenumber;}
void Contact::setDarkestSecret(std::string secret){_darkestSecret = secret;}

std::string Contact::getFirstName(){return (_firstName);}
std::string Contact::getLastName(){return (_lastName);}
std::string Contact::getNickName(){return (_nickName);}
std::string Contact::getPhoneNumber(){return (_phoneNumber);}
std::string Contact::getDarkestSecret(){return (_darkestSecret);}

void Contact::toutnu(){
	std::cout << "First Name : " << _firstName << std::endl;
	std::cout << "Last Name : " << _lastName << std::endl;
	std::cout << "Nickname : " << _nickName << std::endl;
	std::cout << "Phone Number : " << _phoneNumber << std::endl;
	std::cout << "My DaRkEsT sEcReT : " << _darkestSecret << std::endl;
}

std::string formatString(const std::string &str)
{
    if (str.size() > 10){
    	return str.substr(0, 9) + ".";
	}
	return (str);
}

void Contact::display(int index){
	std::cout << std::setw(10) << index + 1  << "|";
	std::cout << std::setw(10) << formatString(_firstName) << '|';
	std::cout << std::setw(10) << formatString(_lastName) << '|';
	std::cout << std::setw(10) << formatString(_nickName) << '|' << std::endl;
}