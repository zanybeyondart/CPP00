#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
private:
	Contact	contacts[8];
public:
	int AddContact();
	PhoneBook();
	~PhoneBook();
};
