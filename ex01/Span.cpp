#include "Span.hpp"
Span::Span()
{
	_I = 0;
}

Span::Span(const Span &other)
{
	*this = other;
}

Span::Span(unsigned int I)
{
	_I = I;
}

Span &Span::operator=(const Span &other)
{
	if (this == &other)
		return *this;
	_I = other._I;
	_arr = other._arr;
	return *this;
}

void Span::addNumber(int n)
{
    if(_I == 0)
        throw std::out_of_range("Span is empty");
	if (_arr.size() >= _I)
		throw std::out_of_range("Span is full");
	_arr.push_back(n);
}

int Span::shortestSpan()
{
    if(_I == 0)
        throw std::out_of_range("Span is empty");
	if (_arr.size() <= 1)
		throw std::out_of_range("Span is empty or has only one element");
	std::vector<int> tmp = _arr;
	std::sort(tmp.begin(), tmp.end());
	int min = std::abs(tmp[1] - tmp[0]);
	for (size_t i = 1; i < tmp.size(); i++)
	{
		if (std::abs(tmp[i] - tmp[i - 1]) < min)
			min = std::abs(tmp[i] - tmp[i - 1]);
	}
	//std::cout << "eta 1? " << min << std::endl;
	return min;
}

int Span::longestSpan()
{
    if(_I == 0)
        throw std::out_of_range("Span is empty");
	if (_arr.size() <= 1)
		throw std::out_of_range("Span is empty or has only one element");
	std::vector<int> tmp = _arr;
	std::sort(tmp.begin(), tmp.end());
	return (std::abs(_arr.back() - _arr.front()));
}

Span::~Span()
{

}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_arr.size() + std::distance(begin, end) > _I)
		throw std::out_of_range("Span full");
	_arr.insert(_arr.end(), begin, end);
}
