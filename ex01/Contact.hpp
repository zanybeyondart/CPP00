#include <iostream>
#include <cctype>

class Contact
{
private:
	int Index;
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
public:
	int AddContact(int i);
	int PrintContact();
	Contact();
	~Contact();
};
