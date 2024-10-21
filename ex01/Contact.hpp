#include <iostream>

class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
public:
	int AddContact();
	int PrintContact();
	Contact();
	~Contact();
};
