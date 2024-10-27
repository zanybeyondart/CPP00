#include "main.hpp"

int main ()
{
	std::string Input;
	PhoneBook	Alpha;
	while (1)
	{
		std::cout << "\033[1;47;30m---------------------------------------------\033[0m" << std::endl;
		std::cout << "\033[1;47;30m|            The AWESOME PhoneBook          |\033[0m" << std::endl;
		std::cout << "\033[1;47;30m---------------------------------------------\033[0m" << std::endl;
		std::cout << std::endl;
		std::cout << "            \033[1;47;30m    Enter a Command    \033[0m" << std::endl;
		std::cout << "                ";
		std::getline(std::cin, Input);
		if (Input == "EXIT")
			break;
		else if (Input == "SEARCH")
			Alpha.DisplayContacts();
		else if (Input == "ADD")
			Alpha.SetupPhonebook();
		else
		{
			std::cout << std::endl;
		std::cout << "            \033[1;31;40m    Invalid Command    \033[0m" << std::endl;
		std::cout << "            \033[1;32;40m  ADD | SEARCH | EXIT  \033[0m" << std::endl;
			std::cout << std::endl;
		}
	}
	return (0);
}
