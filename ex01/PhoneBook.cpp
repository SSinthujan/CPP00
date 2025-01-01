#include "PhoneBook.hpp"

void PhoneBook::setIndex(int i){_index = i;}
int PhoneBook::getIndex(){return (_index);}

int checkTab(const std::string &str) {
    for (std::size_t i = 0; i < str.size(); ++i) {
        if (str[i] == '\t') {
            return (1);
        }
    }
    return (0);
}

int PhoneBook::add(){
	
	Contact contact;
	std::string line;
	int i = _index % 8;

	std::cout << "First Name ?" << std::endl;
	std::getline(std::cin, line);
	if (std::cin.eof())
	{
		std::cerr << "End of input" << std::endl;
		std::cin.clear();
		return(1);
	}
	if(!line.size() || checkTab(line))
	{
		std::cout << "Error!" << std::endl;
		return (1);
	}
	contact.setFirstName(line);
	std::cout << "Last Name ?" << std::endl;
	std::getline(std::cin, line);
	if (std::cin.eof())
	{
		std::cerr << "End of input" << std::endl;
		std::cin.clear();
		return(1);
	}
	if(!line.size() || checkTab(line))
	{
		std::cout << "Error!" << std::endl;
		return (1);
	}
	contact.setLastName(line);
	std::cout << "Nickname ?" << std::endl;
	std::getline(std::cin, line);
	if (std::cin.eof())
	{
		std::cerr << "End of input" << std::endl;
		std::cin.clear();
		return(1);
	}
	if(!line.size() || checkTab(line))
	{
		std::cout << "Error!" << std::endl;
		return (1);
	}
	contact.setNickName(line);
	std::cout << "Phone Number ?" << std::endl;
	std::getline(std::cin, line);
	if (std::cin.eof())
	{
		std::cerr << "End of input" << std::endl;
		std::cin.clear();
		return(1);
	}
	if(!line.size() || checkTab(line))
	{
		std::cout << "Error!" << std::endl;
		return (1);
	}
	contact.setPhoneNumber(line);
	std::cout << "Your Darkest Secret ?" << std::endl;
	std::getline(std::cin, line);
	if (std::cin.eof())
	{
		std::cerr << "End of input" << std::endl;
		std::cin.clear();
		return(1);
	}
	if(!line.size() || checkTab(line))
	{
		std::cout << "Error!" << std::endl;
		return (1);
	}
	contact.setDarkestSecret(line);

	_contact[i] = contact;
	return (0);
}

void contactlist(Contact contacts[8], int index){

	for (int i = 0; i < 8; i++)
	{
		if (i >= index)
			return;
		contacts[i].display(i);
	}
}

int proutoi(std::string index){
	char c;

	if (index.size() != 1)
		return (0);
	c = index[0];
	if (c < '1' || c > '8')
		return (0);
	return (c - '0');
}

void PhoneBook::search(){

	std::string line;
	int i;

	if (_index == 0)
	{
		std::cout << "T'as pas d'amis (loser)" << std::endl;
		return ;
	}
	contactlist(_contact, _index);
	std::getline(std::cin, line);
	if (std::cin.eof())
	{
		std::cerr << "End of input" << std::endl;
		std::cin.clear();
		return ;
	}
	i = proutoi(line);
	if (!i || i > _index)
	{
		std::cout << "Index incorrect" << std::endl;
		return ;
	}
	std::cout << "Index : " << i << std::endl;
	_contact[i - 1].toutnu();
}