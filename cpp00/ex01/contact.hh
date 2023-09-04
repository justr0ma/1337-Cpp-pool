#include <iostream>
#include <string>

class Contact
{
public:
    void getcontact();
    void setdata(std::string fr_name, std::string ls_name, std::string nn_name, std::string dark_secret, std::string nphone);

private:
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string dark_secret;
    std::string phone_nb;
};
