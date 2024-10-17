#include "PhoneBook.hpp"

int PrintContacts()
{
	return (1);
}

void	DisplayContacts()
{
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	if (PrintContacts())
		std::cout << "|               Phonebook Empty             |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
}

int main ()
{
	std::string Input;
	PhoneBook	Alpha;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|            The AWESOME PhoneBook           |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (1)
	{
		std::cout << "                Enter a Command" << std::endl;
		std::cout << "                ";
		std::cin >> Input;
		if (Input == "EXIT")
			break;
		else if (Input == "SEARCH")
			DisplayContacts();
		else
			std::cout << "Invalid Command : ADD | SEARCH | EXIT\n" << std::endl;
	}
	return (0);
}
