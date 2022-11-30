/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:13:47 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/25 15:43:22 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*							- Constructors -							*/

// default
Span::Span() : _size(0), _vct(new std::vector<int>) {}

// by unsigned integer
Span::Span(unsigned int n) : _size(n), _vct(new std::vector<int>) {}

// copy
Span::Span(const Span &src) : _vct(new std::vector<int>)
{
	*this = src;
}



/*							- Destructor -								*/

Span::~Span()
{
	delete (this->_vct);
}



/*							- Assign operator -							*/

Span	&Span::operator=(const Span &rhs)
{
	this->_size = rhs._size;
	this->_vct = rhs._vct;

	return (*this);
}



/*							- Getters -									*/

int	Span::getSize() const
{
	return (this->_vct->size());
}


int	Span::getVct(int i) const
{
	return (this->_vct->at(i));
}



/*							- Functions -								*/

void	Span::addNumber(int nb)
{
	if (this->_vct->size() < this->_size)
		this->_vct->push_back(nb);
	else
		throw Span::Full();
}


void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		if (this->_size <= this->_vct->size())
			throw Span::Full();
		this->_vct->push_back(*begin);
		begin++;
	}
}


int	Span::shortestSpan() const
{
	if (this->_size == 0 || this->_size == 1)
		throw Span::Empty();

	unsigned int				span = -1;
	std::vector<int>::iterator	end = this->_vct->end();

	for (std::vector<int>::iterator start = this->_vct->begin(); start != end; start++)
	{
		for (std::vector<int>::iterator reach = start + 1; reach != end; reach++)
		{
			if (span > static_cast<unsigned int>(*reach - *start))
				span = static_cast<unsigned int>(*reach - *start);
		}
	}

	return (span);
}


int	Span::longestSpan() const
{
	if (this->_size == 0 || this->_size == 1)
		throw Span::Empty();

	return (*(std::max_element(this->_vct->begin(), this->_vct->end()))
			- *(std::min_element(this->_vct->begin(), this->_vct->end())));
}
