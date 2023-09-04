#include <iostream>
#include <vector>
#include <time.h>
#include <deque>

class PmergeMe
{
private:
    std::vector<int> vec;
    std::deque<int> deq;
public:
    PmergeMe(char **value);
    ~PmergeMe();
    bool check_valid_input(char **value);
    bool ifdigit(char *value);
    void sort_data();
    void sort_deq();
};
