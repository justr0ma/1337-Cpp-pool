#include <iostream>
#include <map>
#include <fstream>
#include<string.h>

class BitcoinExchange
{
private:
    std::map<std::string, std::string> data_csv;
    int valid_date;
    int valid_value;
public:
    BitcoinExchange(std::string input_file);
    ~BitcoinExchange();
    void Parse_data_csv();
    void Parse_input_file(std::string input_file);
    void Check_date(std::string date);
    void check_value(std::string value);
};

