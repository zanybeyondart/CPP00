#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

int PhoneBook::SetupPhonebook()
{
	static int i;
	if (i == 7)
		i = 0;
	contacts[i].AddContact(i + 1);
	i++;
	return (1);
}

int PhoneBook::RequestContact()
{
	int i;
	while (1)
	{
		std::cout << "            \033[1;47;30m      Enter Index      \033[0m" << std::endl;
		std::cout << "                ";
		std::cin >> i;
		// if (contacts[i].PrintContactFull())
		// 	break;
		std::cout << "            \033[1;31;40m    Invalid  Entry     \033[0m" << std::endl;
	}
}

int PhoneBook::PrintContacts()
{
	if (contacts[0].PrintContact())
	{
		contacts[1].PrintContact();
		contacts[2].PrintContact();
		contacts[3].PrintContact();
		contacts[4].PrintContact();
		contacts[5].PrintContact();
		contacts[6].PrintContact();
		contacts[7].PrintContact();
		std::cout << "\033[1;47;30m---------------------------------------------\033[0m" << std::endl;
		RequestContact();
		return (0);
	}
	else 
		return (1);
}

int PhoneBook::DisplayContacts()
{
	std::cout << std::endl;
	std::cout << "\033[1;47;30m---------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;47;30m|     Index|First Name| Last Name|  Nickname|\033[0m" << std::endl;
	std::cout << "\033[1;47;30m|-------------------------------------------|\033[0m" << std::endl;
	if (PrintContacts())
	{
		std::cout << "\033[1;47;30m|               Phonebook Empty             |\033[0m" << std::endl;
		std::cout << "\033[1;47;30m---------------------------------------------\033[0m" << std::endl;
	}
	std::cout << std::endl;
	return (1);
}