/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelforg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 09:19:21 by mdelforg          #+#    #+#             */
/*   Updated: 2023/08/04 11:04:14 by mdelforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          CONSTRUCTOR                             */
/*                                                                  */
/* ---------------------------------------------------------------- */
PmergeMe::PmergeMe(char **inTab) : _K(5)
{
	this->_parsing(inTab);

	this->printArr("Before:  ");

	clock_t	tVct = clock();
	this->_sortVct(0, this->_vct.size() - 1);
	tVct = clock() - tVct;

	clock_t	tDq = clock();
	this->_sortDq(0, this->_vct.size() - 1);
	tDq = clock() - tDq;

	this->printArr("After:   ");
	this->_printTime(tVct, tDq);
}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          DESTRUCTOR                              */
/*                                                                  */
/* ---------------------------------------------------------------- */
PmergeMe::~PmergeMe() {}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          ASSIGN OPERATOR                         */
/*                                                                  */
/* ---------------------------------------------------------------- */
PmergeMe	&PmergeMe::operator=(const PmergeMe &rhs)
{
	this->_K = rhs._K;
	this->_vct = rhs._vct;
	this->_dq = rhs._dq;
	return (*this);
}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          PARSING                                 */
/*                                                                  */
/* ---------------------------------------------------------------- */
void	PmergeMe::_parsing(char **tab)
{
	if (!tab)
		throw myEx();
	for (int i = 0; tab[i]; i++)
	{
		if (!tab[i])
			throw myEx();
		this->_parseStr(tab[i]);
	}
}

void	PmergeMe::_parseStr(const char *str)
{
	if (!str[0])
		throw myEx();

	for (int i = 0; str[i]; i++)
	{
		if (!std::isdigit(str[i]))
			throw myEx();
	}

	int	nb = std::atoi(str);
	if (nb < 0)
		throw myEx();
	this->_vct.push_back(nb);
	this->_dq.push_back(nb);
}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          SORT VECTOR                             */
/*                                                                  */
/* ---------------------------------------------------------------- */
// recursion
void	PmergeMe::_sortVct(int p, int r)
{
	if (r - p > this->_K)
	{
		int	q = (p + r) / 2;
		this->_sortVct(p, q);
		this->_sortVct(q + 1, r);
		this->_mergeVct(p, q, r);
	}
	else
		this->_insertVct(p, r);
}

// merge
void	PmergeMe::_mergeVct(int p, int q, int r)
{
	std::vector<int>	tmpVct;

	int i = p;
	int j = q + 1;

	while (i <= q && j <= r)
	{
		if (this->_vct[i] <= this->_vct[j])
		{
			tmpVct.push_back(this->_vct[i]);
			i++;
		}
		else
		{
			tmpVct.push_back(this->_vct[j]);
			j++;
		}
	}
	while (i <= q)
	{
		tmpVct.push_back(this->_vct[i]);
		i++;
	}
	while (j <= r)
	{
		tmpVct.push_back(this->_vct[j]);
		j++;
	}
	for (int i = p; i <= r; ++i)
		this->_vct[i] = tmpVct[i - p];
}

// insert
void	PmergeMe::_insertVct(int p, int q)
{
	for (int j = p + 1; j < q + 1; j++)
	{
		int key = this->_vct[j];
		int i = j - 1;

		while (i >= p && this->_vct[i] > key)
		{
			this->_vct[i + 1] = this->_vct[i];
			i--;
		}
		this->_vct[i + 1] = key;
	}
}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          SORT DEQUE                              */
/*                                                                  */
/* ---------------------------------------------------------------- */
// recursion
void	PmergeMe::_sortDq(int p, int r)
{
	if (r - p > this->_K)
	{
		int	q = (p + r) / 2;
		this->_sortDq(p, q);
		this->_sortDq(q + 1, r);
		this->_mergeDq(p, q, r);
	}
	else
		this->_insertDq(p, r);
}

// merge
void	PmergeMe::_mergeDq(int p, int q, int r)
{
	std::deque<int>	tmpDq;

	int i = p;
	int j = q + 1;

	while (i <= q && j <= r)
	{
		if (this->_dq[i] <= this->_dq[j])
		{
			tmpDq.push_back(this->_dq[i]);
			i++;
		}
		else
		{
			tmpDq.push_back(this->_dq[j]);
			j++;
		}
	}
	while (i <= q)
	{
		tmpDq.push_back(this->_dq[i]);
		i++;
	}
	while (j <= r)
	{
		tmpDq.push_back(this->_dq[j]);
		j++;
	}
	for (int i = p; i <= r; ++i)
		this->_dq[i] = tmpDq[i - p];
}

// insert
void	PmergeMe::_insertDq(int p, int q)
{
	for (int j = p + 1; j < q + 1; j++)
	{
		int key = this->_dq[j];
		int i = j - 1;

		while (i >= p && this->_dq[i] > key)
		{
			this->_dq[i + 1] = this->_dq[i];
			i--;
		}
		this->_dq[i + 1] = key;
	}
}


/* ---------------------------------------------------------------- */
/*                                                                  */
/*                          PRINT                                   */
/*                                                                  */
/* ---------------------------------------------------------------- */
// print container
void	PmergeMe::printArr(std::string str)
{
	std::cout << str;
	for (vctIterator it = this->_vct.begin(); it != this->_vct.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl << std::endl;
}

// print time
void	PmergeMe::_printTime(clock_t tVec, clock_t tDq)
{
	double	t = ((double)tVec / CLOCKS_PER_SEC) * 1000000;
	std::cout << "Time to process a range of " << std::setw(4) << this->_vct.size() << " elements with std::vector : " << std::setw(0) <<  std::fixed << std::setprecision(0) << t << " us" << std::endl;

	t = ((double)tDq / CLOCKS_PER_SEC) * 1000000;
	std::cout << "Time to process a range of " << std::setw(4) << this->_dq.size() << " elements with std::deque  : " << std::setw(0) <<  std::fixed << std::setprecision(0) << t << " us" << std::endl;
}
