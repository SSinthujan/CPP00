#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		void setFirstName(std::string);
		void setLastName(std::string);
		void setNickName(std::string);
		void setDarkestSecret(std::string);
		void setPhoneNumber(std::string);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
		void display(int index);
		void toutnu();
};

#endif