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
	contacts[i].AddContact();
	i++;
	return (1);
}

int PhoneBook::PrintContacts()
{
	contacts[0].PrintContact();
	return (0);
}

int PhoneBook::DisplayContacts()
{
	std::cout << std::endl;
	std::cout << "\033[1;47;30m---------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[1;47;30m|     Index|First Name| Last Name|  Nickname|\033[0m" << std::endl;
	std::cout << "\033[1;47;30m|-------------------------------------------|\033[0m" << std::endl;
	if (PrintContacts())
		std::cout << "\033[1;47;30m|               Phonebook Empty             |\033[0m" << std::endl;
	std::cout << "\033[1;47;30m---------------------------------------------\033[0m" << std::endl;
	std::cout << std::endl;
	return (1);
}