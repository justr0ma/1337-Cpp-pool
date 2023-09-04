#include "phonebook.hh"

void PhoneBook::putdata(int i, std::string fr_name, std::string ls_name, std::string nn_name, std::string da_secret, std::string phone)
{
    contacts[i].setdata(fr_name, ls_name, nn_name, da_secret, phone);
}

void PhoneBook::getdata(int i)
{
    std::cout << "    " << i << "   |";
    contacts[i].getcontact();
}
