#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input_file)
{
    Parse_data_csv();
    Parse_input_file(input_file);
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::Parse_data_csv()
{
    std::string line;
    std::ifstream myfile ("data.csv");
    if (myfile.is_open())
    {
        while (!myfile.eof() )
        {
            std::getline (myfile,line);
            size_t find = line.find(",");
            if (find < line.size())
                data_csv.insert(std::pair<std::string, std::string>(line.substr(0, find), line.substr(find + 1)));
        }
        myfile.close();
    }
}

void BitcoinExchange::Parse_input_file(std::string input_file)
{
    std::string line;
    std::ifstream myfile (input_file);
    if (myfile.is_open())
    {
        std::getline (myfile, line);
        while (!myfile.eof() )
        {
            std::getline (myfile, line);
            size_t find = line.find(" | ");
            if (find < line.size())
            {
                Check_date(line.substr(0, find));
                check_value(line.substr(find + 3));
                if (valid_date && valid_value)
                {
                    std::map<std::string, std::string>::iterator itlow;
                    itlow = data_csv.upper_bound(line.substr(0, find));
                    //std::cout << itlow->first << std::endl;
                    if (itlow != data_csv.begin())
                        itlow--;
                    std::cout << line.substr(0, find) << " => ";
                   std::cout << line.substr(find + 3) << " = " ;
                   std::cout << (std::stof(line.substr(find + 3)) * std::stof(itlow->second)) << std::endl; 
                }
            }
            else
                std::cout << "Error: bad input => " << line << std::endl;
        }
        myfile.close();
    }
}

void BitcoinExchange::Check_date(std::string date)
{
    int i = 0;
    valid_date = 0;
    char *pch = strtok((char *)date.c_str(), "-");
    while (pch != NULL)
    {
        if (i == 0)//Year
        {
            int j = 0;
            while (pch[j])
            {
                if (!isdigit(pch[j]))
                {
                    std::cout << "Error: bad input => " << date << std::endl;
                    return;
                }
                j++;
            }
            if (atoi(pch) < 2009 || atoi(pch) > 2024)
            {
                std::cout << "Error: bad input => " << date << std::endl;
                return;
            }
        }
        else if (i == 1)//Month
        {
            int j = 0;
            while (pch[j])
            {
                if (!isdigit(pch[j]))
                {
                    std::cout << "Error: bad input => " << date << std::endl;
                    return;
                }
                j++;
            }
            if (atoi(pch) <= 0 || atoi(pch) > 12)
            {
                std::cout << "Error: bad input => " << date << std::endl;
                return;
            }
        }
        else if (i == 2)//day
        {
            int j = 0;
            while (pch[j])
            {
                if (!isdigit(pch[j]))
                {
                    std::cout << "Error: bad input => " << date << std::endl;
                    return;
                }
                j++;
            }
            if (atoi(pch) <= 0 || atoi(pch) > 31)
            {
                std::cout << "Error: bad input => " << date << std::endl;
                return;
            }
        }
        pch = strtok (NULL, "-");
        i++;
    }
    if (i != 3)
    {
        std::cout << "Error: bad input => " << pch << std::endl;
        return;
    }
    valid_date = 1;
}

void BitcoinExchange::check_value(std::string value)
{
    int j = 0;
    valid_value = 0;
    int dot = 0;
    if (value[j] == '-')
        j++;
    while (value[j])
    {
        if (value[j] == '.')
        {
            dot += 1;
            j++;
        }
        if (!isdigit(value[j]))
        {
            std::cout << "Error: bad input => " << value << std::endl;
            return;
        }
        j++;
    }
    if (atoi(value.c_str()) <= 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return;
    }
    if (atoi(value.c_str()) > 1000 || (dot != 1 && dot != 0))
    {
        std::cout << "Error: too large a number." << std::endl;
        return;
    }
    valid_value = 1;
}