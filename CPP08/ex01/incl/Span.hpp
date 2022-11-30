/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:02:42 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/25 15:38:26 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_

# include <exception>
# include <vector>

class Span
{

	public:

	// constructors
		Span();
		Span(unsigned int n);
		Span(const Span &src);

	// destructor
		~Span();

	// assign allocator
		Span	&operator=(const Span &rhs);

	// getters
		int	getSize() const;
		int	getVct(int i) const;

	// functions
		void	addNumber(int nb);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan() const;
		int		longestSpan() const;

	// exception
		class Empty : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("The container size is too short.");
			}
		};
		class Full : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("The container is full.");
			}
		};


	private:

		unsigned int		_size;
		std::vector<int>	*_vct;

};

#endif
