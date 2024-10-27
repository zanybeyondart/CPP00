#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void PrintField(std::string Entry)
{
	int len;
	int col;

	len = Entry.length();
	if (len > 10)
	{
		for (int i = 0; i != 9; i++)
		{
			std::cout << "\033[1;47;30m" << Entry[i] << "\033[0m";
		}
		std::cout << "\033[1;47;30m" << "." << "\033[0m";
		return;
	}
	col = 10 - len;
	while (col != 0)
	{
		std::cout << "\033[1;47;30m" << " " << "\033[0m";
		col--;
	}
	std::cout << "\033[1;47;30m" << Entry << "\033[0m";
}

int	HasCharacters(std::string Input)
{
	for (int i = 0 ; i < (int) Input.length(); i++)
	{
		if (isalpha(Input[i]))
			return (1);
	}
	return (0);
}

std::string InputString()
{
	std::string Input;
	while (1)
	{
		std::getline(std::cin, Input);
		for (int i = 0 ; i < (int) Input.length(); i++)
		{
			if (isalpha(Input[i]))
				return (Input);
		}
		std::cout << "            \033[1;31;40m    Invalid  Entry     \033[0m" << std::endl;
		std::cout << "                ";
	}
}

std::string InputNumber()
{
	std::string Input;
	int	cool = 1;
	while (cool)
	{
		std::getline(std::cin, Input);
		cool = 0;
		for (int i = 0 ; i < (int) Input.length(); i++)
		{
			if (!isnumber(Input[i]))
			{
			std::cout << "            \033[1;31;40m  Input Numbers Only   \033[0m" << std::endl;
			std::cout << "                ";
			cool = 1;
			break;
			}
		}
	}
	return (Input);
}

int Contact::AddContact(int i)
{
	Index = i;
	std::cout << "            \033[1;47;30m       First Name      \033[0m" << std::endl;
	std::cout << "                ";
	FirstName = InputString();
	std::cout << "            \033[1;47;30m       Last  Name      \033[0m" << std::endl;
	std::cout << "                ";
	LastName = InputString();
	std::cout << "            \033[1;47;30m       Nick  Name      \033[0m" << std::endl;
	std::cout << "                ";
	NickName = InputString();
	std::cout << "            \033[1;47;30m      Phone Number     \033[0m" << std::endl;
	std::cout << "                ";
	PhoneNumber = InputNumber();
	std::cout << "            \033[1;47;30m     Darkest Secret    \033[0m" << std::endl;
	std::cout << "                ";
	DarkestSecret = InputString();
	std::cout << std::endl;
	return (1);
}

int Contact::PrintContact()
{
	if (FirstName.length() != 0)
	{
		std::cout << "\033[1;47;30m" << "|         " << Index << "\033[0m";
		std::cout << "\033[1;47;30m" << "|" << "\033[0m";
		PrintField(FirstName);
		std::cout << "\033[1;47;30m" << "|" << "\033[0m";
		PrintField(LastName);
		std::cout << "\033[1;47;30m" << "|" << "\033[0m";
		PrintField(NickName);
		std::cout << "\033[1;47;30m" << "|" << "\033[0m" << std::endl;
	}
	else
		return (0);
	return (1);
}