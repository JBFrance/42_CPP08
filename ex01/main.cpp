#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(4);
	sp.addNumber(7);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(13);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
    try
    {
        std::vector<int> sp1(10000);
        std::srand(time(NULL));
        std::generate(sp1.begin(), sp1.end(), std::rand);

        Span span(sp1.size());

        span.addRange(sp1.begin(), sp1.end());
		std::cout << "first elem == " << sp1.front() << std::endl;
		std::cout << "last elem == " << sp1.back() << std::endl;
		std::cout << "last - first abs == " << std::abs(sp1.back() - sp1.front()) << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
	return 0;
}