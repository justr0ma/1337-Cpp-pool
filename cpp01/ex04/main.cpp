#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        std::fstream file;
        std::string filename = argv[1];
        file.open(argv[1], std::ios::in);
        if (file.is_open())
        {
            std::fstream cpfile;
            cpfile.open(filename.append(".replace"), std::ios::out);
            if (cpfile.is_open())
            {
                std::string line;
                while (getline(file, line))
                {
                    int i = 0;
                    while (line[i])
                    {
                        if (line[i] == argv[2][0])
                        {
                            int a = 0;
                            while (line[i + a] == argv[2][a])
                                a++;
                            if (argv[2][a] == '\0')
                            {
                                cpfile << argv[3];
                                i += a;
                            }
                        }
                        cpfile << line[i];
                        i++;
                    }
                    cpfile << std::endl;
                }
            }
        }
    }
    return (0);
}