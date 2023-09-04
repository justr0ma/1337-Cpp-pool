#include <iostream>

class Brain
{
public:
    std::string ideas[100];
public:
    //void setidais(std::string idea);
    //std::string getidais(int key);
    Brain();
    Brain(Brain &brain);
    Brain& operator=(Brain &brain);
    ~Brain();
};
