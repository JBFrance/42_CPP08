#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>


template <class T>
bool   easyFind(T& hay, int needle)
{
    std::vector<int>::iterator i = std::find(hay.begin(), hay.end(), needle);
    if(i == hay.end())
        throw (std::out_of_range("Could not find."));
    return (true);
    
};

#endif