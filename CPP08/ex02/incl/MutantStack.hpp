/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:59:17 by mdelforg          #+#    #+#             */
/*   Updated: 2022/11/25 14:57:58 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_

# include <stack>
# include <deque>

template < class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

	public:

		// typedefs
			typedef typename std::stack<T, Container>::container_type::iterator					iterator;
			typedef typename std::stack<T, Container>::container_type::const_iterator			const_iterator;
			typedef typename std::stack<T, Container>::container_type::reverse_iterator			reverse_iterator;
			typedef typename std::stack<T, Container>::container_type::const_reverse_iterator	const_reverse_iterator;

		// constructors
			MutantStack() : std::stack<T, Container>() {}
			MutantStack(const MutantStack &src) : std::stack<T, Container>(src) {}

		// destructor
			virtual ~MutantStack() {};

		// assign operator
			MutantStack	&operator=(const MutantStack &rhs)
			{
				std::stack<T, Container>::operator=(rhs);
				return (*this);
			}

		// functions
			iterator		begin() { return (std::stack<T>::c.begin()); }
			const_iterator	begin() const { return (std::stack<T>::c.begin()); }
			iterator		end() { return (std::stack<T>::c.end()); }
			const_iterator	end() const { return (std::stack<T>::c.end()); }
			reverse_iterator	rbegin() { return (std::stack<T>::c.rbegin()); }
			const_reverse_iterator	rbegin() const { return (std::stack<T>::c.rbegin()); }
			reverse_iterator	rend() { return (std::stack<T>::c.rend()); }
			const_reverse_iterator	rend() const { return (std::stack<T>::c.rend()); }

};

#endif
