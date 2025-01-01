#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

	private:
		Contact _contact[8];
		int _index;

	public:
		void setIndex(int i);
		int	 getIndex();
		int  add();
		void search();
};

#endif