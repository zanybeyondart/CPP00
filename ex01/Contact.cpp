#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

int Contact::AddContact()
{
	std::cout << "            \033[1;47;30m       First Name      \033[0m" << std::endl;
	std::cout << "                ";
	std::cin >> FirstName;
	std::cout << "            \033[1;47;30m       Last  Name      \033[0m" << std::endl;
	std::cout << "                ";
	std::cin >> LastName;
	std::cout << "            \033[1;47;30m       Nick  Name      \033[0m" << std::endl;
	std::cout << "                ";
	std::cin >> NickName;
	std::cout << "            \033[1;47;30m      Phone Number     \033[0m" << std::endl;
	std::cout << "                ";
	std::cin >> PhoneNumber;
	std::cout << "            \033[1;47;30m     Darkest Secret    \033[0m" << std::endl;
	std::cout << "                ";
	std::cin >> DarkestSecret;
	std::cout << std::endl;
	return (1);
}

int Contact::PrintContact()
{
	// std::cout << "\033[1;47;30m" << FirstName << "\033[0m" << std::endl;
	return (1);
}