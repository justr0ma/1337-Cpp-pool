#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **value)
{
    check_valid_input(value);
    sort_data();
    sort_deq();
}

PmergeMe::~PmergeMe()
{
}

bool PmergeMe::check_valid_input(char **value)
{
    size_t i = 1;
    while (value[i])
    {
        ifdigit(value[i]);
        vec.push_back(std::atoi(value[i]));
        deq.push_back(std::atoi(value[i]));
        i++;
    }
    std::cout << "Before: ";
    i = 0;
    while (i < deq.size())
    {
        std::cout << deq[i] << " ";
        i++;
    }
    return true;
}

bool PmergeMe::ifdigit(char *value)
{
    int i = 0;
    while (value[i])
    {
        if (!isdigit(value[i]))
        {
            std::cout << "erro" << std::endl;
            exit(1);
        }
        i++;
    }
    return true;
}

void PmergeMe::sort_data()
{
    std::vector<std::pair<int, int> > tmp_vec;
    std::vector<int>::iterator low1;
    size_t j = 0;
    int key;
    clock_t t;
    t = clock();
    size_t size_of_vec = vec.size();
    int last_one;
    if ((size_of_vec/2)*2 != size_of_vec)
        last_one = vec[size_of_vec - 1];
    for (size_t i = 0; i < size_of_vec/2; i++)
    {
        tmp_vec.push_back(std::make_pair(vec[j], vec[j + 1]));
        j += 2;
    }
    vec.clear();
    for (size_t i = 1; i < tmp_vec.size(); i++)
    {
        key = tmp_vec[i].first;
        j = i - 1;
        while (j >= 0 && tmp_vec[j].first > key)
        {
            tmp_vec[j + 1].first = tmp_vec[j].first;
            j = j - 1;
        }
        tmp_vec[j + 1].first = key;
    }
    for (size_t i = 0; i < tmp_vec.size(); i++)
        vec.push_back(tmp_vec[i].first);
    for (size_t i = 0; i < tmp_vec.size(); i++)
    {
        low1 = std::lower_bound(vec.begin(), vec.end(), tmp_vec[i].second);
        vec.insert(low1, tmp_vec[i].second);
    }
    if ((size_of_vec/2)*2 != size_of_vec)
    {
        low1 = std::lower_bound(vec.begin(), vec.end(), last_one);
        vec.insert(low1, last_one);
    }
    std::cout << "\nAfter: ";
    size_t i = 0;
    while (i < vec.size())
    {
        std::cout << vec[i] << " ";
        i++;
    }
    std::cout << std::endl << "Time to process a range of "<< size_of_vec << "elements with std::[..] : "<< float(clock() - t) / CLOCKS_PER_SEC << " us" << std::endl;
}

void PmergeMe::sort_deq()
{
    std::deque<std::pair<int, int> > tmp_vec;
    std::deque<int>::iterator low1;
    size_t j = 0;
    size_t size_of_deq = deq.size();
    int last_one;
    clock_t t;
    t = clock();
    if ((size_of_deq/2)*2 != size_of_deq)
        last_one = vec[size_of_deq - 1];
    for (size_t i = 0; i < size_of_deq/2; i++)
    {
        tmp_vec.push_back(std::make_pair(deq[j], deq[j + 1]));
        j += 2;
    }
    deq.clear();
    size_t ii, jj;
    for (ii = 0; ii < tmp_vec.size() - 1; ii++)
        for (jj = 0; jj < tmp_vec.size() - ii - 1; jj++)
            if (tmp_vec[jj].first > tmp_vec[jj + 1].first)
            {
                int tmp = tmp_vec[jj].first;
                tmp_vec[jj].first = tmp_vec[jj + 1].first;
                tmp_vec[jj + 1].first = tmp;
            }

    for (size_t i = 0; i < tmp_vec.size(); i++)
        vec.push_back(tmp_vec[i].first);
    for (size_t i = 0; i < tmp_vec.size(); i++)
    {
        low1 = std::lower_bound(deq.begin(), deq.end(), tmp_vec[i].second);
        deq.insert(low1, tmp_vec[i].second);
    }
    if ((size_of_deq/2)*2 != size_of_deq)
    {
        low1 = std::lower_bound(deq.begin(), deq.end(), last_one);
        deq.insert(low1, last_one);
    }
    std::cout << "Time to process a range of "<< size_of_deq << "elements with std::[..] : "<< float(clock() - t) / CLOCKS_PER_SEC << " us" << std::endl;
}
