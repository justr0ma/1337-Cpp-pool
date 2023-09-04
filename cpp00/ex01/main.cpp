#include "phonebook.hh"

int main()
{
    PhoneBook phonebook;

    std::string in;
    std::string in_frist;
    std::string in_last;
    std::string in_nikename;
    std::string in_secret;
    std::string ph_nb;
    int i = 0;
    int index;

    while (1)
    {
        index = -1;
        std::cout << "ADD or SEARCH , EXIT : ";
        std :: cin >> in;
        if (in == "EXIT")
            exit(1);
        else if (in ==  "ADD")
        {
            std::cout << "your frist name : ";
            std :: cin >> in_frist;
            std::cout << "your last name : ";
            std :: cin >> in_last;
            std::cout << "your  nikename : ";
            std :: cin >> in_nikename;
            std::cout << "your  secret : ";
            std :: cin >> in_secret;
            std::cout << "your phone number : ";
            std :: cin >> ph_nb;

            phonebook.putdata(i, in_frist, in_last, in_nikename, in_secret, ph_nb);
            i++;
        }
        else if (in ==  "SEARCH")
        {
            while (index < 0 || index > 7 || index + 1 > i)
            {
                std::cout << "search with index : ";
                std::cin >> index;
                if (std::cin.fail())
                {
                    std::cout << "enter a numb ";
                    exit(1);
                }
                else if (index >= 0 && index < 7 && index + 1 <= i)
                    phonebook.getdata(index);
            }
        }
        if (i == 8)
            i = 0;
    }
    return 0;
}
