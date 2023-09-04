#include "contact.hh"

void Contact::setdata(std::string fr_name, std::string ls_name, std::string nn_name, std::string d_secret, std::string nphone)
{
	f_name = fr_name;
	l_name = ls_name;
	n_name = nn_name;
	dark_secret = d_secret;
	phone_nb = nphone;
}

void Contact::getcontact()
{
	int i = 0;
	if (f_name.size() > 10)
	{
		while (i < 7)
			std::cout << f_name[i++];
		std::cout << "...|";
	}
	else
	{
		std::cout << f_name;
		i = f_name.size();
		while (i++ < 10)
			std::cout << " ";
		std::cout << "|";
	}
	i = 0;
	if (l_name.size() > 10)
	{
		while (i < 7)
			std::cout << l_name[i++];
		std::cout << "...|";
	}
	else
	{
		std::cout << l_name;
		i = l_name.size();
		while (i++ < 10)
			std::cout << " ";
		std::cout << "|";
	}
	i = 0;
	if (n_name.size() > 10)
	{
		while (i < 7)
			std::cout << n_name[i++];
		std::cout << "...|" << std::endl;
	}
	else
	{
		std::cout << n_name;
		i = n_name.size();
		while (i++ < 10)
			std::cout << " ";
		std::cout<< "|" << std::endl;
	}
}
