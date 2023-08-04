/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:07:54 by mdelforg          #+#    #+#             */
/*   Updated: 2023/03/30 14:20:09 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PMERGEME_HPP_
# define _PMERGEME_HPP_

# include <iostream>
# include <iomanip>
# include <vector>
# include <deque>
# include <iterator>
# include <exception>
# include <cctype>
# include <ctime>

class PmergeMe
{

	public:

	// typedefs
		typedef	std::vector<int>::iterator	vctIterator;
		typedef	std::deque<int>::iterator	dqIterator;

	// constructors
		PmergeMe(char **inTab);
		PmergeMe(const PmergeMe &src);

	// destructor
		~PmergeMe();

	// assign operator
		PmergeMe	&operator=(const PmergeMe &rhs);

	// function
		void	printArr(std::string str);

	// exception
		class myEx : public std::exception
		{
		  virtual const char* what() const throw()
		  {
			return "Error";
		  }
		};


	private:

	// variables
		int					_K;
		std::vector<int>	_vct;
		std::deque<int>		_dq;

	// constructor
		PmergeMe();

	// functions
		void	_parsing(char **tab);
		void	_parseStr(const char *str);

		void	_sortVct(int p, int r);
		void	_mergeVct(int p, int q, int r);
		void	_insertVct(int p, int q);

		void	_sortDq(int p, int r);
		void	_mergeDq(int p, int q, int r);
		void	_insertDq(int p, int q);

		struct timespec	_getTime() const;
		void	_printTime(clock_t tVec, clock_t tDq);

};

#endif
