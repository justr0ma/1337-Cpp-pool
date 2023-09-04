#include "contact.hh"

class PhoneBook
{
public:
    void getdata(int i);
    void putdata(int i, std::string fr_name, std::string ls_name, std::string nn_name, std::string da_secret, std::string phone);
private:
    Contact contacts[8];
};
