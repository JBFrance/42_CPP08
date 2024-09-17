#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span 
{
	private:
	unsigned int _I;
	std::vector<int> _arr;
public:
	Span();
	Span(unsigned int I);
	Span(Span const &other);
	~Span();
	Span &operator=(Span const &other);
	void addNumber(int n);
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
};

#endif