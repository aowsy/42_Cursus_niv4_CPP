/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:02:39 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/21 09:39:12 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

# include <iostream>
# include <exception>

template <typename T>
class Array
{

	public:

	// constructors
		Array() : _n(0), _array(new T[0]) {}
		Array(unsigned int n) : _n(n), _array(new T[n]) {}
		Array(const Array & src)
		{
			this->_n = src.size();
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i] = src._array[i];
			return ;
		}

	// destructor
		~Array()
		{
			delete [] this->_array;
			return ;
		}

	// assign operator
		Array	& operator=(const Array & rhs)
		{
			this->_n = rhs.size();
			delete [] this->_array;
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}

	// operator []
		T	& operator[](unsigned int idx)
		{
			if (idx >= this->_n)
				throw Array::BadIndex();
			return (this->_array[idx]);
		}

	// function
		unsigned int	size() const
		{
			return (this->_n);
		}

	// exception
		class BadIndex : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Wrong index, too high.");
				}
		};


	private:

		unsigned int	_n;
		T				*_array;

};

#endif
