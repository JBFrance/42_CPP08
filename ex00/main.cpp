#include "easyfind.hpp"

int    add_rand(std::vector<int> &arr)
{ 
    srand(time(NULL));

    for (int i = 0; i < 8; i++)
    {
        arr.push_back(rand());
    }
    return arr[4];
}

int main()
{
    std::vector<int> arr;
    int i = add_rand(arr);
    try
    {
        std::cout << (i == arr[4]) << "\n";
		easyFind(arr, i);
	}
    catch(const std::out_of_range &e)
    {
		std::cout << e.what() << std::endl;
	}
}