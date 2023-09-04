#include <iostream>

class Weapon
{
public:
    Weapon();
    Weapon(std::string str);
    const std::string& getType();
    void setType(std::string str);
private:
    std::string type;
};
