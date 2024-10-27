#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
public:
	int SetupPhonebook();
	int DisplayContacts();
	int PrintContacts();
	int RequestContact();
	PhoneBook();
	~PhoneBook();
};
